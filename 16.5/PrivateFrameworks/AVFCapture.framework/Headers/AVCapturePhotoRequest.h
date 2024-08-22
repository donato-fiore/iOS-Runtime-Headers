// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREPHOTOREQUEST_H
#define AVCAPTUREPHOTOREQUEST_H

@class AVWeakReferencingDelegateStorage, NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureResolvedPhotoSettings.h"
#import "AVCapturePhotoSettings.h"

@interface AVCapturePhotoRequest : NSObject {
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
}


@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage; // ivar: _delegateStorage
@property (readonly) BOOL delegateSupportsDebugMetadataSidecarFile; // ivar: _delegateSupportsDebugMetadataSidecarFile
@property (readonly, nonatomic) NSUInteger expectedPhotoCount;
@property (readonly, nonatomic) NSArray *expectedPhotoManifest; // ivar: _expectedPhotoManifest
@property (nonatomic) unsigned int firedCallbackFlags; // ivar: _firedCallbackFlags
@property (nonatomic) NSUInteger firedPhotoCallbacksCount; // ivar: _firedPhotoCallbacksCount
@property (readonly) BOOL lensStabilizationSupported; // ivar: _lensStabilizationSupported
@property (readonly) unsigned int photoCallbackFlavor; // ivar: _photoCallbackFlavor
@property (retain, nonatomic) *opaqueCMSampleBuffer previewSampleBuffer; // ivar: _previewSampleBuffer
@property (retain, nonatomic) *__IOSurface previewSurface; // ivar: _previewSurface
@property (retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (retain, nonatomic) *__IOSurface thumbnailSurface; // ivar: _thumbnailSurface
@property (readonly) AVCapturePhotoSettings *unresolvedSettings; // ivar: _unresolvedSettings


+(id)requestWithDelegate:(id)arg0 settings:(id)arg1 lensStabilizationSupported:(BOOL)arg2 ;
+(void)initialize;
-(id)initWithDelegate:(id)arg0 settings:(id)arg1 lensStabilizationSupported:(BOOL)arg2 ;
-(void)_resolveExpectedPhotoManifest;
-(void)dealloc;


@end


#endif