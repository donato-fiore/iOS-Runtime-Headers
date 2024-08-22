// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCMATHTABLEROWEXPRESSION_H
#define SCRCMATHTABLEROWEXPRESSION_H



#import "SCRCMathArrayExpression.h"

@interface SCRCMathTableRowExpression : SCRCMathArrayExpression



-(BOOL)canBeWrappedInLatexMathIndicators;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)latexDescriptionInMathMode:(BOOL)arg0 ;
-(id)mathMLTag;


@end


#endif