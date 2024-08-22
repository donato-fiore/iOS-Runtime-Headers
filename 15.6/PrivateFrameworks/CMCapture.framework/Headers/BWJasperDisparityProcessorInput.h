// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWJASPERDISPARITYPROCESSORINPUT_H
#define BWJASPERDISPARITYPROCESSORINPUT_H

@protocol BWJasperDisparityProcessorInputDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWJasperDisparityProcessorInput : BWStillImageProcessorInput {
    ? _colorBufferPTS;
    CGFloat _colorBufferExposureTime;
}


@property (readonly, nonatomic) *opaqueCMSampleBuffer colorBuffer; // ivar: _colorBuffer
@property (readonly, nonatomic) NSUInteger colorBufferType; // ivar: _colorBufferType
@property (retain, nonatomic) NSObject<BWJasperDisparityProcessorInputDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isReadyToExecute) BOOL readyToExecute;
@property (nonatomic) BOOL skipProcessing; // ivar: _skipProcessing


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)dealloc;
-(void)executeNow;


@end


#endif