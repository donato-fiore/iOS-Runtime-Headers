// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APCENCODERPROCESSOR_H
#define APCENCODERPROCESSOR_H


#import <Foundation/Foundation.h>

#import "AUPasscodeEncoder.h"
#import "AUAudioUnitOfflineProcessor.h"
#import "APCPlayerEmbedInfo.h"

@interface APCEncoderProcessor : NSObject {
    AUPasscodeEncoder *_encoderAU;
    AUAudioUnitOfflineProcessor *_processor;
    APCPlayerEmbedInfo *_passcodeEmbedInfo;
}




-(BOOL)getEmbeddingInfo:(*id)arg0 ;
-(float)evaluateAsset:(id)arg0 ;
-(id)initWithAssetURL:(id)arg0 codecConfig:(id)arg1 payload:(id)arg2 outputURL:(id)arg3 error:(*id)arg4 ;
-(void)run;


@end


#endif