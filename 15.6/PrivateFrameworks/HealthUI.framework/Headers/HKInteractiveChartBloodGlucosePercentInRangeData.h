// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTBLOODGLUCOSEPERCENTINRANGEDATA_H
#define HKINTERACTIVECHARTBLOODGLUCOSEPERCENTINRANGEDATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartBloodGlucosePercentInRangeData : NSObject <HKGraphSeriesChartData>



@property (nonatomic) NSInteger countInEuglycemia; // ivar: _countInEuglycemia
@property (nonatomic) NSInteger countInHyperglycemia; // ivar: _countInHyperglycemia
@property (nonatomic) NSInteger countInLevel1Hypoglycemia; // ivar: _countInLevel1Hypoglycemia
@property (nonatomic) NSInteger countInLevel2Hypoglycemia; // ivar: _countInLevel2Hypoglycemia
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)fractionForClassification:(NSInteger)arg0 ;
-(NSInteger)countForClassification:(NSInteger)arg0 ;
-(NSInteger)totalCount;


@end


#endif