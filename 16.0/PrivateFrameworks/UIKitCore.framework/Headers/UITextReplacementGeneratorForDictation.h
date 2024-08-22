// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTREPLACEMENTGENERATORFORDICTATION_H
#define UITEXTREPLACEMENTGENERATORFORDICTATION_H

@class NSTextAlternatives;


#import "UITextReplacementGenerator.h"

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator

@property (readonly, nonatomic) NSTextAlternatives *alternatives; // ivar: _alternatives


-(id)initWithAlternatives:(id)arg0 stringToReplace:(id)arg1 replacementRange:(id)arg2 ;
-(id)replacements;


@end


#endif