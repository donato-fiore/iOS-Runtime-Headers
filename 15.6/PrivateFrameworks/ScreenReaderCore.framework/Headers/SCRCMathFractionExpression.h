// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCMATHFRACTIONEXPRESSION_H
#define SCRCMATHFRACTIONEXPRESSION_H



#import "SCRCMathExpression.h"

@interface SCRCMathFractionExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *denominator; // ivar: _denominator
@property (nonatomic) CGFloat lineThickness; // ivar: _lineThickness
@property (retain, nonatomic) SCRCMathExpression *numerator; // ivar: _numerator
@property (retain, nonatomic) SCRCMathExpression *operator; // ivar: _operator


-(BOOL)isSimpleNumericalFraction;
-(BOOL)isUnlinedFraction;
-(NSUInteger)fractionLevel;
-(id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)arg0 orMixedNumberFraction:(BOOL)arg1 withNumberOfOuterRadicals:(NSUInteger)arg2 treePosition:(id)arg3 ;
-(id)_speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 asBinomialCoefficient:(BOOL)arg2 ;
-(id)_speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 asBinomialCoefficient:(BOOL)arg3 ;
-(id)description;
-(id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg0 numberOfOuterRadicals:(NSUInteger)arg1 ;
-(id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg0 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)latexMathModeDescription;
-(id)mathMLString;
-(id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(NSInteger)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;


@end


#endif