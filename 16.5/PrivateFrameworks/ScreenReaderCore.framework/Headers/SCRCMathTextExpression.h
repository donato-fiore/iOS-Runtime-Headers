// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCMATHTEXTEXPRESSION_H
#define SCRCMATHTEXTEXPRESSION_H



#import "SCRCMathSimpleExpression.h"

@interface SCRCMathTextExpression : SCRCMathSimpleExpression



-(id)latexDescriptionInMathMode:(BOOL)arg0 ;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;


@end


#endif