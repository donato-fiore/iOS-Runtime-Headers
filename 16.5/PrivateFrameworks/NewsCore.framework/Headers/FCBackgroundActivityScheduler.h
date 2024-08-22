// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCBACKGROUNDACTIVITYSCHEDULER_H
#define FCBACKGROUNDACTIVITYSCHEDULER_H

@class NSString;
@protocol FCBackgroundActivityScheduler;

#import <Foundation/Foundation.h>


@interface FCBackgroundActivityScheduler : NSObject <FCBackgroundActivityScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_makeFromFCResult:(NSInteger)arg0 ;
-(id)_makeFullIdentifierFromIdentifier:(id)arg0 ;
-(void)cancelRepeatingTaskWithIdentifier:(id)arg0 ;
-(void)requestBackgroundAppRefreshStartingAfter:(id)arg0 before:(id)arg1 ;
-(void)scheduleBackgroundTaskRepeatingAtInterval:(CGFloat)arg0 identifier:(id)arg1 task:(id)arg2 ;


@end


#endif