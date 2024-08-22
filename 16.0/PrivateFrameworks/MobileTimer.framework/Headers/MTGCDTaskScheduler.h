// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTGCDTASKSCHEDULER_H
#define MTGCDTASKSCHEDULER_H

@class NSString;
@protocol MTTaskScheduler;

#import <Foundation/Foundation.h>


@interface MTGCDTaskScheduler : NSObject <MTTaskScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_scheduleTask:(id)arg0 withCompletion:(id)arg1 ;
-(void)scheduleTask:(id)arg0 ;
-(void)scheduleTaskGroup:(id)arg0 ;


@end


#endif