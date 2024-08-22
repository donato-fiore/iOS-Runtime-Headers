// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUTABLEVIDEOCOMPOSITIONINSTRUCTION_H
#define AVMUTABLEVIDEOCOMPOSITIONINSTRUCTION_H

@class AVMutableVideoCompositionInstructionInternal, NSArray;


#import "AVVideoCompositionInstruction.h"

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}


@property (retain, nonatomic) *CGColor backgroundColor;
@property (nonatomic) BOOL enablePostProcessing;
@property (copy, nonatomic) NSArray *layerInstructions;
@property (copy, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (nonatomic) ? timeRange;


+(id)videoCompositionInstruction;


@end


#endif