// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCMATHROWEXPRESSION_H
#define SCRCMATHROWEXPRESSION_H



#import "SCRCMathArrayExpression.h"

@interface SCRCMathRowExpression : SCRCMathArrayExpression



-(BOOL)beginsWithSpace;
-(BOOL)canBeUsedWithBase;
-(BOOL)canBeUsedWithRange;
-(BOOL)endsWithSpace;
-(BOOL)isFunctionName;
-(BOOL)isInteger;
-(BOOL)isNumber;
-(BOOL)isWordOrAbbreviation;
-(NSInteger)integerValue;
-(NSUInteger)fractionLevel;
-(id)_indexesOfCharactersInWords;
-(id)childSpeakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 parentTreePosition:(id)arg2 childIndex:(*NSUInteger)arg3 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)latexDescriptionInMathMode:(BOOL)arg0 ;
-(id)mathMLTag;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSummary;
-(void)_addSpacingAndChild:(id)arg0 toResult:(id)arg1 nextChild:(id)arg2 previousChild:(id)arg3 numberOfOuterRadicals:(NSUInteger)arg4 treePosition:(id)arg5 ;


@end


#endif