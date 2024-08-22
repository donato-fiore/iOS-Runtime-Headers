// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPOINTCLOUDSENSORDATA_H
#define ARPOINTCLOUDSENSORDATA_H

@class AVPointCloudData, NSString, ADJasperPointCloud;
@protocol NSSecureCoding, ARSensorData;

#import <Foundation/Foundation.h>


@interface ARPointCloudSensorData : NSObject <NSSecureCoding, ARSensorData>

 {
    AVPointCloudData *_pointCloudData;
    NSInteger _projectorMode;
}


@property (readonly, nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (nonatomic) ? cameraTransform; // ivar: _cameraTransform
@property (readonly, nonatomic) NSString *cameraType; // ivar: _cameraType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? extrinsicsToWideSensor; // ivar: _extrinsicsToWideSensor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ADJasperPointCloud *pointCloud; // ivar: _pointCloud
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) ? visionCameraTransform; // ivar: _visionCameraTransform


+(BOOL)supportsSecureCoding;
-(NSInteger)projectorMode;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPointCloudData:(id)arg0 captureFramePerSecond:(NSInteger)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 ;
-(id)initWithPointCloudData:(id)arg0 projectorMode:(NSInteger)arg1 timestamp:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif