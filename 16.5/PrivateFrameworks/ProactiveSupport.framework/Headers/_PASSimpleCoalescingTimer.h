// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASSIMPLECOALESCINGTIMER_H
#define _PASSIMPLECOALESCINGTIMER_H


#import <Foundation/Foundation.h>

#import "_PASCoalescingTimer.h"

@interface _PASSimpleCoalescingTimer : NSObject {
    _PASCoalescingTimer *_timer;
}




-(id)initWithQueue:(id)arg0 leewaySeconds:(CGFloat)arg1 operation:(id)arg2 ;
-(id)initWithQueue:(id)arg0 operation:(id)arg1 ;
-(void)cancelPendingOperations;
-(void)runAfterDelaySeconds:(CGFloat)arg0 coalescingBehavior:(unsigned char)arg1 ;
-(void)runAfterStrictDelaySeconds:(CGFloat)arg0 ;
-(void)runImmediately;


@end


#endif