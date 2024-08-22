// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CLSIGNIFICANTREGION_H
#define _CLSIGNIFICANTREGION_H



#import "CLCircularRegion.h"

@interface _CLSignificantRegion : CLCircularRegion



+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 onBehalfOfBundleId:(id)arg3 referenceFrame:(int)arg4 ;
-(id)initWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 referenceFrame:(int)arg2 lowPower:(BOOL)arg3 identifier:(id)arg4 onBehalfOfBundleId:(id)arg5 notifyOnEntry:(BOOL)arg6 notifyOnExit:(BOOL)arg7 conservativeEntry:(BOOL)arg8 emergency:(BOOL)arg9 deviceId:(id)arg10 handoffTag:(id)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif