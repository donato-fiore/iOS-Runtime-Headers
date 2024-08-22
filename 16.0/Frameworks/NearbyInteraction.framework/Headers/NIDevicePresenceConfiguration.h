// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIDEVICEPRESENCECONFIGURATION_H
#define NIDEVICEPRESENCECONFIGURATION_H



#import "NIConfiguration.h"
#import "NIRegionPredicate.h"

@interface NIDevicePresenceConfiguration : NIConfiguration

@property NSUInteger allowedDevices; // ivar: _allowedDevices
@property (readonly) NIRegionPredicate *innerBoundary; // ivar: _innerBoundary
@property NSUInteger monitoringOption; // ivar: _monitoringOption
@property (readonly) NIRegionPredicate *outerBoundary; // ivar: _outerBoundary


+(BOOL)_validateRegionIsPreset:(id)arg0 ;
+(BOOL)_validateRegionPredicates:(id)arg0 outer:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(float)_radiusFromDevicePresencePreset:(NSInteger)arg0 ;
+(id)_NIDevicePresenceMonitoringOptionToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInnerBoundary:(id)arg0 outerBoundary:(id)arg1 error:(*id)arg2 ;
-(id)initWithInnerBoundary:(id)arg0 outerBoundary:(id)arg1 monitoringOption:(NSUInteger)arg2 allowedDevices:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif