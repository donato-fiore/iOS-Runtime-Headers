// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHNUMBERFIELDRESULTREORDERINGSTEP_H
#define CHNUMBERFIELDRESULTREORDERINGSTEP_H

@class NSCharacterSet, NSDictionary;


#import "CHPostprocessingStepModifyingOriginalTokens.h"

@interface CHNumberFieldResultReorderingStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSCharacterSet *allowedCharacters; // ivar: _allowedCharacters
@property (retain, nonatomic) NSDictionary *characterReplacements; // ivar: _characterReplacements


+(id)tokenRowAsString:(id)arg0 ;
-(NSInteger)compareStringForPhoneNumberCompatibility:(id)arg0 with:(id)arg1 ;
-(NSInteger)countUnallowedCharactersInString:(id)arg0 ;
-(id)initForDigitFields;
-(id)initForPhoneNumberFields;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif