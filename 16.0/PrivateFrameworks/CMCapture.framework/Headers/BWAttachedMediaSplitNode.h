// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWATTACHEDMEDIASPLITNODE_H
#define BWATTACHEDMEDIASPLITNODE_H

@class NSArray, NSMutableDictionary, NSMutableSet;


#import "BWFanOutNode.h"

@interface BWAttachedMediaSplitNode : BWFanOutNode {
    NSArray *_attachedMediaKeys;
    NSMutableDictionary *_attachedMediaFormatDescriptions;
    NSArray *_attachedMediaToPropagateToPrimaryOutput;
    NSMutableSet *_disabledAttachedMediaKeys;
    int _numOutputs;
    BOOL _emitsNodeErrorsForMissingAttachedMedia;
}




+(void)initialize;
-(BOOL)emitsNodeErrorsForMissingAttachedMedia;
-(BOOL)isOutputRenderingEnabledForAttachedMediaKey:(id)arg0 ;
-(id)initWithAttachedMediaKeys:(id)arg0 ;
-(id)initWithAttachedMediaKeys:(id)arg0 attachedMediaToPropagateToPrimaryOutput:(id)arg1 ;
-(id)nodeSubType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)arg0 ;
-(void)setOutputRenderingEnabled:(BOOL)arg0 forAttachedMediaKey:(id)arg1 ;


@end


#endif