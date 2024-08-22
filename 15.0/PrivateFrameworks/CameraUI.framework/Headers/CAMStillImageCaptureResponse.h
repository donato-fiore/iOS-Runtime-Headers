// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSTILLIMAGECAPTURERESPONSE_H
#define CAMSTILLIMAGECAPTURERESPONSE_H

@class NSString, NSDate, UIImage, NSURL, NSDictionary;
@protocol CAMTransientAssetConvertible;


#import "CAMCaptureResponse.h"

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>



@property (readonly, copy, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (readonly, nonatomic) NSUInteger burstRepresentedCount; // ivar: _burstRepresentedCount
@property (readonly, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (readonly, nonatomic) NSInteger captureID; // ivar: _captureID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // ivar: _expectingPairedVideo
@property (readonly, nonatomic) CGSize finalExpectedPixelSize; // ivar: _finalExpectedPixelSize
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *imageWellImage; // ivar: _imageWellImage
@property (readonly, nonatomic) ? irisStillDisplayTime;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // ivar: _persistenceUUID
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) NSInteger semanticEnhanceScene; // ivar: _semanticEnhanceScene
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *textAnalysisImage; // ivar: _textAnalysisImage
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *uuid;


-(id)initWithUUID:(id)arg0 captureSession:(unsigned short)arg1 captureDate:(id)arg2 metadata:(id)arg3 burstIdentifier:(id)arg4 burstRepresentedCount:(NSUInteger)arg5 imageWellImage:(id)arg6 textAnalysisImage:(id)arg7 coordinationInfo:(id)arg8 finalExpectedPixelSize:(struct CGSize )arg9 expectingPairedVideo:(BOOL)arg10 captureID:(NSInteger)arg11 semanticEnhanceScene:(NSInteger)arg12 ;


@end


#endif