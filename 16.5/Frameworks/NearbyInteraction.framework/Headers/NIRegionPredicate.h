// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NIREGIONPREDICATE_H
#define NIREGIONPREDICATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _devicePresencePreset;
}


@property (readonly) NSString *name; // ivar: _name
@property NSInteger preferredUpdateRate; // ivar: _preferredUpdateRate
@property (readonly) float radius; // ivar: _radius
@property NSInteger regionSizeCategory; // ivar: _regionSizeCategory
@property BOOL requiresUserIntent; // ivar: _requiresUserIntent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)devicePresencePreset;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 devicePresencePreset:(NSInteger)arg1 ;
-(id)initWithName:(id)arg0 radius:(float)arg1 ;
-(id)initWithName:(id)arg0 radius:(float)arg1 preferredUpdateRate:(NSInteger)arg2 ;
-(id)initWithName:(id)arg0 radius:(float)arg1 preferredUpdateRate:(NSInteger)arg2 requiresUserIntent:(BOOL)arg3 ;
-(id)initWithName:(id)arg0 radius:(float)arg1 preferredUpdateRate:(NSInteger)arg2 requiresUserIntent:(BOOL)arg3 devicePresencePreset:(NSInteger)arg4 ;
-(id)initWithName:(id)arg0 regionSizeCategory:(NSInteger)arg1 radius:(float)arg2 preferredUpdateRate:(NSInteger)arg3 requiresUserIntent:(BOOL)arg4 ;
-(id)initWithName:(id)arg0 regionSizeCategory:(NSInteger)arg1 radius:(float)arg2 preferredUpdateRate:(NSInteger)arg3 requiresUserIntent:(BOOL)arg4 devicePresencePreset:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDevicePresencePreset:(NSInteger)arg0 ;


@end


#endif