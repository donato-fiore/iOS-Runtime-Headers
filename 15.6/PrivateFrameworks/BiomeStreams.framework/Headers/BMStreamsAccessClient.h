// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTREAMSACCESSCLIENT_H
#define BMSTREAMSACCESSCLIENT_H

@class NSMutableDictionary, NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>

#import "BMStreamsAccessAssertionCache.h"
#import "BMStreamsAccessTracker.h"

@interface BMStreamsAccessClient : NSObject {
    NSMutableDictionary *_accessAssertions;
    BMStreamsAccessAssertionCache *_accessAssertionCache;
    BMStreamsAccessTracker *_accessTracker;
    NSXPCListenerEndpoint *_listenerEndpoint;
}




-(BOOL)_currentProcessIsSandboxed;
-(BOOL)_requestAccess:(NSUInteger)arg0 toStreamType:(NSUInteger)arg1 streamIdentifier:(id)arg2 ;
-(BOOL)requestDSLWriteAccess;
-(BOOL)requestReadAccessTokenForStreamIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
-(BOOL)requestReadWriteAccessTokenForStreamIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithSandboxExtensionCache:(id)arg0 accessTracker:(id)arg1 listenerEndpoint:(id)arg2 ;
-(id)newConnection;
-(void)dealloc;
-(void)invalidateConnection:(id)arg0 ;


@end


#endif