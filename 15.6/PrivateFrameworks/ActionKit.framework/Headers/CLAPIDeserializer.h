// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLAPIDESERIALIZER_H
#define CLAPIDESERIALIZER_H


#import <Foundation/Foundation.h>


@interface CLAPIDeserializer : NSObject



+(NSInteger)webItemTypeForTypeString:(id)arg0 ;
+(id)URLRequestWithS3ParametersDictionary:(id)arg0 fileName:(id)arg1 fileData:(id)arg2 ;
+(id)URLRequestWithS3ParametersDictionary:(id)arg0 fileName:(id)arg1 fileData:(id)arg2 fileURL:(id)arg3 ;
+(id)URLRequestWithS3ParametersDictionary:(id)arg0 fileName:(id)arg1 fileURL:(id)arg2 ;
+(id)URLRequestWithS3ParametersDictionaryData:(id)arg0 fileName:(id)arg1 fileData:(id)arg2 ;
+(id)_URLFromDictionary:(id)arg0 forKey:(id)arg1 ;
+(id)_dateAndTimeFromDictionary:(id)arg0 forKey:(id)arg1 ;
+(id)_dateFromDictionary:(id)arg0 forKey:(id)arg1 ;
+(id)_normalizedObjectFromDictionary:(id)arg0 forKey:(id)arg1 ;
+(id)_unicodeURLFromDictionary:(id)arg0 forKey:(id)arg1 ;
+(id)accountWithAPIDictionary:(id)arg0 ;
+(id)accountWithJSONDictionaryData:(id)arg0 ;
+(id)arrayFromJSONData:(id)arg0 ;
+(id)dictionaryFromJSONData:(id)arg0 ;
+(id)productsWithJSONArrayData:(id)arg0 ;
+(id)socketWithJSONDictionary:(id)arg0 ;
+(id)socketWithJSONDictionaryData:(id)arg0 ;
+(id)webItemArrayWithAPIArray:(id)arg0 ;
+(id)webItemArrayWithJSONArrayData:(id)arg0 ;
+(id)webItemWithAPIDictionary:(id)arg0 ;
+(id)webItemWithJSONDictionaryData:(id)arg0 ;


@end


#endif