// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSINPUTSVALIDATOR_H
#define SBTRAITSINPUTSVALIDATOR_H

@class NSString, NSNumber;
@protocol SBFTraitsArbitrationInputsValidating;

#import <Foundation/Foundation.h>


@interface SBTraitsInputsValidator : NSObject <SBFTraitsArbitrationInputsValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *validatorOrder; // ivar: _validatorOrder


-(id)init;
-(id)initWithValidatorOrder:(id)arg0 ;
-(id)validateInputs:(id)arg0 ;


@end


#endif