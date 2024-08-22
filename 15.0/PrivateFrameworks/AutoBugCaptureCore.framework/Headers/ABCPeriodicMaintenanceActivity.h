// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABCPERIODICMAINTENANCEACTIVITY_H
#define ABCPERIODICMAINTENANCEACTIVITY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ABCPeriodicMaintenanceActivity : NSObject {
    NSMutableArray *_activities;
    NSUInteger _nextActivityIndex;
}




+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;
+(void)registerPeriodicActivityWithIdentifier:(id)arg0 queue:(id)arg1 activity:(id)arg2 ;
-(id)init;
-(void)_handleActivityRun:(id)arg0 ;
-(void)_registerPeriodicActivityWithIdentifier:(id)arg0 queue:(id)arg1 activity:(id)arg2 ;
-(void)_registerPeriodicMaintenanceActivity;
-(void)dealloc;


@end


#endif