// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCMATHLONGDIVISIONEXPRESSION_H
#define SCRCMATHLONGDIVISIONEXPRESSION_H



#import "SCRCMathArrayExpression.h"
#import "SCRCMathExpression.h"

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression

@property (retain, nonatomic) SCRCMathExpression *divisor; // ivar: _divisor


-(id)initWithDictionary:(id)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;


@end


#endif