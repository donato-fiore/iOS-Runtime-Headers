// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUPROGRESSCONTEXTPROGRESS_H
#define TSUPROGRESSCONTEXTPROGRESS_H

@protocol OS_dispatch_queue;


#import "TSUProgress.h"
#import "TSUProgressContext.h"

@interface TSUProgressContextProgress : TSUProgress {
    TSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}




-(BOOL)isIndeterminate;
-(CGFloat)maxValue;
-(CGFloat)value;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)init;
-(id)initWithProgressContext:(id)arg0 ;
-(void)dealloc;
-(void)p_progressDidChange:(id)arg0 ;
-(void)p_updateProgressContextObserver;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif