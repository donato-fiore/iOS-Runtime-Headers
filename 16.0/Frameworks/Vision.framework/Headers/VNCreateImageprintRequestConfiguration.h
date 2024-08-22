// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCREATEIMAGEPRINTREQUESTCONFIGURATION_H
#define VNCREATEIMAGEPRINTREQUESTCONFIGURATION_H

@class NSNumber;


#import "VNImageBasedRequestConfiguration.h"

@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration

@property (copy, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif