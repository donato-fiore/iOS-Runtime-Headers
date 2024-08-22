// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSWFRPROCESSORCONTROLLERINPUT_H
#define BWSWFRPROCESSORCONTROLLERINPUT_H



#import "BWStillImageProcessorControllerInput.h"

@interface BWSWFRProcessorControllerInput : BWStillImageProcessorControllerInput

@property (readonly, nonatomic) BOOL addFrameFailed; // ivar: _addFrameFailed
@property (readonly, nonatomic) *opaqueCMSampleBuffer ambientFrame; // ivar: _ambientFrame
@property (readonly, nonatomic) *opaqueCMSampleBuffer flashFrame; // ivar: _flashFrame


-(void)addFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif