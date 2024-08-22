// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSTILLIMAGECAPTURERESULT_H
#define CAMSTILLIMAGECAPTURERESULT_H

@class NSArray, NSDate, AVCapturePhoto, NSDictionary, NSString, NSError;

#import <Foundation/Foundation.h>

#import "CAMCaptureCoordinationInfo.h"

@interface CAMStillImageCaptureResult : NSObject

@property (readonly, nonatomic) NSArray *adjustmentFilters; // ivar: _adjustmentFilters
@property (readonly, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (readonly, nonatomic) AVCapturePhoto *capturePhoto; // ivar: _capturePhoto
@property (readonly, nonatomic) NSDictionary *compactMetadata;
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // ivar: _coordinationInfo
@property (readonly, copy, nonatomic) NSString *deferredPhotoIdentifier; // ivar: _deferredPhotoIdentifier
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // ivar: _expectingPairedVideo
@property (readonly, copy, nonatomic) NSString *imageGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // ivar: _persistenceUUID
@property (readonly, nonatomic) BOOL representsDeferredFilteredProxy; // ivar: _representsDeferredFilteredProxy
@property (readonly, nonatomic) NSInteger semanticEnhancement; // ivar: _semanticEnhancement
@property (readonly, nonatomic) BOOL shouldPersistAdjustmentSidecar; // ivar: _shouldPersistAdjustmentSidecar
@property (readonly, nonatomic) *__IOSurface stillImageFilteredPreviewSurface; // ivar: _stillImageFilteredPreviewSurface
@property (readonly, nonatomic) *__IOSurface stillImageFullsizeSurface; // ivar: _stillImageFullsizeSurface
@property (readonly, nonatomic) NSUInteger stillImageFullsizeSurfaceSize; // ivar: _stillImageFullsizeSurfaceSize
@property (readonly, nonatomic) *__IOSurface stillImageUnfilteredPreviewSurface; // ivar: _stillImageUnfilteredPreviewSurface


-(id)_captureDateFromMetadata:(id)arg0 ;
-(id)compactMetadataWithSecondaryMakerNote:(id)arg0 ;
-(id)description;
-(id)initWithCaptureDeferredPhotoProxy:(id)arg0 expectingPairedVideo:(BOOL)arg1 adjustmentFilters:(id)arg2 filteredPreviewSurface:(struct __IOSurface *)arg3 shouldPersistAdjustmentSidecar:(BOOL)arg4 persistenceUUID:(id)arg5 coordinationInfo:(id)arg6 semanticEnhancement:(NSInteger)arg7 error:(id)arg8 ;
-(id)initWithCapturePhoto:(id)arg0 expectingPairedVideo:(BOOL)arg1 adjustmentFilters:(id)arg2 filteredPreviewSurface:(struct __IOSurface *)arg3 shouldPersistAdjustmentSidecar:(BOOL)arg4 persistenceUUID:(id)arg5 coordinationInfo:(id)arg6 semanticEnhancement:(NSInteger)arg7 error:(id)arg8 ;
-(id)initWithFullsizeSurface:(struct __IOSurface *)arg0 size:(NSUInteger)arg1 unfilteredPreviewSurface:(struct __IOSurface *)arg2 filteredPreviewSurface:(struct __IOSurface *)arg3 metadata:(id)arg4 expectingPairedVideo:(BOOL)arg5 shouldPersistAdjustmentSidecar:(BOOL)arg6 adjustmentFilters:(id)arg7 persistenceUUID:(id)arg8 coordinationInfo:(id)arg9 error:(id)arg10 ;
-(void)dealloc;


@end


#endif