// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTRANSLITERATEHALFWIDTHPUNCTUATIONSTEP_H
#define CHTRANSLITERATEHALFWIDTHPUNCTUATIONSTEP_H

@class NSCharacterSet;


#import "CHPostprocessingStepModifyingOriginalTokens.h"

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSCharacterSet *backwardLookingCharacterSet; // ivar: _backwardLookingCharacterSet
@property (retain, nonatomic) NSCharacterSet *contextInvariantCharacterSet; // ivar: _contextInvariantCharacterSet
@property (retain, nonatomic) NSCharacterSet *forwardLookingCharacterSet; // ivar: _forwardLookingCharacterSet
@property (nonatomic) BOOL shouldAddAlternatives; // ivar: _shouldAddAlternatives
@property (retain, nonatomic) NSCharacterSet *widthAlternativeCharacterSet; // ivar: _widthAlternativeCharacterSet


-(id)initWithShouldAddAlternatives:(BOOL)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif