// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDMANAGERURL_H
#define WBSPASSWORDMANAGERURL_H


#import <Foundation/Foundation.h>


@interface WBSPasswordManagerURL : NSObject



+(BOOL)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)arg0 ;
+(BOOL)_urlIsPasswordManagerURLWithScheme:(id)arg0 resourceSpecifierDictionary:(id)arg1 ;
+(BOOL)boolForPasswordManagerResourceDictionary:(id)arg0 key:(id)arg1 defaultValue:(BOOL)arg2 ;
+(BOOL)isOtpauthResourceDictionary:(id)arg0 ;
+(BOOL)isPasswordManagerSecurityRecommendationsResourceDictionary:(id)arg0 ;
+(BOOL)urlIsPasswordManagerURL:(id)arg0 ;
+(id)_resourceSpecifierDictionaryForURL:(id)arg0 ;
+(id)_resourceSpecifierEncodedKey:(id)arg0 value:(id)arg1 ;
+(id)dictionaryWithPasswordManagerURL:(id)arg0 ;
+(id)passwordManagerSecurityRecommendationsURL;
+(id)passwordManagerURLWithDictionary:(id)arg0 ;
+(id)valueForPasswordManagerResourceDictionary:(id)arg0 key:(id)arg1 ;
+(id)valueForPasswordManagerURL:(id)arg0 key:(id)arg1 ;


@end


#endif