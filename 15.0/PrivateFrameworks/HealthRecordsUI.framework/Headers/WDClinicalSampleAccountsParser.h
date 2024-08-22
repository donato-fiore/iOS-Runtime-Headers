// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALSAMPLEACCOUNTSPARSER_H
#define WDCLINICALSAMPLEACCOUNTSPARSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WDClinicalSampleAccountsParser : NSObject

@property (copy, nonatomic) NSString *accountFilename; // ivar: _accountFilename


+(id)_jsonDictionaryFromJSONObject:(id)arg0 subElement:(id)arg1 error:(*id)arg2 ;
+(id)_stringOnlyDictionaryFromJSONDictionary:(id)arg0 ;
-(id)_parseAccountsFromJSONData:(id)arg0 error:(*id)arg1 ;
-(id)_parseBatchesFromSampleAccountJSONDict:(id)arg0 error:(*id)arg1 ;
-(id)_parseGatewayFromProviderJSONDict:(id)arg0 error:(*id)arg1 ;
-(id)_parseProviderFromSampleAccountJSONDict:(id)arg0 error:(*id)arg1 ;
-(id)initWithAccountFilename:(id)arg0 ;
-(id)parsedAccountsWithError:(*id)arg0 ;


@end


#endif