// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKBLOODPRESSURECOORDINATE_H
#define _HKBLOODPRESSURECOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>

#import "HKMinMaxCoordinate.h"

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

 {
    id<HKGraphSeriesBlockCoordinateInfo> *_userInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKMinMaxCoordinate *diastolicCoordinate; // ivar: _diastolicCoordinate
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKMinMaxCoordinate *systolicCoordinate; // ivar: _systolicCoordinate
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo;


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithSystolicCoordinate:(id)arg0 diastolicCoordinate:(id)arg1 userInfo:(id)arg2 ;


@end


#endif