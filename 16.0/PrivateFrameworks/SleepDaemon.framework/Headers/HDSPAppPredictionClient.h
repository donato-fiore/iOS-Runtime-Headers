// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPAPPPREDICTIONCLIENT_H
#define HDSPAPPPREDICTIONCLIENT_H

@protocol HDSPSleepProactiveBridge, HKSPSleepFocusModeBridge;

#import <Foundation/Foundation.h>


@interface HDSPAppPredictionClient : NSObject <HDSPSleepProactiveBridge>



@property (readonly, nonatomic) NSObject<HKSPSleepFocusModeBridge> *sleepFocusModeBridge; // ivar: _sleepFocusModeBridge


-(id)initWithSleepFocusModeBridge:(id)arg0 ;
-(void)createSuggestedHomeScreenPageWithCompletion:(id)arg0 ;


@end


#endif