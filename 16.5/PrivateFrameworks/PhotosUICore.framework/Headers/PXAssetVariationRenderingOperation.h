// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETVARIATIONRENDERINGOPERATION_H
#define PXASSETVARIATIONRENDERINGOPERATION_H

@class NSOperation, PICompositionController, NSDictionary, NSNumber, PLLivePhotoEditSource, NSError, AVAsset, UIImage, NSURL, AVVideoComposition, NSProgress;



@interface PXAssetVariationRenderingOperation : NSOperation

@property (readonly, copy, nonatomic) PICompositionController *adjustedCompositionController; // ivar: _adjustedCompositionController
@property (readonly, copy, nonatomic) NSDictionary *analysisResult; // ivar: _analysisResult
@property (readonly, copy, nonatomic) PICompositionController *baseCompositionController; // ivar: _baseCompositionController
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) PLLivePhotoEditSource *editSource; // ivar: _editSource
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) AVAsset *outputAVAsset; // ivar: _outputAVAsset
@property (readonly, nonatomic) UIImage *outputImage; // ivar: _outputImage
@property (readonly, nonatomic) NSURL *outputImageURL; // ivar: _outputImageURL
@property (readonly, nonatomic) AVVideoComposition *outputVideoComposition; // ivar: _outputVideoComposition
@property (readonly, nonatomic) NSURL *outputVideoURL; // ivar: _outputVideoURL
@property (readonly, nonatomic) PLLivePhotoEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) BOOL renderAllResources; // ivar: _renderAllResources
@property (copy, nonatomic) id *startHandler; // ivar: _startHandler
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize
@property (readonly, nonatomic) NSInteger variationType; // ivar: _variationType


-(id)init;
-(id)initWithEditSource:(id)arg0 overcaptureEditSource:(id)arg1 variationType:(NSInteger)arg2 analysisResult:(id)arg3 baseCompositionController:(id)arg4 outputImageURL:(id)arg5 outputVideoURL:(id)arg6 targetSize:(struct CGSize )arg7 renderAllResources:(BOOL)arg8 ;
-(void)_incrementProgressWithStartDate:(id)arg0 ;
-(void)_timeout;
-(void)cancel;
-(void)main;


@end


#endif