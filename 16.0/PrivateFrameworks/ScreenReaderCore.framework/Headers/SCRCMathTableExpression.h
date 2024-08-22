// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCMATHTABLEEXPRESSION_H
#define SCRCMATHTABLEEXPRESSION_H



#import "SCRCMathArrayExpression.h"

@interface SCRCMathTableExpression : SCRCMathArrayExpression



-(BOOL)canBeWrappedInLatexMathIndicators;
-(BOOL)isMultiRowTable;
-(NSUInteger)_numberOfColumns;
-(NSUInteger)numberOfTables;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 openOperator:(id)arg2 openOperatorTreePosition:(id)arg3 closeOperator:(id)arg4 closeOperatorTreePosition:(id)arg5 ;
-(id)latexDescriptionInMathMode:(BOOL)arg0 ;
-(id)mathMLTag;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;


@end


#endif