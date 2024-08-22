// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETERESULTTOKENMATCHER_H
#define CNAUTOCOMPLETERESULTTOKENMATCHER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CNAutocompleteResultTokenMatcher : NSObject {
    NSArray *_tokens;
    NSString *_countryCode;
}




+(id)indexTokensFromPhoneNumber:(id)arg0 ;
+(id)normalizePhoneNumber:(id)arg0 countryCode:(id)arg1 ;
+(id)searchTokensFromString:(id)arg0 ;
+(id)tokenizePhoneNumber:(id)arg0 ;
-(BOOL)evaluateResult:(id)arg0 ;
-(BOOL)evaluateSingleResult:(id)arg0 ;
-(BOOL)evaluateTopLevelGroupResult:(id)arg0 ;
-(id)filterAdapter:(SEL)arg0 ;
-(id)init;
-(id)initWithSearchString:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 countryCode:(id)arg1 ;
-(id)nameTokensForResult:(id)arg0 ;
-(id)representationsOfPhoneNumber:(id)arg0 ;
-(id)tokensForResultName:(id)arg0 ;
-(id)tokensForResultValue:(id)arg0 ;


@end


#endif