// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PERESOURCELOADRESULT_H
#define PERESOURCELOADRESULT_H

@class PICompositionController, PHContentEditingInput, PLEditSource, UIImage, NSURL, NSString, NUComposition;
@protocol PEAsset;

#import <Foundation/Foundation.h>


@interface PEResourceLoadResult : NSObject

@property (retain, nonatomic) PICompositionController *adjustedSourceCompositionController; // ivar: _adjustedSourceCompositionController
@property (retain, nonatomic, setter=_setAsset:) NSObject<PEAsset> *asset; // ivar: _asset
@property (nonatomic, setter=_setAssetLoadingAsRaw:) BOOL assetLoadingAsRaw; // ivar: _assetLoadingAsRaw
@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController; // ivar: _compositionController
@property (retain, nonatomic, setter=_setContentEditingInput:) PHContentEditingInput *contentEditingInput; // ivar: _contentEditingInput
@property (retain, nonatomic, setter=_setEditSource:) PLEditSource *editSource; // ivar: _editSource
@property (retain, nonatomic, setter=_setImage:) UIImage *image; // ivar: _image
@property (retain, nonatomic, setter=_setImageURL:) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic, setter=_setImageUTI:) NSString *imageUTI; // ivar: _imageUTI
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


+(id)resultWithContentEditingInput:(id)arg0 asset:(id)arg1 assetLoadingAsRaw:(BOOL)arg2 ;
-(id)overcaptureEditSource;


@end


#endif