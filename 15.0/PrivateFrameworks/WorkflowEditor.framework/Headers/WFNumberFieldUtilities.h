// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNUMBERFIELDUTILITIES_H
#define WFNUMBERFIELDUTILITIES_H


#import <Foundation/Foundation.h>


@interface WFNumberFieldUtilities : NSObject



+(BOOL)shouldChangeText:(id)arg0 allowMinus:(BOOL)arg1 ;
+(NSUInteger)numberOfOccurrencesOfString:(id)arg0 inString:(id)arg1 ;
+(id)decimalSymbol;
+(id)negateText:(id)arg0 ;
+(id)stringBySanitizingNumberString:(id)arg0 allowDecimalNumbers:(BOOL)arg1 ;
+(void)negateTextInput:(id)arg0 ;


@end


#endif