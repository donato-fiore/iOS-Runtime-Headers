// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSARBITRATIONINPUTSVALIDATIONSTAGE_H
#define SBFTRAITSARBITRATIONINPUTSVALIDATIONSTAGE_H

@class NSMutableArray, NSString, NSNumber;
@protocol BSDescriptionProviding, SBFTraitsArbitrationInputsValidating, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbiter.h"

@interface SBFTraitsArbitrationInputsValidationStage : NSObject <BSDescriptionProviding, SBFTraitsArbitrationInputsValidating>

 {
    NSMutableArray *_inputsValidators;
    id<BSInvalidatable> *_stateDumpHandle;
}


@property (weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSNumber *validatorOrder; // ivar: validatorOrder


-(id)_setupStateDump;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithValidators:(id)arg0 arbiter:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)validateInputs:(id)arg0 ;
-(void)addInputsValidator:(id)arg0 ;
-(void)dealloc;
-(void)removeInputsValidator:(id)arg0 ;


@end


#endif