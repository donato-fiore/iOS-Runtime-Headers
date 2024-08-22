// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTRANSLITERATEHALFWIDTHPUNCTUATIONSTEP_H
#define CHTRANSLITERATEHALFWIDTHPUNCTUATIONSTEP_H

@class NSCharacterSet;


#import "CHPostprocessingStep.h"

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStep

@property (retain, nonatomic) NSCharacterSet *backwardLookingCharacterSet; // ivar: _backwardLookingCharacterSet
@property (retain, nonatomic) NSCharacterSet *contextInvariantCharacterSet; // ivar: _contextInvariantCharacterSet
@property (retain, nonatomic) NSCharacterSet *forwardLookingCharacterSet; // ivar: _forwardLookingCharacterSet
@property (nonatomic) BOOL shouldAddAlternatives; // ivar: _shouldAddAlternatives
@property (retain, nonatomic) NSCharacterSet *widthAlternativeCharacterSet; // ivar: _widthAlternativeCharacterSet


-(id)initShouldAddAlternatives:(BOOL)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif