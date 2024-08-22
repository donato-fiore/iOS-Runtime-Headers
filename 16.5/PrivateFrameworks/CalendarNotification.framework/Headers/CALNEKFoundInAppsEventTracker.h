// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNEKFOUNDINAPPSEVENTTRACKER_H
#define CALNEKFOUNDINAPPSEVENTTRACKER_H

@class NSString;
@protocol CALNFoundInAppsEventTracker;

#import <Foundation/Foundation.h>


@interface CALNEKFoundInAppsEventTracker : NSObject <CALNFoundInAppsEventTracker>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)trackPseudoEventInitialTimeToLeaveFired;


@end


#endif