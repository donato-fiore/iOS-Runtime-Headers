// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSSESSIONPROXY_H
#define TVRMSSESSIONPROXY_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface TVRMSSessionProxy : NSObject {
    NSTimer *_heartbeatTimer;
    CGFloat _sessionTimeout;
    CGFloat _lastHeartbeatTime;
    BOOL _isPaused;
}


@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


-(BOOL)sessionMatchesNotification:(id)arg0 ;
-(id)init;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(int)heartbeatTime;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_sendHeartbeat:(id)arg0 ;
-(void)beginHeartbeat;
-(void)dealloc;
-(void)endHeartbeat;
-(void)heartbeatDidFail;


@end


#endif