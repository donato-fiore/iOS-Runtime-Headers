// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREVIDEOSETTINGSVALIDATOR_H
#define AVCAPTUREVIDEOSETTINGSVALIDATOR_H


#import <Foundation/Foundation.h>


@interface AVCaptureVideoSettingsValidator : NSObject



+(BOOL)validateVideoSettings:(id)arg0 allowingFeatures:(NSUInteger)arg1 validPixelKeys:(id)arg2 validPixelFormats:(id)arg3 validCodecKeys:(id)arg4 validCodecs:(id)arg5 exceptionReason:(*id)arg6 ;


@end


#endif