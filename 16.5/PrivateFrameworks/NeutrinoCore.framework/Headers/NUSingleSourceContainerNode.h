// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSINGLESOURCECONTAINERNODE_H
#define NUSINGLESOURCECONTAINERNODE_H



#import "NUSourceContainerNode.h"
#import "NUSourceNode.h"

@interface NUSingleSourceContainerNode : NUSourceContainerNode {
    NUSourceNode *_source;
}




-(id)initWithAssetIdentifier:(id)arg0 ;
-(id)initWithSourceNode:(id)arg0 assetIdentifier:(id)arg1 ;
-(id)primarySourceNode;
-(id)resolveSourceNodeForPipelineState:(id)arg0 foundScale:(struct ? *)arg1 error:(*id)arg2 ;
-(id)sourceNodeForPipelineState:(id)arg0 error:(*id)arg1 ;


@end


#endif