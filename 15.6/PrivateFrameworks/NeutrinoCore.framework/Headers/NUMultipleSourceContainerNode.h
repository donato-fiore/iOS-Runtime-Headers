// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMULTIPLESOURCECONTAINERNODE_H
#define NUMULTIPLESOURCECONTAINERNODE_H

@class NSArray;


#import "NUSourceContainerNode.h"

@interface NUMultipleSourceContainerNode : NUSourceContainerNode

@property (retain) NSArray *sources; // ivar: _sources


-(id)description;
-(id)initWithAssetIdentifier:(id)arg0 ;
-(id)initWithSourceNodes:(id)arg0 assetIdentifier:(id)arg1 ;
-(id)primarySourceNode;
-(id)resolveSourceNodeForPipelineState:(id)arg0 foundScale:(struct ? *)arg1 error:(*id)arg2 ;
-(id)sourceNodeForPipelineState:(id)arg0 error:(*id)arg1 ;


@end


#endif