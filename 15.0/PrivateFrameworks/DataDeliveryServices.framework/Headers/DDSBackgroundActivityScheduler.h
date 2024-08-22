// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSBACKGROUNDACTIVITYSCHEDULER_H
#define DDSBACKGROUNDACTIVITYSCHEDULER_H

@class NSMutableDictionary;
@protocol DDSBackgroundActivitySchedulerDelegate;

#import <Foundation/Foundation.h>


@interface DDSBackgroundActivityScheduler : NSObject

@property (retain, nonatomic) NSObject<DDSBackgroundActivitySchedulerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *schedulerByIdentifier; // ivar: _schedulerByIdentifier


-(id)init;
-(void)cancelActivityWithIdentifier:(id)arg0 ;
-(void)scheduleActivityWithIdentifier:(id)arg0 interval:(CGFloat)arg1 tolerance:(CGFloat)arg2 ;


@end


#endif