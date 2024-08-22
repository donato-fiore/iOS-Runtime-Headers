// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARPLANJSONRESPONSEPARSER_H
#define CTCELLULARPLANJSONRESPONSEPARSER_H


#import <Foundation/Foundation.h>


@interface CTCellularPlanJsonResponseParser : NSObject



+(BOOL)parseCountryListResponseData:(id)arg0 intoSupportedCountryList:(*id)arg1 intoUnsupportedCountryList:(*id)arg2 error:(*id)arg3 ;
+(BOOL)parseCreateSessionResponseData:(id)arg0 intoSessionId:(*id)arg1 podId:(*id)arg2 urls:(*id)arg3 error:(*id)arg4 ;
+(BOOL)parseHandoffTokenResponseData:(id)arg0 intoHandoffToken:(*id)arg1 error:(*id)arg2 ;
+(BOOL)parseInitiatePurchaseResponseData:(id)arg0 intoShouldPurchase:(*BOOL)arg1 responseCode:(*int)arg2 responseText:(*id)arg3 buddyML:(*id)arg4 error:(*id)arg5 ;
+(BOOL)parsePurchaseResponseData:(id)arg0 intoShouldDownloadProfile:(*BOOL)arg1 iccid:(*id)arg2 responseCode:(*int)arg3 responseText:(*id)arg4 error:(*id)arg5 ;
+(BOOL)parseResponseJson:(id)arg0 setUrl:(*id)arg1 setParameters:(*id)arg2 ;
+(BOOL)parseSubscriptionsResponseData:(id)arg0 intoSubscriptions:(*id)arg1 error:(*id)arg2 ;
+(id)sessionIdFromJsonData:(id)arg0 ;
+(id)sessionIdFromObject:(id)arg0 ;


@end


#endif