// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCONTENTEDITINGINPUTRESULT_H
#define PHCONTENTEDITINGINPUTRESULT_H

@class NSMutableDictionary, NSURL, NSNumber;


#import "PHCompositeMediaResult.h"
#import "PHAdjustmentData.h"
#import "PHImageResult.h"

@interface PHContentEditingInputResult : PHCompositeMediaResult {
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
}


@property (copy, nonatomic) NSURL *backSwappingImageRenderURL; // ivar: _backSwappingImageRenderURL
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL; // ivar: _backSwappingVideoRenderURL
@property (retain, nonatomic) NSNumber *baseVersionNeeded; // ivar: _baseVersionNeeded
@property (nonatomic) BOOL canHandleAdjustmentData; // ivar: _canHandleAdjustmentData
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL; // ivar: _frontSwappingImageRenderURL
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL; // ivar: _frontSwappingVideoRenderURL
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData; // ivar: _originalAdjustmentData
@property (retain, nonatomic) NSURL *overCapturePhotoURL; // ivar: _overCapturePhotoURL
@property (retain, nonatomic) NSURL *overCaptureVideoURL; // ivar: _overCaptureVideoURL


-(BOOL)containsValidData;
-(id)adjustmentData;
-(id)cancelledInfoKey;
-(id)description;
-(id)error;
-(id)errorInfoKey;
-(id)exifOrientation;
-(id)flipImageURLs;
-(id)flipVideoURLs;
-(id)imageData;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg0 ;
-(id)imageSandboxExtensionToken;
-(id)imageURL;
-(id)inCloudInfoKey;
-(id)uniformTypeIdentifier;
-(id)videoAdjustmentData;
-(id)videoSandboxExtensionToken;
-(id)videoURL;
-(struct CGImage *)imageRef;
-(void)addAdjustmentDataResult:(id)arg0 ;
-(void)addFlipImageURL:(id)arg0 forAssetResourceType:(NSInteger)arg1 ;
-(void)addFlipVideoURL:(id)arg0 forAssetResourceType:(NSInteger)arg1 ;
-(void)addImageResult:(id)arg0 ;
-(void)addVideoResult:(id)arg0 ;
-(void)clearAdjustmentData;
-(void)mergeInfoDictionaryFromResult:(id)arg0 ;
-(void)setError:(id)arg0 ;


@end


#endif