// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKFOUNDINAPPSEVENTTRACKER_H
#define EKFOUNDINAPPSEVENTTRACKER_H


#import <Foundation/Foundation.h>


@interface EKFoundInAppsEventTracker : NSObject



+(void)trackPseudoEventDateChanged;
+(void)trackPseudoEventDetailsOpened;
+(void)trackPseudoEventInitialTimeToLeaveFired;
+(void)trackPseudoEventsExpired:(int)arg0 ;


@end


#endif