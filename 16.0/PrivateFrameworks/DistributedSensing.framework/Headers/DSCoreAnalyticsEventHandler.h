// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSCOREANALYTICSEVENTHANDLER_H
#define DSCOREANALYTICSEVENTHANDLER_H


#import <Foundation/Foundation.h>

#import "DSSessionMetric.h"

@interface DSCoreAnalyticsEventHandler : NSObject {
    DSSessionMetric *_sessionMetric;
}




-(id)init;
-(void)dsFirstListenerSessionSetUnsuccessful;
-(void)dsProviderAvailable;
-(void)dsProviderUnavailable;
-(void)dsSessionCompletedWithStopReason:(int)arg0 numHeartbeats:(NSUInteger)arg1 numMotionStateMessages:(NSUInteger)arg2 activeProviderLostCount:(NSUInteger)arg3 dataLinkType:(int)arg4 maxListenerClients:(NSUInteger)arg5 avgListenerStartInterval:(CGFloat)arg6 ;
-(void)dsSessionStartedWithDeviceRole:(int)arg0 numPotentialProviders:(NSUInteger)arg1 unterminatedSession:(BOOL)arg2 ;


@end


#endif