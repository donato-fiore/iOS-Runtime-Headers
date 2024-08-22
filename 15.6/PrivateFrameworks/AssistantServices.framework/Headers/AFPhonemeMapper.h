// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFPHONEMEMAPPER_H
#define AFPHONEMEMAPPER_H

@class NSString, NSDictionary, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface AFPhonemeMapper : NSObject {
    NSString *_languageCode;
    NSDictionary *_phonemeMap;
    NSRegularExpression *_regex;
}




+(id)_buildRegexMatchingSubstrings:(id)arg0 ;
+(id)_mapForLanguageCode:(id)arg0 ;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)stringByReplacingPhonemesInString:(id)arg0 ;


@end


#endif