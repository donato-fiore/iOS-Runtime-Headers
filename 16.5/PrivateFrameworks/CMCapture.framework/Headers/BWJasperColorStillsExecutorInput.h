// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWJASPERCOLORSTILLSEXECUTORINPUT_H
#define BWJASPERCOLORSTILLSEXECUTORINPUT_H

@class NSArray;
@protocol BWJasperColorStillsExecutorInputDelegate;


#import "BWStillImageProcessorControllerInput.h"

@interface BWJasperColorStillsExecutorInput : BWStillImageProcessorControllerInput {
    ? _colorBufferPTS;
    CGFloat _colorBufferExposureTime;
    int _numberOfPointCloudsRequired;
    int _maximumNumberOfPointClouds;
}


@property (readonly, nonatomic) *opaqueCMSampleBuffer colorBuffer; // ivar: _colorBuffer
@property (readonly, nonatomic) NSUInteger colorBufferType; // ivar: _colorBufferType
@property (retain, nonatomic) NSObject<BWJasperColorStillsExecutorInputDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL needMorePointClouds;
@property (readonly, nonatomic) NSArray *pointClouds; // ivar: _pointClouds
@property (readonly, nonatomic, getter=isReadyToExecute) BOOL readyToExecute;
@property (nonatomic) BOOL skipProcessing; // ivar: _skipProcessing


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)addPointCloud:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif