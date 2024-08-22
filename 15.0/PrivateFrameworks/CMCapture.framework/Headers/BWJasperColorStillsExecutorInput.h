// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWJASPERCOLORSTILLSEXECUTORINPUT_H
#define BWJASPERCOLORSTILLSEXECUTORINPUT_H

@class NSArray;
@protocol BWJasperColorStillsExecutorInputDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWJasperColorStillsExecutorInput : BWStillImageProcessorInput {
    ? _colorBufferPTS;
    CGFloat _colorBufferExposureTime;
    int _numberOfPointCloudsRequired;
    int _maxinimumNumberOfPointCLouds;
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
-(id)jasperPointCloudsForColorBuffer;
-(void)_trimPointClouds;
-(void)addPointCloud:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)executeNow;


@end


#endif