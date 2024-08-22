// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWLEARNEDNRINPUT_H
#define BWLEARNEDNRINPUT_H

@protocol BWLearnedNRInputDelegate;


#import "BWStillImageProcessorControllerInput.h"

@interface BWLearnedNRInput : BWStillImageProcessorControllerInput

@property (retain, nonatomic) NSObject<BWLearnedNRInputDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) *opaqueCMSampleBuffer inputFrame; // ivar: _inputFrame


-(void)dealloc;


@end


#endif