// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHSERIESVISIBLEBLOCKCOORDINATES_H
#define HKGRAPHSERIESVISIBLEBLOCKCOORDINATES_H

@protocol HKGraphSeriesBlockCoordinate;

#import <Foundation/Foundation.h>


@interface HKGraphSeriesVisibleBlockCoordinates : NSObject

@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinate> *last; // ivar: _last
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinate> *maximum; // ivar: _maximum
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinate> *minimum; // ivar: _minimum


-(id)initWithMinimum:(id)arg0 maximum:(id)arg1 last:(id)arg2 ;


@end


#endif