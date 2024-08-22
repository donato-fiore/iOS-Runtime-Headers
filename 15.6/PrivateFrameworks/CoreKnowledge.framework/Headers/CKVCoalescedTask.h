// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVCOALESCEDTASK_H
#define CKVCOALESCEDTASK_H

@class NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface CKVCoalescedTask : NSObject {
    NSNumber *_taskId;
    NSNumber *_eventId;
    id *_runBlock;
}


@property (readonly, nonatomic) BOOL arrivedInCoalescingWindow; // ivar: _arrivedInCoalescingWindow
@property (readonly, nonatomic) NSDate *date; // ivar: _date


// -(id)_runBlockForTask:(SEL)arg0 eventRegistry:(id)arg1 completion:(unk)arg2 completionQueue:(id)arg3  ;
-(id)description;
// -(id)initWithTaskId:(id)arg0 eventId:(id)arg1 date:(id)arg2 arrivedInCoalescingWindow:(BOOL)arg3 eventRegistry:(id)arg4 taskBlock:(id)arg5 completion:(unk)arg6 completionQueue:(id)arg7  ;
-(void)cancel;
-(void)execute;
-(void)executeAfterDelay:(CGFloat)arg0 onQueue:(id)arg1 ;


@end


#endif