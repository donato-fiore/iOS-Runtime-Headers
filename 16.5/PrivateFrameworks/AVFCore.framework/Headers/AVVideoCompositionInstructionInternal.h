// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVIDEOCOMPOSITIONINSTRUCTIONINTERNAL_H
#define AVVIDEOCOMPOSITIONINSTRUCTIONINTERNAL_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AVVideoCompositionInstructionInternal : NSObject {
    ? timeRange;
    *CGColor backgroundColor;
    NSArray *layerInstructions;
    BOOL enablePostProcessing;
    NSString *blendingTransferFunction;
    NSArray *requiredSourceSampleDataTrackIDs;
}






@end


#endif