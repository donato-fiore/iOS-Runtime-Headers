// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEOSDOFSPLITNODE_H
#define BWVIDEOSDOFSPLITNODE_H



#import "BWFanOutNode.h"
#import "BWNodeOutput.h"

@interface BWVideoSDOFSplitNode : BWFanOutNode {
    *opaqueCMFormatDescription _originalVideoFormatDescription;
}


@property (readonly, nonatomic) BWNodeOutput *originalOutput; // ivar: _originalOutput
@property (readonly, nonatomic) BWNodeOutput *sdofOutput; // ivar: _sdofOutput


+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(void)dealloc;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif