// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MARRSSIRINLUTYPESCONVERTER_H
#define MARRSSIRINLUTYPESCONVERTER_H


#import <Foundation/Foundation.h>


@interface MarrsSiriNLUTypesConverter : NSObject



+(?)fromPluginInteraction;
+(?)fromPluginUtterance;
+(id)StdVectorStdString2NSMutableArrayNSString:(struct vector<std::string, std::allocator<std::string>> )arg0 ;
+(id)fromPluginHypothesis:(struct QRHypothesis )arg0 ;
+(id)fromPluginResponseObj:(*void)arg0 ;
+(id)fromPluginResponsePtr:(*void)arg0 ;
+(id)fromPluginToken:(struct QRToken )arg0 ;
+(id)fromPluginUuid:(struct Uuid )arg0 ;
+(id)internalTokenfromPluginToken:(struct QRToken )arg0 ;
+(id)stdString2NSString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 ;
+(int)fromPluginQRRepetitionType:(int)arg0 ;
+(int)fromPluginQRRewriteType:(int)arg0 ;
+(struct QRInteraction )toPluginInteraction:(id)arg0 ;
+(struct QRRequest )toPluginRequestObj:(id)arg0 ;
+(struct QRToken )internalTokentoPluginToken:(id)arg0 ;
+(struct QRToken )toPluginToken:(id)arg0 ;
+(struct QRUtterance )toPluginUtterance:(id)arg0 ;
+(struct Uuid )toPluginUuid:(id)arg0 ;
+(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )NSString2StdString:(id)arg0 ;
+(struct unique_ptr<marrs::qr::orchestration::QRRequest, std::default_delete<marrs::qr::orchestration::QRRequest>> )toPluginRequestPtr:(id)arg0 ;
+(struct vector<std::string, std::allocator<std::string>> )NSMutableArrayNSString2StdVectorStdString:(id)arg0 ;


@end


#endif