// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLREGION_H
#define CLREGION_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLRegion : NSObject <NSCopying, NSSecureCoding>



@property (readonly) CLLocationCoordinate2D center; // ivar: _center
@property BOOL conservativeEntry; // ivar: _conservativeEntry
@property (readonly, copy, nonatomic) NSUUID *deviceId; // ivar: _deviceId
@property BOOL emergency; // ivar: _emergency
@property (readonly, copy, nonatomic) NSString *handoffTag; // ivar: _handoffTag
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property BOOL notifyOnEntry; // ivar: _notifyOnEntry
@property BOOL notifyOnExit; // ivar: _notifyOnExit
@property (copy, nonatomic) NSString *onBehalfOfBundleId; // ivar: _onBehalfOfBundleId
@property (readonly) CGFloat radius; // ivar: _radius
@property int referenceFrame; // ivar: _referenceFrame
@property int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)containsCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initCircularRegionWithCenter:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 identifier:(id)arg2 ;
-(id)initWithClientRegion:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 andRegionType:(int)arg1 ;
-(id)initWithIdentifier:(id)arg0 onBehalfOf:(id)arg1 regionType:(int)arg2 notifyOnEntry:(BOOL)arg3 notifyOnExit:(BOOL)arg4 conservativeEntry:(BOOL)arg5 emergency:(BOOL)arg6 ;
-(id)initWithIdentifier:(id)arg0 onBehalfOf:(id)arg1 regionType:(int)arg2 notifyOnEntry:(BOOL)arg3 notifyOnExit:(BOOL)arg4 conservativeEntry:(BOOL)arg5 emergency:(BOOL)arg6 deviceId:(id)arg7 handoffTag:(id)arg8 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif