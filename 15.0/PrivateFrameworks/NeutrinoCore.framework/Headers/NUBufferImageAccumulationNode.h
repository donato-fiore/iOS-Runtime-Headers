// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUBUFFERIMAGEACCUMULATIONNODE_H
#define NUBUFFERIMAGEACCUMULATIONNODE_H

@protocol NUMutablePurgeableBufferImage;


#import "NUImageAccumulationNode.h"

@interface NUBufferImageAccumulationNode : NUImageAccumulationNode

@property (readonly, nonatomic) NSObject<NUMutablePurgeableBufferImage> *bufferImage;


-(id)_newImage;


@end


#endif