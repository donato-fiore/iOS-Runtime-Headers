// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKTASKSCHEDULER_H
#define NTKTASKSCHEDULER_H


#import <Foundation/Foundation.h>


@interface NTKTaskScheduler : NSObject

@property CGFloat waitingPeriod; // ivar: _waitingPeriod


-(id)initWithQueue:(id)arg0 ;
// -(id)scheduleTask:(id)arg0 identifier:(unk)arg1  ;
-(void)cancelAllTasks;
-(void)cancelTaskForToken:(id)arg0 ;


@end


#endif