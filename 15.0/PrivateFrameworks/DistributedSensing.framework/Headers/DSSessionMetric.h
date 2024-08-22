// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSSESSIONMETRIC_H
#define DSSESSIONMETRIC_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface DSSessionMetric : NSObject {
    NSDate *_sessionStartTime;
    CGFloat _sessionDuration;
    NSDate *_providerAvailableStartTime;
    CGFloat _totalProviderAvailableDuration;
    int _sessionStopReason;
    int _deviceRole;
    int _linkType;
    NSUInteger _numPotentialProviders;
    NSUInteger _numHeartbeats;
    NSUInteger _numMotionStateMessages;
    NSUInteger _activeProviderLostCount;
    NSUInteger _providerAvailability;
    NSUInteger _maxListenerClients;
    CGFloat _avgListenerStartInterval;
    BOOL _unterminatedSession;
    BOOL _isSessionStartUnsuccessful;
}


@property (retain, nonatomic) NSString *eventName; // ivar: _eventName


-(id)init;
-(id)sessionMetricFinalize;
-(void)dsFirstListenerSessionSetUnsuccessful;
-(void)dsProviderAvailable;
-(void)dsProviderUnavailable;
-(void)dsSessionCompletedWithStopReason:(int)arg0 numHeartbeats:(NSUInteger)arg1 numMotionStateMessages:(NSUInteger)arg2 activeProviderLostCount:(NSUInteger)arg3 dataLinkType:(int)arg4 maxListenerClients:(NSUInteger)arg5 avgListenerStartInterval:(CGFloat)arg6 ;
-(void)dsSessionStartedWithDeviceRole:(int)arg0 numPotentialProviders:(NSUInteger)arg1 unterminatedSession:(BOOL)arg2 ;


@end


#endif