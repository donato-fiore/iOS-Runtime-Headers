// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKRELATIVELINESERIESBLOCKCOORDINATE_H
#define _HKRELATIVELINESERIESBLOCKCOORDINATE_H

@class HKLineSeriesBlockCoordinate;



@interface _HKRelativeLineSeriesBlockCoordinate : HKLineSeriesBlockCoordinate

@property (readonly, nonatomic) CGPoint end; // ivar: _end
@property (readonly, nonatomic) CGPoint midpoint;
@property (readonly, nonatomic) CGPoint start; // ivar: _start


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)description;
-(id)initWithStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 userInfo:(id)arg2 ;


@end


#endif