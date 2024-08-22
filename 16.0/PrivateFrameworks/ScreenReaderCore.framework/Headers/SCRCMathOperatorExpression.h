// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCMATHOPERATOREXPRESSION_H
#define SCRCMATHOPERATOREXPRESSION_H



#import "SCRCMathSimpleExpression.h"

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) unsigned short operatorChar; // ivar: _operatorChar


-(BOOL)_isIntegral;
-(BOOL)_isInvisibleCharacter;
-(BOOL)_isMinusSign;
-(BOOL)_isRingOperator;
-(BOOL)_isSummation;
-(BOOL)_isUnionOrIntersection;
-(BOOL)canBeUsedWithRange;
-(BOOL)isEllipsis;
-(BOOL)isFenceDelimiter;
-(BOOL)isNaturalSuperscript;
-(BOOL)isOperationSymbol;
-(BOOL)isTermSeparator;
-(id)description;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)latexFormatStringAsOver;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;


@end


#endif