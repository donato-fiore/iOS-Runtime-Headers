// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEPROCESSORCONTROLLERINPUT_H
#define BWSTILLIMAGEPROCESSORCONTROLLERINPUT_H

@class NSMutableDictionary, NSString;
@protocol BWStillImageProcessorControllerInputUpdatesDelegate;

#import <Foundation/Foundation.h>

#import "BWStillImageSettings.h"
#import "BWStillImageCaptureStreamSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageProcessingSettings.h"
#import "FigCaptureStillImageSettings.h"

@interface BWStillImageProcessorControllerInput : NSObject {
    BWStillImageSettings *_settings;
    BWStillImageCaptureStreamSettings *_captureStreamSettings;
    NSMutableDictionary *_outputSampleBufferRoutersByBufferType;
}


@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (retain, nonatomic) NSObject<BWStillImageProcessorControllerInputUpdatesDelegate> *delegate; // ivar: _delegate
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