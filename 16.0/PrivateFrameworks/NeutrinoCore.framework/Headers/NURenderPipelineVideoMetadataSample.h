// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERPIPELINEVIDEOMETADATASAMPLE_H
#define NURENDERPIPELINEVIDEOMETADATASAMPLE_H

@class AVTimedMetadataGroup;

#import <Foundation/Foundation.h>


@interface NURenderPipelineVideoMetadataSample : NSObject

@property (readonly, nonatomic) ? frameTime; // ivar: _frameTime
@property (readonly, nonatomic) AVTimedMetadataGroup *metadataGroup; // ivar: _metadataGroup


-(id)initWithFrameTime:(struct ? )arg0 metadataGroup:(id)arg1 ;


@end


#endif