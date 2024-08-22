// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCREATESCENEPRINTREQUESTCONFIGURATION_H
#define VNCREATESCENEPRINTREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption
@property (nonatomic) BOOL returnAllResults; // ivar: _returnAllResults
@property (nonatomic) BOOL useCenterTileOnly; // ivar: _useCenterTileOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif