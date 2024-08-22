// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCMATHSPACEEXPRESSION_H
#define SCRCMATHSPACEEXPRESSION_H



#import "SCRCMathExpression.h"

@interface SCRCMathSpaceExpression : SCRCMathExpression



-(BOOL)beginsWithSpace;
-(BOOL)endsWithSpace;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(NSUInteger)arg0 treePosition:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)mathMLString;


@end


#endif