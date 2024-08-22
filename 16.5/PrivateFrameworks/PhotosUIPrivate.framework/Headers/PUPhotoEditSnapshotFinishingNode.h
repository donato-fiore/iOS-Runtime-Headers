// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITSNAPSHOTFINISHINGNODE_H
#define PUPHOTOEDITSNAPSHOTFINISHINGNODE_H

@class PXRunNode;


#import "PUEditableMediaProviderAdjustmentDataNode.h"
#import "PUPhotoEditBaseMediaNode.h"
#import "PUEditableMediaProviderImageDataNode.h"
#import "PUEditableMediaProviderVideoAssetNode.h"

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode

@property (readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode; // ivar: _adjustmentNode
@property (readonly, nonatomic) PUPhotoEditBaseMediaNode *baseMediaNode; // ivar: _baseMediaNode
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) PUEditableMediaProviderImageDataNode *currentImageNode; // ivar: _currentImageNode
@property (readonly, nonatomic) PUEditableMediaProviderVideoAssetNode *currentVideoNode; // ivar: _currentVideoNode


-(id)initWithAdjustmentNode:(id)arg0 baseMediaNode:(id)arg1 currentImageNode:(id)arg2 currentVideoNode:(id)arg3 completionHandler:(id)arg4 ;
-(void)run;


@end


#endif