// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKHORIZONTALSINGLELINESERIESCOORDINATE_H
#define _HKHORIZONTALSINGLELINESERIESCOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly, nonatomic) BOOL groupToPrevious; // ivar: _groupToPrevious
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger markStyle; // ivar: _markStyle
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) CGFloat xValue; // ivar: _xValue
@property (readonly, nonatomic) NSInteger yValue; // ivar: _yValue


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithXValue:(CGFloat)arg0 yValue:(NSInteger)arg1 groupToPrevious:(BOOL)arg2 markStyle:(NSInteger)arg3 userInfo:(id)arg4 ;


@end


#endif