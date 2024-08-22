// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCMATHRADICALEXPRESSION_H
#define SCRCMATHRADICALEXPRESSION_H



#import "SCRCMathExpression.h"

@interface SCRCMathRadicalExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *radicand; // ivar: _radicand
@property (retain, nonatomic) SCRCMathExpression *rootIndex; // ivar: _rootIndex


-(BOOL)_isCubeRoot;
-(BOOL)_isSquareRoot;
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