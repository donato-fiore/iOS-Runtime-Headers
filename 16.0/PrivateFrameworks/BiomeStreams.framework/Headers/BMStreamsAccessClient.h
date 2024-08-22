// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTREAMSACCESSCLIENT_H
#define BMSTREAMSACCESSCLIENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BMStreamsAccessAssertionCache.h"
#import "BMStreamsAccessTracker.h"

@interface BMStreamsAccessClient : NSObject {
    NSMutableDictionary *_accessAssertions;
    BMStreamsAccessAssertionCache *_accessAssertionCache;
    BMStreamsAccessTracker *_accessTracker;
}




+(BOOL)checkCurrentProcessEntitlementsForWriteAccessToStreamIdentifier:(id)arg0 ;
-(BOOL)_currentProcessIsSandboxed;
-(BOOL)_requestAccess:(NSUInteger)arg0 toStreamType:(NSUInteger)arg1 streamIdentifier:(id)arg2 ;
-(BOOL)_requestAccessToFlexibleStorage;
-(BOOL)requestAccessToFlexibleStorage;
-(BOOL)requestReadAccessTokenForStreamIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
-(BOOL)requestReadWriteAccessTokenForStreamIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
-(id)_newConnectionForDomain:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSandboxExtensionCache:(id)arg0 accessTracker:(id)arg1 ;
-(void)dealloc;
-(void)invalidateConnection:(id)arg0 ;


@end


#endif