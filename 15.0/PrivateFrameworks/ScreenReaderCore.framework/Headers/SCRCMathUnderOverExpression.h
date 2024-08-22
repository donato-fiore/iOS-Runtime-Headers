// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCMATHUNDEROVEREXPRESSION_H
#define SCRCMATHUNDEROVEREXPRESSION_H



#import "SCRCMathExpression.h"

@interface SCRCMathUnderOverExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *base; // ivar: _base
@property (retain, nonatomic) SCRCMathExpression *over; // ivar: _over
@property (retain, nonatomic) SCRCMathExpression *under; // ivar: _under


-(BOOL)isRangeSubSuperscript;
-(NSUInteger)fractionLevel;
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