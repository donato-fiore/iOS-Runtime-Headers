// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCMATHFENCEDEXPRESSION_H
#define SCRCMATHFENCEDEXPRESSION_H

@class NSString;


#import "SCRCMathRowExpression.h"

@interface SCRCMathFencedExpression : SCRCMathRowExpression

@property (copy, nonatomic) NSString *closeString; // ivar: _closeString
@property (copy, nonatomic) NSString *openString; // ivar: _openString


-(BOOL)_isBinomialCoefficient;
-(NSUInteger)fractionLevel;
-(id)_binomialCoefficientContent;
-(id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg0 ;
-(id)description;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)latexDescriptionInMathMode:(BOOL)arg0 ;
-(id)mathMLAttributes;
-(id)mathMLTag;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;


@end


#endif