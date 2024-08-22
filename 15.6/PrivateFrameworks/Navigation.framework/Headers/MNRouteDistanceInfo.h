// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNROUTEDISTANCEINFO_H
#define MNROUTEDISTANCEINFO_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNRouteDistanceInfo : NSObject <NSSecureCoding>

 {
    NSUInteger _legIndex;
    NSUUID *_routeID;
}


@property (readonly, nonatomic) CGFloat distanceRemainingToEndOfLeg; // ivar: _distanceRemainingToEndOfLeg
@property (readonly, nonatomic) CGFloat distanceRemainingToEndOfRoute; // ivar: _distanceRemainingToEndOfRoute


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistanceRemainingToEndOfLeg:(CGFloat)arg0 distanceRemainingToEndOfRoute:(CGFloat)arg1 forLegIndex:(NSUInteger)arg2 forRouteID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif