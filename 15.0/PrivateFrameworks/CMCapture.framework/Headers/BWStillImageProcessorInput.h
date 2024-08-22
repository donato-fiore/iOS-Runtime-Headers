// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEPROCESSORINPUT_H
#define BWSTILLIMAGEPROCESSORINPUT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "BWStillImageSettings.h"
#import "BWStillImageCaptureStreamSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageProcessingSettings.h"
#import "FigCaptureStillImageSettings.h"

@interface BWStillImageProcessorInput : NSObject {
    BWStillImageSettings *_settings;
    BWStillImageCaptureStreamSettings *_captureStreamSettings;
    NSMutableDictionary *_outputSampleBufferRoutersByBufferType;
}


@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) BWStillImageProcessingSettings *processingSettings;
@property (readonly, nonatomic) FigCaptureStillImageSettings *settings;
@property (readonly, nonatomic) BWStillImageSettings *stillImageSettings;


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(id)outputSampleBufferRouterForBufferType:(NSUInteger)arg0 ;
-(void)addBypassedProcessorType:(NSUInteger)arg0 forBufferTypes:(id)arg1 ;
// -(void)addOutputSampleBufferRouter:(id)arg0 forBufferTypes:(unk)arg1  ;
-(void)dealloc;


@end


#endif