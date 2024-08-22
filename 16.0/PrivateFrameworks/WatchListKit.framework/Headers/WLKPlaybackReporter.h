// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPLAYBACKREPORTER_H
#define WLKPLAYBACKREPORTER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WLKPlaybackReporter : NSObject {
    NSXPCConnection *_xpcConnection;
    os_unfair_lock_s _xpcLock;
}




-(id)_connection;
-(id)init;
-(void)_invalidationHandler;
-(void)endPlaybackSession:(id)arg0 ;
-(void)reportPlayback:(id)arg0 sessionID:(id)arg1 completion:(id)arg2 ;
-(void)reportPlayback:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif