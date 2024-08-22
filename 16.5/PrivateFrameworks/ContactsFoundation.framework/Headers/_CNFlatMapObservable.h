// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNFLATMAPOBSERVABLE_H
#define _CNFLATMAPOBSERVABLE_H

@protocol CNSchedulerProvider;


#import "CNObservable.h"

@interface _CNFlatMapObservable : CNObservable

@property (readonly, copy, nonatomic) id *decoratorGenerator; // ivar: _decoratorGenerator
@property (readonly, nonatomic) CNObservable *observable; // ivar: _observable
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider


// +(id)concatMapWithObservable:(id)arg0 transform:(id)arg1 schedulerProvider:(unk)arg2  ;
// +(id)flatMapWithObservable:(id)arg0 transform:(id)arg1 schedulerProvider:(unk)arg2  ;
// +(id)observableWithObservable:(id)arg0 transform:(id)arg1 decoratorGenerator:(unk)arg2 schedulerProvider:(id)arg3  ;
// -(id)initWithObservable:(id)arg0 transform:(id)arg1 decoratorGenerator:(unk)arg2 schedulerProvider:(id)arg3  ;
-(id)subscribe:(id)arg0 ;
-(id)subscribeInnerObservable:(id)arg0 observer:(id)arg1 context:(id)arg2 ;


@end


#endif