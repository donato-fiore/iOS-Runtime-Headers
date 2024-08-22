// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTHEARINGSENSITIVITYDATA_H
#define HKINTERACTIVECHARTHEARINGSENSITIVITYDATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAverage; // ivar: _isAverage
@property (nonatomic) BOOL isLeftEar; // ivar: _isLeftEar
@property (nonatomic) CGFloat sensitivityDbHL; // ivar: _sensitivityDbHL
@property (readonly) Class superclass;




@end


#endif