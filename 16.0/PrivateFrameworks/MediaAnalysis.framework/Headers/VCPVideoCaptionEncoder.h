// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOCAPTIONENCODER_H
#define VCPVIDEOCAPTIONENCODER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPVideoCaptionEncoder : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
    BOOL _forceNNGraph;
}


@property (readonly) int embeddingChannels; // ivar: _embeddingChannels
@property (readonly) int embeddingHeight; // ivar: _embeddingHeight
@property (readonly) int embeddingSequenceLength; // ivar: _embeddingSequenceLength
@property (readonly) int embeddingWidth; // ivar: _embeddingWidth
@property (readonly) *float videoEmbedding; // ivar: _videoEmbedding


-(id)initWithModelPath:(id)arg0 ;
-(int)inference:(*float)arg0 ;


@end


#endif