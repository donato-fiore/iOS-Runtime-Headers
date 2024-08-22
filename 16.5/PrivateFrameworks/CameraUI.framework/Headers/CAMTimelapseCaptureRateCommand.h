// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTIMELAPSECAPTURERATECOMMAND_H
#define CAMTIMELAPSECAPTURERATECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMTimelapseCaptureRateCommand : CAMCaptureCommand

@property (readonly, nonatomic) float _captureRate; // ivar: __captureRate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaultTimelapseCaptureRate;
-(id)initWithTimelapseCaptureRate:(float)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif