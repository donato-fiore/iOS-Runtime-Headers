// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSCENECLASSIFIERFRAMEGATENODE_H
#define BWSCENECLASSIFIERFRAMEGATENODE_H



#import "BWNode.h"

@interface BWSceneClassifierFrameGateNode : BWNode {
    BOOL _discardsBlurryFrames;
    int _maxFrameRate;
    ? _lastEmittedPTS;
    int _inputFrameCount;
}




+(void)initialize;
-(BOOL)discardsBlurryFrames;
-(id)initWithMaxOutputFrameRate:(int)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setDiscardsBlurryFrames:(BOOL)arg0 ;


@end


#endif