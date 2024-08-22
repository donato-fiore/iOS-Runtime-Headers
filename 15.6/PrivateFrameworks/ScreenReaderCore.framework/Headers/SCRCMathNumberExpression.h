// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCMATHNUMBEREXPRESSION_H
#define SCRCMATHNUMBEREXPRESSION_H



#import "SCRCMathSimpleExpression.h"

@interface SCRCMathNumberExpression : SCRCMathSimpleExpression



-(BOOL)isNumber;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;


@end


#endif