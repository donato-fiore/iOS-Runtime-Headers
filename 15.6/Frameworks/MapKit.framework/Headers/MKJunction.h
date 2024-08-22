// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKJUNCTION_H
#define MKJUNCTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MKJunction : NSObject <NSSecureCoding>

 {
    *GEOJunctionElement _elements;
    NSUInteger _count;
    int _maneuver;
    int _drivingSide;
    ? _snapped;
}


@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJunction:(id)arg0 ;
-(id)initWithType:(int)arg0 maneuver:(int)arg1 drivingSide:(int)arg2 elements:(struct GEOJunctionElement *)arg3 count:(NSUInteger)arg4 ;
-(id)roundaboutArrowWithSize:(struct CGSize )arg0 metrics:(struct ? )arg1 outerRadius:(CGFloat)arg2 endAngle:(CGFloat)arg3 pivot:(struct CGPoint *)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getArrowPath:(*id)arg0 arrowStrokePath:(*id)arg1 intersectionBackgroundPath:(*id)arg2 strokePath:(*id)arg3 withSize:(struct CGSize )arg4 metrics:(struct ? )arg5 drivingSide:(int)arg6 visualCenter:(struct CGPoint *)arg7 ;
-(void)getArrowPath:(*id)arg0 arrowStrokePath:(*id)arg1 pivot:(struct CGPoint *)arg2 withSize:(struct CGSize )arg3 metrics:(struct ? )arg4 visualCenter:(struct CGPoint *)arg5 ;
-(void)getRoundaboutArrowPath:(*id)arg0 intersectionBackgroundPath:(*id)arg1 strokePath:(*id)arg2 withSize:(struct CGSize )arg3 metrics:(struct ? )arg4 drivingSide:(int)arg5 visualCenter:(struct CGPoint *)arg6 ;


@end


#endif