// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCMATHSIMPLEEXPRESSION_H
#define SCRCMATHSIMPLEEXPRESSION_H

@class NSString;


#import "SCRCMathExpression.h"

@interface SCRCMathSimpleExpression : SCRCMathExpression

@property (copy, nonatomic) NSString *content; // ivar: _content


-(BOOL)canBeUsedWithBase;
-(BOOL)isFunctionName;
-(BOOL)isInteger;
-(BOOL)isWordOrAbbreviation;
-(NSInteger)integerValue;
-(id)_functionNames;
-(id)description;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)latexMathModeDescription;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;


@end


#endif