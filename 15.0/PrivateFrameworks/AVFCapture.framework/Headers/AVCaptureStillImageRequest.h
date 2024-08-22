// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTURESTILLIMAGEREQUEST_H
#define AVCAPTURESTILLIMAGEREQUEST_H


#import <Foundation/Foundation.h>

#import "AVCaptureBracketedStillImageSettings.h"

@interface AVCaptureStillImageRequest : NSObject

@property (copy) id *bracketedCaptureCompletionBlock; // ivar: _bracketedCaptureCompletionBlock
@property (retain) AVCaptureBracketedStillImageSettings *bracketedSettings; // ivar: _bracketedSettings
@property (copy) id *iosurfaceCompletionBlock; // ivar: _iosurfaceCompletionBlock
@property (copy) id *sbufCompletionBlock; // ivar: _sbufCompletionBlock
@property NSInteger settingsID; // ivar: _settingsID
@property unsigned int shutterSoundID; // ivar: _shutterSoundID


+(id)request;
-(void)dealloc;


@end


#endif