// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETVARIATIONRENDERRESULT_H
#define PXASSETVARIATIONRENDERRESULT_H

@class NSDictionary, PICompositionController, NSError, UIImage, NSURL, AVAsset, AVVideoComposition;

#import <Foundation/Foundation.h>


@interface PXAssetVariationRenderResult : NSObject

@property (readonly, copy, nonatomic) NSDictionary *analysisResult; // ivar: _analysisResult
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (nonatomic, getter=isFullsizeRender) BOOL fullsizeRender; // ivar: _fullsizeRender
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly, nonatomic) NSInteger variationType; // ivar: _variationType
@property (retain, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset
@property (retain, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL


-(id)description;
-(id)init;
-(id)initWithVariationType:(NSInteger)arg0 imageURL:(id)arg1 videoURL:(id)arg2 analysisResult:(id)arg3 compositionController:(id)arg4 success:(BOOL)arg5 error:(id)arg6 ;


@end


#endif