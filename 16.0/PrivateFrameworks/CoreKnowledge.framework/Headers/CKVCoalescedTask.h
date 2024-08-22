// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVCOALESCEDTASK_H
#define CKVCOALESCEDTASK_H

@class NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface CKVCoalescedTask : NSObject {
    NSNumber *_taskId;
    NSNumber *_eventId;
    id *_runBlock;
    uint8_t _executed;
}


@property (readonly, nonatomic) NSDate *date; // ivar: _date


-(BOOL)isExecuted;
// -(id)_runBlockForTask:(SEL)arg0 completionQueue:(id)arg1 completion:(unk)arg2  ;
-(id)description;
// -(id)initWithTaskId:(id)arg0 eventId:(id)arg1 date:(id)arg2 taskBlock:(id)arg3 completionQueue:(unk)arg4 completion:(id)arg5  ;
-(void)execute;
-(void)executeAfterDelay:(CGFloat)arg0 onQueue:(id)arg1 ;


@end


#endif