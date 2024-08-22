// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTHUMANRECTANGLESREQUESTCONFIGURATION_H
#define VNDETECTHUMANRECTANGLESREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectHumanRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL upperBodyOnly; // ivar: _upperBodyOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif