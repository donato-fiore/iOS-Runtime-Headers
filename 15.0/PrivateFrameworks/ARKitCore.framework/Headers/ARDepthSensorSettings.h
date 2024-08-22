// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARDEPTHSENSORSETTINGS_H
#define ARDEPTHSENSORSETTINGS_H

@class NSString;


#import "ARImageSensorSettings.h"

@interface ARDepthSensorSettings : ARImageSensorSettings

@property (retain, nonatomic) NSString *timeOfFlightProjectorMode; // ivar: _timeOfFlightProjectorMode


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithVideoFormat:(id)arg0 ;


@end


#endif