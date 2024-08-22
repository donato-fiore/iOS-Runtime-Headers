// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKACTIVITYGOALSERIESBLOCKCOORDINATE_H
#define _HKACTIVITYGOALSERIESBLOCKCOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface _HKActivityGoalSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

 {
    id<HKGraphSeriesBlockCoordinateInfo> *_userInfo;
}


@property (readonly, nonatomic) CGPoint coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo;


-(CGFloat)maxYValue;
-(CGFloat)minYValue;
-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithCoordinate:(struct CGPoint )arg0 userInfo:(id)arg1 ;


@end


#endif