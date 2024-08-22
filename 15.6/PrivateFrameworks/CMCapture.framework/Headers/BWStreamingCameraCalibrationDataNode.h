// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTREAMINGCAMERACALIBRATIONDATANODE_H
#define BWSTREAMINGCAMERACALIBRATIONDATANODE_H

@class NSDictionary;


#import "BWNode.h"

@interface BWStreamingCameraCalibrationDataNode : BWNode {
    NSDictionary *_cameraInfoByPortType;
}


@property (nonatomic) int horizontalSensorBinningFactor; // ivar: _horizontalSensorBinningFactor
@property (nonatomic) BOOL mirroringEnabled; // ivar: _mirroringEnabled
@property (nonatomic) int rotationDegrees; // ivar: _rotationDegrees
@property (nonatomic) int verticalSensorBinningFactor; // ivar: _verticalSensorBinningFactor


+(void)initialize;
-(id)initWithCameraInfoByPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif