// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREDEFERREDPHOTOPROXY_H
#define AVCAPTUREDEFERREDPHOTOPROXY_H

@class NSString;


#import "AVCapturePhoto.h"

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {
    NSString *_captureRequestIdentifier;
}


@property (readonly) NSString *deferredPhotoIdentifier;
@property (readonly, copy) NSString *persistentStorageUUID; // ivar: _photoIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)captureRequestIdentifier;
-(id)debugDescription;
-(id)description;
-(id)initWithDeferredPhotoIdentifier:(id)arg0 ;
-(id)initWithTimestamp:(struct ? )arg0 captureRequestIdentifier:(id)arg1 photoIdentifier:(id)arg2 expectedPhotoProcessingFlags:(unsigned int)arg3 ;
-(id)initWithTimestamp:(struct ? )arg0 proxySurface:(struct __IOSurface *)arg1 proxySurfaceSize:(NSUInteger)arg2 proxyFileType:(id)arg3 previewPhotoSurface:(struct __IOSurface *)arg4 metadata:(id)arg5 captureRequest:(id)arg6 sequenceCount:(NSUInteger)arg7 photoCount:(NSUInteger)arg8 captureRequestIdentifier:(id)arg9 photoIdentifier:(id)arg10 expectedPhotoProcessingFlags:(unsigned int)arg11 sourceDeviceType:(id)arg12 ;
-(struct ? )dimensions;
-(void)dealloc;


@end


#endif