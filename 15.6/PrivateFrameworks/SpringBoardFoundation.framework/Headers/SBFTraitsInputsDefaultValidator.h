// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSINPUTSDEFAULTVALIDATOR_H
#define SBFTRAITSINPUTSDEFAULTVALIDATOR_H

@class NSString, NSNumber;
@protocol SBFTraitsArbitrationInputsValidating;

#import <Foundation/Foundation.h>


@interface SBFTraitsInputsDefaultValidator : NSObject <SBFTraitsArbitrationInputsValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSNumber *validatorOrder; // ivar: _validatorOrder


-(id)validateInputs:(id)arg0 ;


@end


#endif