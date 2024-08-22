// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMAILDROPPARSER_H
#define EMMAILDROPPARSER_H


#import <Foundation/Foundation.h>


@interface EMMailDropParser : NSObject



+(BOOL)_domainIsAllowed:(id)arg0 ;
+(BOOL)urlIsValid:(id)arg0 ;
+(id)_parseURLQuery:(id)arg0 ;
+(id)allowedMailDropDownloadDomains;
+(id)parseExpiration:(CGFloat)arg0 ;
+(id)parseHeaderValue:(id)arg0 forField:(id)arg1 ;
+(void)_parseDirectURL:(id)arg0 intoMetadata:(id)arg1 ;
+(void)_parseWrappedURL:(id)arg0 intoMetadata:(id)arg1 ;
+(void)parseURL:(id)arg0 intoMetadata:(id)arg1 ;


@end


#endif