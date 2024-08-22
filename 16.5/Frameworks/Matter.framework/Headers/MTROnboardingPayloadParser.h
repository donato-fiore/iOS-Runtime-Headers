// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRONBOARDINGPAYLOADPARSER_H
#define MTRONBOARDINGPAYLOADPARSER_H


#import <Foundation/Foundation.h>


@interface MTROnboardingPayloadParser : NSObject



+(BOOL)isQRCode:(id)arg0 ;
+(id)setupPayloadForManualCodeOnboardingPayload:(id)arg0 error:(*id)arg1 ;
+(id)setupPayloadForOnboardingPayload:(id)arg0 error:(*id)arg1 ;
+(id)setupPayloadForQRCodeOnboardingPayload:(id)arg0 error:(*id)arg1 ;


@end


#endif