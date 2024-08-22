// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCREDITCARDSECURITYCODEFORMATTER_H
#define WBSCREDITCARDSECURITYCODEFORMATTER_H

@class NSFormatter;



@interface WBSCreditCardSecurityCodeFormatter : NSFormatter



+(id)_normalizedSecurityCode:(id)arg0 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif