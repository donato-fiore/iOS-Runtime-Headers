// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APCCODECFACTORY_H
#define APCCODECFACTORY_H


#import <Foundation/Foundation.h>


@interface APCCodecFactory : NSObject



+(float)evaluateCarrierWithConfig:(id)arg0 carrier:(id)arg1 embeddingResult:(*id)arg2 ;
+(id)createBestConfigForCapability:(id)arg0 ;
+(struct unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> )createDecoderWithConfig:(id)arg0 apcConfig:(*void)arg1 error:(*id)arg2 ;
+(struct unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>> )createEncoderWithConfig:(id)arg0 apcConfig:(*void)arg1 payloadData:(id)arg2 ;


@end


#endif