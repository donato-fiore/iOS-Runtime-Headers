// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWINTERNALSAVENODE_H
#define PUREVIEWINTERNALSAVENODE_H

@class PXRunNode, NSURL, NSString, NSArray, NSData;
@protocol PUImageInfoNode, PUVideoURLExportNode, PUAdjustmentURLNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUImageDataRenderNode, PXRunNodeDelegate;


#import "PUEditableMediaProviderImageDataNode.h"
#import "PUImageDataRenderNode.h"
#import "PUPhotoEditIrisModel.h"
#import "PUVideoExportNode.h"
#import "PUEditableMediaProviderVideoURLNode.h"

@interface PUReviewInternalSaveNode : PXRunNode <PUImageInfoNode, PUVideoURLExportNode, PUAdjustmentURLNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUImageDataRenderNode>



@property (readonly, nonatomic) NSURL *adjustmentURL; // ivar: _adjustmentURL
@property (readonly, nonatomic) CGSize baseImageSize; // ivar: _baseImageSize
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directory; // ivar: _directory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) PUEditableMediaProviderImageDataNode *imageDataNode; // ivar: _imageDataNode
@property (readonly, nonatomic) NSURL *imageDataURL; // ivar: _imageDataURL
@property (readonly, nonatomic) NSString *imageDataUTI; // ivar: _imageDataUTI
@property (readonly, nonatomic) NSInteger imageExifOrientation; // ivar: _imageExifOrientation
@property (readonly, nonatomic) PUImageDataRenderNode *imageRenderNode; // ivar: _imageRenderNode
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *livePhotoModel; // ivar: _livePhotoModel
@property (readonly, nonatomic) NSURL *providedFullsizeImageURL; // ivar: _providedFullsizeImageURL
@property (readonly, nonatomic) NSURL *providedVideoURL; // ivar: _providedVideoURL
@property (readonly, nonatomic) CGSize renderedImageSize; // ivar: _renderedImageSize
@property (readonly, nonatomic) CGSize renderedVideoSize; // ivar: _renderedVideoSize
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useEmbeddedPreview; // ivar: _useEmbeddedPreview
@property (readonly, nonatomic) PUVideoExportNode *videoRenderNode; // ivar: _videoRenderNode
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, nonatomic) PUEditableMediaProviderVideoURLNode *videoURLNode; // ivar: _videoURLNode
@property (readonly, getter=isWaiting) BOOL waiting;


-(CGFloat)_baseDuration;
-(NSInteger)_adjustmentBaseVersion;
-(NSInteger)_baseExifOrientation;
-(id)_exportProperties;
-(id)initWithDirectory:(id)arg0 imageDataNode:(id)arg1 imageRenderNode:(id)arg2 videoURLNode:(id)arg3 videoRenderNode:(id)arg4 livePhotoModel:(id)arg5 ;
-(void)run;


@end


#endif