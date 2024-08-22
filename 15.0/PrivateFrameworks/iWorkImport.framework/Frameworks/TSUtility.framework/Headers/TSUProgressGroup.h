// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUPROGRESSGROUP_H
#define TSUPROGRESSGROUP_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "TSUProgress.h"

@interface TSUProgressGroup : TSUProgress {
    NSArray *_children;
    NSArray *_childrenProgressObservers;
    NSObject<OS_dispatch_queue> *_childrenProgressObserversQueue;
}




-(BOOL)isIndeterminate;
-(CGFloat)maxValue;
-(CGFloat)value;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initForSubclass;
-(id)initWithChildren:(id)arg0 ;
-(void)p_updateChildrenProgressObservers;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif