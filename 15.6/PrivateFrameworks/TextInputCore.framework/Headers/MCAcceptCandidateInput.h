// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCACCEPTCANDIDATEINPUT_H
#define MCACCEPTCANDIDATEINPUT_H

@class NSString, NSArray;


#import "MCKeyboardInput.h"

@interface MCAcceptCandidateInput : MCKeyboardInput

@property (readonly, copy, nonatomic) NSString *candidateText; // ivar: _candidateText
@property (readonly, copy, nonatomic) NSString *convertedInput; // ivar: _convertedInput
@property (copy) NSString *remainingInputString; // ivar: _remainingInputString
@property (copy) NSArray *remainingMecabraInputs; // ivar: _remainingMecabraInputs


-(BOOL)canComposeNew:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidateText:(id)arg0 convertedInput:(id)arg1 ;


@end


#endif