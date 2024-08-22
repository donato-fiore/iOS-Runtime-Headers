// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCONNECTIONMANAGER_H
#define LNCONNECTIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol LNConnectionDelegate;

#import <Foundation/Foundation.h>

#import "LNTranscriptPrivilegedProvider.h"

@interface LNConnectionManager : NSObject <LNConnectionDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableDictionary *connectionsByBundleIdentifier; // ivar: _connectionsByBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) LNTranscriptPrivilegedProvider *transcriptProvider; // ivar: _transcriptProvider


+(id)sharedInstance;
-(id)connectionForBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)addConnection:(id)arg0 ;
-(void)appWillResignActive:(id)arg0 ;
-(void)connection:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)donateActionRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateAllConnections;
-(void)removeConnection:(id)arg0 ;


@end


#endif