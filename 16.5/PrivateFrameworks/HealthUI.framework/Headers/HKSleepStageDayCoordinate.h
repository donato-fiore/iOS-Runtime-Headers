// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGEDAYCOORDINATE_H
#define HKSLEEPSTAGEDAYCOORDINATE_H

@class NSString;
@protocol HKGraphSeriesBlockCoordinate, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKSleepStageDayCoordinate : NSObject <HKGraphSeriesBlockCoordinate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endXValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger sleepStage; // ivar: _sleepStage
@property (readonly, nonatomic) CGFloat startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) CGFloat xValueEnd; // ivar: _xValueEnd
@property (readonly, nonatomic) CGFloat xValueStart; // ivar: _xValueStart


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithXValueStart:(CGFloat)arg0 xValueEnd:(CGFloat)arg1 sleepStage:(NSInteger)arg2 userInfo:(id)arg3 ;


@end


#endif