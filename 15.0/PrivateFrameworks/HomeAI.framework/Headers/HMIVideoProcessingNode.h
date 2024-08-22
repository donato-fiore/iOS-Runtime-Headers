// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOPROCESSINGNODE_H
#define HMIVIDEOPROCESSINGNODE_H



#import "HMIVideoNode.h"

@interface HMIVideoProcessingNode : HMIVideoNode



-(void)finish;
-(void)finishWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushAsync;
-(void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif