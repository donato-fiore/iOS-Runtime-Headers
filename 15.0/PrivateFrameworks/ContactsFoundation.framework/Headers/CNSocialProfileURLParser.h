// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSOCIALPROFILEURLPARSER_H
#define CNSOCIALPROFILEURLPARSER_H


#import <Foundation/Foundation.h>


@interface CNSocialProfileURLParser : NSObject



+(id)parseSocialProfileURL:(id)arg0 ;
+(id)parseURLStringByInference:(id)arg0 ;
+(id)parseURLStringWithRegularExpressions:(id)arg0 ;
+(id)servicesDictionary;
+(void)enumerateMatchesWithRegexPattern:(id)arg0 inString:(id)arg1 withBlock:(id)arg2 ;
+(void)enumerateServiceMatchesForURLString:(id)arg0 withBlock:(id)arg1 ;


@end


#endif