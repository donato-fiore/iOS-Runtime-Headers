// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWCREATEASSETNODE_H
#define PUREVIEWCREATEASSETNODE_H

@class PXRunNode, NSString, NSArray;
@protocol PUReviewAssetNode, PUAdjustmentURLNode, PXRunNodeDelegate, PUReviewImageURLNode, PUImageDataRenderNode, PUImageInfoNode, PUVideoAssetNode, PUVideoURLExportNode, PUReviewVideoURLNode;


#import "PUReviewAsset.h"

@interface PUReviewCreateAssetNode : PXRunNode <PUReviewAssetNode>



@property (readonly, nonatomic) NSObject<PUAdjustmentURLNode> *adjustmentURLNode; // ivar: _adjustmentURLNode
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PUReviewImageURLNode> *imageInfoNode; // ivar: _imageInfoNode
@property (readonly, nonatomic) PUReviewAsset *inputAsset; // ivar: _inputAsset
@property (readonly, nonatomic) NSObject<PUImageDataRenderNode> *renderImageDataNode; // ivar: _renderImageDataNode
@property (readonly, nonatomic) NSObject<PUImageInfoNode> *renderImageInfoNode; // ivar: _renderImageInfoNode
@property (readonly, nonatomic) NSObject<PUVideoAssetNode> *renderVideoAssetNode; // ivar: _renderVideoAssetNode
@property (readonly, nonatomic) NSObject<PUVideoURLExportNode> *renderVideoURLNode; // ivar: _renderVideoURLNode
@property (readonly, nonatomic) PUReviewAsset *reviewAsset; // ivar: _reviewAsset
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PUVideoAssetNode> *videoAssetNode; // ivar: _videoAssetNode
@property (readonly, nonatomic) NSObject<PUReviewVideoURLNode> *videoURLNode; // ivar: _videoURLNode
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)initWithInputAsset:(id)arg0 imageInfoNode:(id)arg1 renderImageInfoNode:(id)arg2 renderImageDataNode:(id)arg3 videoURLNode:(id)arg4 videoAssetNode:(id)arg5 renderVideoURLNode:(id)arg6 renderVideoAssetNode:(id)arg7 adjustmentURLNode:(id)arg8 ;
-(void)run;


@end


#endif