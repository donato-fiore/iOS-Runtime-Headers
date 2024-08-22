// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NULIVEPHOTOSOURCECONTAINERNODE_H
#define NULIVEPHOTOSOURCECONTAINERNODE_H



#import "NUSourceContainerNode.h"

@interface NULivePhotoSourceContainerNode : NUSourceContainerNode {
    NUSourceContainerNode *_image;
    NUSourceContainerNode *_video;
}




-(id)containerNodeForPipelineState:(id)arg0 ;
-(id)initWithAssetIdentifier:(id)arg0 ;
-(id)initWithImageContainerNode:(id)arg0 videoContainerNode:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)primarySourceNode;
-(id)resolveSourceNodeForPipelineState:(id)arg0 foundScale:(struct ? *)arg1 error:(*id)arg2 ;
-(id)sourceNodeForPipelineState:(id)arg0 error:(*id)arg1 ;


@end


#endif