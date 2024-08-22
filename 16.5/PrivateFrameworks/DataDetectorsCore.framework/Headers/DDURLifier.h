// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDURLIFIER_H
#define DDURLIFIER_H


#import <Foundation/Foundation.h>


@interface DDURLifier : NSObject



+(BOOL)urlIfyNode:(id)arg0 ;
+(BOOL)urlIfyNode:(id)arg0 phoneNumberTypes:(NSUInteger)arg1 ;
+(BOOL)urlIfyTextNode:(id)arg0 inNode:(id)arg1 forMatches:(id)arg2 ;
+(id)urlIfyNode:(id)arg0 usingScanner:(struct __DDScanner *)arg1 phoneNumberTypes:(NSUInteger)arg2 ;
+(id)urlIfyNode:(id)arg0 usingScanner:(struct __DDScanner *)arg1 phoneNumberTypes:(NSUInteger)arg2 withReferenceDate:(id)arg3 andTimeZone:(id)arg4 ;
+(id)urlMatchesForString:(id)arg0 ;
+(id)urlMatchesForString:(id)arg0 includingTel:(BOOL)arg1 ;
+(id)urlMatchesForString:(id)arg0 phoneNumberTypes:(NSUInteger)arg1 ;
+(id)urlMatchesForString:(id)arg0 usingScanner:(struct __DDScanner *)arg1 withPhoneNumberTypes:(NSUInteger)arg2 referenceDate:(id)arg3 timeZone:(id)arg4 storingResultsIn:(id)arg5 ;


@end


#endif