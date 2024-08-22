// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITRESOURCELOADRESULT_H
#define PUPHOTOEDITRESOURCELOADRESULT_H

@class NSString, PICompositionController, PHContentEditingInput, UIImage, NSURL, NUComposition;
@protocol PUEditableAsset;

#import <Foundation/Foundation.h>

#import "PUPhotoEditIrisModel.h"

@interface PUPhotoEditResourceLoadResult : NSObject

@property (retain, nonatomic, setter=_setAdjustmentIdentifierAndVersion:) NSString *adjustmentIdentifierAndVersion; // ivar: _adjustmentIdentifierAndVersion
@property (retain, nonatomic, setter=_setAsset:) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (nonatomic, setter=_setAssetLoadingAsRaw:) BOOL assetLoadingAsRaw; // ivar: _assetLoadingAsRaw
@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController; // ivar: _compositionController
@property (retain, nonatomic, setter=_setContentEditingInput:) PHContentEditingInput *contentEditingInput; // ivar: _contentEditingInput
@property (retain, nonatomic, setter=_setImage:) UIImage *image; // ivar: _image
@property (retain, nonatomic, setter=_setImageURL:) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic, setter=_setImageUTI:) NSString *imageUTI; // ivar: _imageUTI
@property (retain, nonatomic, setter=_setLivePhotoModel:) PUPhotoEditIrisModel *livePhotoModel; // ivar: _livePhotoModel
@property (retain, nonatomic, setter=_setOriginalComposition:) NUComposition *originalComposition; // ivar: _originalComposition
@property (retain, nonatomic) NSURL *overcaptureImageURL; // ivar: _overcaptureImageURL
@property (retain, nonatomic) NSURL *overcaptureVideoURL; // ivar: _overcaptureVideoURL
@property (nonatomic, setter=_setPenultimateAvailability:) NSInteger penultimateAvailability; // ivar: _penultimateAvailability
@property (readonly, nonatomic, getter=isPenultimateAvailable) BOOL penultimateAvailable;
@property (nonatomic, setter=_setRetrievedVersion:) NSInteger retrievedVersion; // ivar: _retrievedVersion
@property (nonatomic, setter=_setVideoComplementDuration:) ? videoComplementDuration; // ivar: _videoComplementDuration
@property (nonatomic) ? videoComplementOriginalStillImageTime; // ivar: _videoComplementOriginalStillImageTime
@property (nonatomic, setter=_setVideoComplementStillImageTime:) ? videoComplementStillImageTime; // ivar: _videoComplementStillImageTime
@property (retain, nonatomic, setter=_setVideoComplementURL:) NSURL *videoComplementURL; // ivar: _videoComplementURL


+(id)resultWithContentEditingInput:(id)arg0 asset:(id)arg1 ;
-(id)editSource;
-(id)overcaptureEditSource;


@end


#endif