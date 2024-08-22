// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUSCALEDPROGRESS_H
#define TSUSCALEDPROGRESS_H

@protocol OS_dispatch_queue;


#import "TSUProgress.h"
#import "TSUScaledProgressStorage.h"

@interface TSUScaledProgress : TSUProgress {
    TSUScaledProgressStorage *mStorage;
    TSUProgress *mProgress;
    id *mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}


@property CGFloat maxValue;
@property (retain) TSUProgress *progress;


-(BOOL)isIndeterminate;
-(CGFloat)value;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)p_addProgressObserverToProgressInQueue;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif