// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALSAMPLEACCOUNTSPARSER_H
#define HKCLINICALSAMPLEACCOUNTSPARSER_H


#import <Foundation/Foundation.h>


@interface HKClinicalSampleAccountsParser : NSObject



+(id)_jsonDictionaryFromJSONObject:(id)arg0 subElement:(id)arg1 error:(*id)arg2 ;
+(id)_stringOnlyDictionaryFromJSONDictionary:(id)arg0 ;
-(id)_parseAccountsFromJSONData:(id)arg0 error:(*id)arg1 ;
-(id)_parseBatchesFromSampleAccountJSONDict:(id)arg0 error:(*id)arg1 ;
-(id)_parseGatewayFromProviderJSONDict:(id)arg0 error:(*id)arg1 ;
-(id)_parseProviderFromSampleAccountJSONDict:(id)arg0 error:(*id)arg1 ;
-(id)parseAccountsFromFile:(id)arg0 error:(*id)arg1 ;


@end


#endif