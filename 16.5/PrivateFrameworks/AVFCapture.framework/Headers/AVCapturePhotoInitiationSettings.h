// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREPHOTOINITIATIONSETTINGS_H
#define AVCAPTUREPHOTOINITIATIONSETTINGS_H


#import <Foundation/Foundation.h>

#import "AVCapturePhotoInitiationSettingsInternal.h"

@interface AVCapturePhotoInitiationSettings : NSObject {
    AVCapturePhotoInitiationSettingsInternal *_internal;
}


@property (nonatomic) NSInteger HDRMode;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic) BOOL burstQualityCaptureEnabled;
@property (nonatomic) NSInteger flashMode;
@property (readonly, nonatomic) NSUInteger timestamp;
@property (readonly, nonatomic) NSInteger uniqueID;


+(id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(NSUInteger)arg0 ;
-(id)_initWithTimestamp:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif