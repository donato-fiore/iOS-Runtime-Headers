// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITBASEMEDIANODE_H
#define PUPHOTOEDITBASEMEDIANODE_H

@class PXRunNode, NSString, NSArray, NSData, AVAsset;
@protocol PUImageDataNode, PUVideoAssetNode, PXRunNodeDelegate;


#import "PUEditableMediaProviderImageDataNode.h"
#import "PUEditableMediaProviderVideoAssetNode.h"
#import "PUEditableMediaProviderAdjustmentDataNode.h"

@interface PUPhotoEditBaseMediaNode : PXRunNode <PUImageDataNode, PUVideoAssetNode, PXRunNodeDelegate>

 {
    PUEditableMediaProviderImageDataNode *_imageDataNode;
    PUEditableMediaProviderVideoAssetNode *_videoAssetNode;
    PXRunNode *_gatheringNode;
}


@property (readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode; // ivar: _adjustmentNode
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)initWithAdjustmentNode:(id)arg0 ;
-(void)run;
-(void)runNode:(id)arg0 didCompleteWithError:(id)arg1 ;


@end


#endif