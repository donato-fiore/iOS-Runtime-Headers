// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTFACEGAZEREQUESTCONFIGURATION_H
#define VNDETECTFACEGAZEREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectFaceGazeRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float commonGazeLocationRadius; // ivar: _commonGazeLocationRadius
@property (nonatomic) float gazeHeatMapThreshold; // ivar: _gazeHeatMapThreshold
@property (nonatomic) float minimumFaceDimension; // ivar: _minimumFaceDimension


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif