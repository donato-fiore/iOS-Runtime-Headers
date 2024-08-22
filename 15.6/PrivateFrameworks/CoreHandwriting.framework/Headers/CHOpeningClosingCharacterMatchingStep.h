// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHOPENINGCLOSINGCHARACTERMATCHINGSTEP_H
#define CHOPENINGCLOSINGCHARACTERMATCHINGSTEP_H

@class NSCharacterSet;


#import "CHPostprocessingStep.h"

@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStep

@property (retain, nonatomic) NSCharacterSet *closingBracketCharacters; // ivar: _closingBracketCharacters
@property (retain, nonatomic) NSCharacterSet *closingQuoteCharacters; // ivar: _closingQuoteCharacters
@property (retain, nonatomic) NSCharacterSet *openingBracketCharacters; // ivar: _openingBracketCharacters
@property (retain, nonatomic) NSCharacterSet *openingQuoteCharacters; // ivar: _openingQuoteCharacters
@property (retain, nonatomic) NSCharacterSet *symmetricQuoteCharacters; // ivar: _symmetricQuoteCharacters


-(id)init;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif