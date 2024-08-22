// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWATTACHEDMEDIASWAPNODE_H
#define BWATTACHEDMEDIASWAPNODE_H

@class NSString, NSArray;


#import "BWNode.h"

@interface BWAttachedMediaSwapNode : BWNode {
    NSString *_primaryFormatToAttachedMediaKey;
    NSString *_attachedMediaKeyToPrimaryFormat;
    NSArray *_sampleBufferAttachmentsToTransfer;
    BOOL _generatesDroppedSampleMarkerBuffers;
}




+(void)initialize;
-(id)initWithPrimaryFormatToAttachedMediaKey:(id)arg0 attachedMediaKeyToPrimaryFormat:(id)arg1 sampleBufferAttachmentsToTransfer:(id)arg2 generatesDroppedSampleMarkerBuffers:(BOOL)arg3 ;
-(id)nodeSubType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif