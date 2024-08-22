// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHRANALYTICSMANAGER_H
#define CHRANALYTICSMANAGER_H


#import <Foundation/Foundation.h>


@interface CHRAnalyticsManager : NSObject {
    ? healthStore;
    ? conceptStore;
    ? queuedEvents;
    ? managerQueue;
    ? optInDetermined;
}




+(id)shared;
-(id)init;
-(void)postOnboardingFunnelEventWithStep:(NSInteger)arg0 context:(NSInteger)arg1 gatewayUrl:(id)arg2 ;
-(void)postPrivacyInteractionEventWithType:(NSInteger)arg0 context:(NSInteger)arg1 action:(BOOL)arg2 ;
-(void)postUserInteractionEventWithType:(NSInteger)arg0 context:(NSInteger)arg1 action:(NSInteger)arg2 category:(id)arg3 conceptIdentifier:(id)arg4 ;
-(void)submitAndFlushQueuedEvents;


@end


#endif