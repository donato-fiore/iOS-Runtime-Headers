// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRONBOARDINGPAYLOADPARSER_H
#define MTRONBOARDINGPAYLOADPARSER_H


#import <Foundation/Foundation.h>


@interface MTROnboardingPayloadParser : NSObject



+(id)setupPayloadForManualCodeOnboardingPayload:(id)arg0 error:(*id)arg1 ;
+(id)setupPayloadForOnboardingPayload:(id)arg0 ofType:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)setupPayloadForQRCodeOnboardingPayload:(id)arg0 error:(*id)arg1 ;


@end


#endif