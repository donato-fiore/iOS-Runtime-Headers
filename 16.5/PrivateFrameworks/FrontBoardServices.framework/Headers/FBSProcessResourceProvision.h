// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSPROCESSRESOURCEPROVISION_H
#define FBSPROCESSRESOURCEPROVISION_H

@class BSAbsoluteMachTimer, RBSProcessHandle;
@protocol OS_dispatch_queue;


#import "FBSProcessExecutionProvision.h"

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    NSUInteger _baselineValue;
    NSUInteger _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSAbsoluteMachTimer *_timer;
    RBSProcessHandle *_processHandle;
    CGFloat _timerFireInterval;
    NSUInteger _timerFireCount;
}


@property (nonatomic) ? allowance; // ivar: _allowance
@property (nonatomic) NSInteger type;


+(id)provisionWithAllowance:(struct ? )arg0 ;
+(id)provisionWithResourceType:(NSInteger)arg0 timeInterval:(CGFloat)arg1 ;
-(BOOL)_queue_calculateValueConsumed:(*NSUInteger)arg0 ;
-(BOOL)_queue_updateConsumption;
-(BOOL)allowanceRemaining:(struct ? *)arg0 ;
-(BOOL)isResourceProvision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAllowance:(struct ? )arg0 ;
-(id)succinctDescriptionBuilder;
-(void)_beginMonitoring;
-(void)_prepareForReuse;
-(void)_queue_evaluateConsumptionFromTimer:(BOOL)arg0 ;
-(void)_queue_noteAllowanceExhausted;
-(void)_queue_stopMonitoring;
-(void)_stopMonitoring;
-(void)_updateProgress;
-(void)dealloc;


@end


#endif