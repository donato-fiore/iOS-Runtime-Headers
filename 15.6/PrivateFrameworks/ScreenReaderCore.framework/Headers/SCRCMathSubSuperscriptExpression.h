// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCMATHSUBSUPERSCRIPTEXPRESSION_H
#define SCRCMATHSUBSUPERSCRIPTEXPRESSION_H



#import "SCRCMathExpression.h"

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *base; // ivar: _base
@property (retain, nonatomic) SCRCMathExpression *subscript; // ivar: _subscript
@property (retain, nonatomic) SCRCMathExpression *superscript; // ivar: _superscript


-(BOOL)isBaseSubSuperscript;
-(BOOL)isNumber;
-(BOOL)isRangeSubSuperscript;
-(NSUInteger)fractionLevel;
-(id)_stringToAddForSuperscript:(id)arg0 withPriorDescription:(id)arg1 updatedDescription:(*id)arg2 ;
-(id)description;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)latexMathModeDescription;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;


@end


#endif