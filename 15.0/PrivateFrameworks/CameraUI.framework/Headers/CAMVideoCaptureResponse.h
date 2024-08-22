// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIDEOCAPTURERESPONSE_H
#define CAMVIDEOCAPTURERESPONSE_H

@class NSString, NSDate, UIImage, NSURL, NSDictionary;
@protocol CAMTransientAssetConvertible;


#import "CAMCaptureResponse.h"

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>



@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (readonly, nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) CGSize finalExpectedPixelSize; // ivar: _finalExpectedPixelSize
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *imageWellImage; // ivar: _imageWellImage
@property (readonly, nonatomic) ? irisStillDisplayTime;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, copy, nonatomic) NSURL *localPersistenceURL; // ivar: _localPersistenceURL
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // ivar: _persistenceUUID
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) UIImage *previewImage; // ivar: _previewImage
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, nonatomic) ? stillDisplayTime; // ivar: _stillDisplayTime
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly, copy, nonatomic) NSString *stillPersistenceUUID; // ivar: _stillPersistenceUUID
@property (readonly, nonatomic) BOOL stoppedUnexpectedly;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CGFloat videoZoomFactor; // ivar: _videoZoomFactor


-(id)initWithUUID:(id)arg0 captureMode:(NSInteger)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(struct ? )arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(struct ? )arg7 reason:(NSInteger)arg8 videoZoomFactor:(CGFloat)arg9 finalExpectedPixelSize:(struct CGSize )arg10 imageWellImage:(id)arg11 previewImage:(id)arg12 coordinationInfo:(id)arg13 ;


@end


#endif