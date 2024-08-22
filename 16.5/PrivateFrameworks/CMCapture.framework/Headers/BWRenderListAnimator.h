// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWRENDERLISTANIMATOR_H
#define BWRENDERLISTANIMATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BWSpringSimulation.h"
#import "BWRenderListParameters.h"
#import "BWRenderList.h"

@interface BWRenderListAnimator : NSObject {
    NSObject<OS_dispatch_queue> *_preparationMutexQueue;
    BOOL _preparationMutexQueuePrepared;
    BWSpringSimulation *_springSimulation;
}


@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, retain, nonatomic) BWRenderListParameters *finalParameters; // ivar: _finalParameters
@property (readonly, retain, nonatomic) BWRenderList *finalRenderList; // ivar: _finalRenderList
@property (readonly, retain, nonatomic) BWRenderListParameters *initialParameters; // ivar: _initialParameters
@property (readonly, retain, nonatomic) BWRenderList *initialRenderList; // ivar: _initialRenderList
@property (readonly, retain, nonatomic) BWRenderListParameters *parameters; // ivar: _interpolatingParameters
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, retain, nonatomic) BWRenderList *renderList; // ivar: _interpolatingRenderList


+(void)initialize;
-(id)initWithInitialParameters:(id)arg0 initialRenderList:(id)arg1 finalParameters:(id)arg2 finalRenderList:(id)arg3 animation:(NSInteger)arg4 ;
-(id)interpolateParameters;
-(void)dealloc;
-(void)prepareWithInputVideoFormat:(id)arg0 inputDepthFormat:(id)arg1 ;


@end


#endif