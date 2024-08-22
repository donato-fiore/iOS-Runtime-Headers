// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLCIRCULARREGION_H
#define CLCIRCULARREGION_H



#import "CLRegion.h"

@interface CLCircularRegion : CLRegion

@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby; // ivar: _allowMonitoringWhileNearby
@property (readonly) CLLocationCoordinate2D center;
@property (readonly, nonatomic) CGFloat desiredAccuracy; // ivar: _desiredAccuracy
@property (readonly, nonatomic) CLLocationCoordinate2D geoCenter; // ivar: _geoCenter
@property (readonly, nonatomic) CGFloat geoRadius; // ivar: _geoRadius
@property (nonatomic) int geoReferenceFrame; // ivar: _geoReferenceFrame
@property (readonly, nonatomic) BOOL isLowPower; // ivar: _isLowPower
@property (readonly) CGFloat radius;


+(BOOL)supportsSecureCoding;
-(BOOL)containsCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForLowPowerWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 ;
-(id)initLegacyObjectWithCoder:(id)arg0 ;
-(id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 nearbyAllowed:(BOOL)arg3 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 onBehalfOfBundleId:(id)arg3 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 referenceFrame:(int)arg2 allowMonitoringWhenNearby:(BOOL)arg3 lowPower:(BOOL)arg4 identifier:(id)arg5 onBehalfOfBundleId:(id)arg6 notifyOnEntry:(BOOL)arg7 notifyOnExit:(BOOL)arg8 conservativeEntry:(BOOL)arg9 emergency:(BOOL)arg10 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 referenceFrame:(int)arg2 allowMonitoringWhenNearby:(BOOL)arg3 lowPower:(BOOL)arg4 identifier:(id)arg5 onBehalfOfBundleId:(id)arg6 notifyOnEntry:(BOOL)arg7 notifyOnExit:(BOOL)arg8 conservativeEntry:(BOOL)arg9 emergency:(BOOL)arg10 deviceId:(id)arg11 handoffTag:(id)arg12 ;
-(id)initWithCoder:(id)arg0 ;
-(int)referenceFrame;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setReferenceFrame:(int)arg0 ;


@end


#endif