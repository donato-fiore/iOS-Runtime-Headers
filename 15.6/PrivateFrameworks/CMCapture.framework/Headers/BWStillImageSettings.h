// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGESETTINGS_H
#define BWSTILLIMAGESETTINGS_H


#import <Foundation/Foundation.h>

#import "BWStillImageCaptureSettings.h"
#import "BWStillImageProcessingSettings.h"
#import "FigCaptureStillImageSettings.h"

@interface BWStillImageSettings : NSObject

@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings; // ivar: _captureSettings
@property (readonly, nonatomic) BWStillImageProcessingSettings *processingSettings; // ivar: _processingSettings
@property (readonly, nonatomic) FigCaptureStillImageSettings *requestedSettings; // ivar: _requestedSettings


-(id)initWithRequestedSettings:(id)arg0 captureSettings:(id)arg1 processingSettings:(id)arg2 ;
-(void)dealloc;


@end


#endif