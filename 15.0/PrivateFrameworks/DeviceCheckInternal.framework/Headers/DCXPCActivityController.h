// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCXPCACTIVITYCONTROLLER_H
#define DCXPCACTIVITYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface DCXPCActivityController : NSObject



+(id)sharedInstance;
-(id)_activityCriteriaWithFrequency:(CGFloat)arg0 ;
-(void)_performMetadataRefreshForActivity:(id)arg0 ;
-(void)_registerActivityWithInterval:(CGFloat)arg0 ;
-(void)start;
-(void)updateActivityScheduleWithAsset:(id)arg0 ;


@end


#endif