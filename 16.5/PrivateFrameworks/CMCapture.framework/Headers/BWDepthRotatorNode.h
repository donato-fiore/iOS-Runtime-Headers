// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEPTHROTATORNODE_H
#define BWDEPTHROTATORNODE_H



#import "BWNode.h"

@interface BWDepthRotatorNode : BWNode {
    *opaqueCMFormatDescription _outputDepthFormatDescription;
    *opaqueCMFormatDescription _outputDYFormatDescription;
    unsigned int _inputDepthFormat;
    ? _inputDepthDimensions;
    int _rotationDegrees;
    NSInteger _bufferSerialNumber;
    BOOL _separateDepthComponentsEnabled;
    BOOL _depthProvidedAsAttachedMedia;
}




+(void)initialize;
-(id)initWithRotationDegrees:(int)arg0 separateDepthComponentsEnabled:(BOOL)arg1 depthProvidedAsAttachedMedia:(BOOL)arg2 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif