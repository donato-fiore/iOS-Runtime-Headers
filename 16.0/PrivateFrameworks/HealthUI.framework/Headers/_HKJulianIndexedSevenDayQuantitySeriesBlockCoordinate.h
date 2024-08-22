// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKJULIANINDEXEDSEVENDAYQUANTITYSERIESBLOCKCOORDINATE_H
#define _HKJULIANINDEXEDSEVENDAYQUANTITYSERIESBLOCKCOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface _HKJulianIndexedSevenDayQuantitySeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGPoint end; // ivar: _end
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint start; // ivar: _start
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 userInfo:(id)arg2 ;


@end


#endif