// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDevicePresencePreset:(NSInteger)arg0 ;


@end


#endif