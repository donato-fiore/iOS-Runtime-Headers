// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSCHEDULEDITEM_H
#define NUSCHEDULEDITEM_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUScheduledItem : NSObject

@property (readonly) id *block; // ivar: _block
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSUInteger scheduledTime; // ivar: _scheduledTime


-(NSInteger)compare:(id)arg0 ;
-(id)initWithScheduledTime:(NSUInteger)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dispatch;


@end


#endif