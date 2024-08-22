// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCFGTERMINAL_H
#define _HKCFGTERMINAL_H

@class HKCFGExpression;



@interface _HKCFGTerminal : HKCFGExpression



+(id)_terminalMatchingDoubleWithCondition:(id)arg0 ;
+(id)_terminalMatchingIntegerWithCondition:(id)arg0 ;
+(id)terminalMatchingAnyDouble;
+(id)terminalMatchingAnyInteger;
+(id)terminalMatchingCharacterInSet:(id)arg0 ;
+(id)terminalMatchingCharacterInString:(id)arg0 ;
+(id)terminalMatchingDoubleWithCondition:(id)arg0 ;
+(id)terminalMatchingIntegerWithCondition:(id)arg0 ;
+(id)terminalMatchingSequenceOfCharactersInSet:(id)arg0 ;
+(id)terminalMatchingString:(id)arg0 ;
+(id)terminalMatchingString:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(BOOL)_scanValue:(*id)arg0 withScanner:(id)arg1 ;
-(NSUInteger)_minimumLength;
-(id)_label;
-(id)characterSet;
-(void)_tryNodesWithContext:(id)arg0 solutionTest:(id)arg1 ;


@end


#endif