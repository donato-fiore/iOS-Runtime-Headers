// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPERIODICSCHEDULER_H
#define _CDPERIODICSCHEDULER_H

@class NSString;
@protocol _CDPeriodicScheduler;

#import <Foundation/Foundation.h>


@interface _CDPeriodicScheduler : NSObject <_CDPeriodicScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)registerJob:(id)arg0 ;
-(void)unregisterJob:(id)arg0 ;
-(void)updateExecutionCriteriaOnJob:(id)arg0 ;


@end


#endif