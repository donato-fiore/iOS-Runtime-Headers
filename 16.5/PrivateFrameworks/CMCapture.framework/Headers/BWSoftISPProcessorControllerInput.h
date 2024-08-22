// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSOFTISPPROCESSORCONTROLLERINPUT_H
#define BWSOFTISPPROCESSORCONTROLLERINPUT_H



#import "BWStillImageProcessorControllerInput.h"

@interface BWSoftISPProcessorControllerInput : BWStillImageProcessorControllerInput

@property (retain, nonatomic) *__CVBuffer auxiliaryBuffer; // ivar: _auxiliaryBuffer
@property (retain, nonatomic) *opaqueCMSampleBuffer frame; // ivar: _frame
@property (readonly, nonatomic) BOOL gdcEnabled; // ivar: _gdcEnabled
@property (readonly, nonatomic) int processingMode; // ivar: _processingMode


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 gdcEnabled:(BOOL)arg2 ;
-(void)addFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)addFrame:(struct opaqueCMSampleBuffer *)arg0 processingMode:(int)arg1 ;
-(void)dealloc;


@end


#endif