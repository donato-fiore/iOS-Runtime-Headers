// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APCDECODERPROCESSOR_H
#define APCDECODERPROCESSOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "AUPasscodeDecoder.h"
#import "AUAudioUnitOfflineProcessor.h"

@interface APCDecoderProcessor : NSObject {
    AUPasscodeDecoder *_decoderAU;
    AUAudioUnitOfflineProcessor *_processor;
    NSMutableArray *_payloadsReceived;
}




-(BOOL)getResultData:(*id)arg0 ;
-(id)initWithInputURL:(id)arg0 codecConfig:(id)arg1 error:(*id)arg2 ;
-(id)initWithInputURL:(id)arg0 codecConfig:(id)arg1 resultData:(id)arg2 error:(*id)arg3 ;
-(id)run;


@end


#endif