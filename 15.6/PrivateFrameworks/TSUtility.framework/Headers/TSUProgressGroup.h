// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUPROGRESSGROUP_H
#define TSUPROGRESSGROUP_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "TSUProgress.h"

@interface TSUProgressGroup : TSUProgress {
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}




-(BOOL)isIndeterminate;
-(CGFloat)maxValue;
-(CGFloat)value;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initWithChildren:(id)arg0 ;
-(void)dealloc;
-(void)p_updateChildrenProgressObservers;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif