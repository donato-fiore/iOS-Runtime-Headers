// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPONBOARDINGPAYLOADPARSER_H
#define CHIPONBOARDINGPAYLOADPARSER_H


#import <Foundation/Foundation.h>


@interface CHIPOnboardingPayloadParser : NSObject



+(id)setupPayloadForManualCodeOnboardingPayload:(id)arg0 error:(*id)arg1 ;
+(id)setupPayloadForOnboardingPayload:(id)arg0 ofType:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)setupPayloadForQRCodeOnboardingPayload:(id)arg0 error:(*id)arg1 ;


@end


#endif