// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSTATEFULREQUESTCONFIGURATION_H
#define VNSTATEFULREQUESTCONFIGURATION_H

@class NSUUID;


#import "VNImageBasedRequestConfiguration.h"

@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration

@property ? frameAnalysisSpacing; // ivar: _frameAnalysisSpacing
@property (readonly) NSUUID *requestUUID; // ivar: _requestUUID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif