// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCMATHIDENTIFIEREXPRESSION_H
#define SCRCMATHIDENTIFIEREXPRESSION_H



#import "SCRCMathSimpleExpression.h"

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) NSInteger fontStyle; // ivar: _fontStyle


-(BOOL)_isPrime;
-(BOOL)canFormWordStartingWithExpression:(id)arg0 ;
-(BOOL)isNaturalSuperscript;
-(BOOL)isNumber;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 isPartOfWord:(BOOL)arg2 ;


@end


#endif