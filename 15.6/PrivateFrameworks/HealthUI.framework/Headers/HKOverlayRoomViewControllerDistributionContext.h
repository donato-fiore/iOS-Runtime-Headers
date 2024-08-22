// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOVERLAYROOMVIEWCONTROLLERDISTRIBUTIONCONTEXT_H
#define HKOVERLAYROOMVIEWCONTROLLERDISTRIBUTIONCONTEXT_H

@class NSDictionary;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;


#import "HKOverlayRoomViewControllerIntegratedContext.h"
#import "HKInteractiveChartOverlayPredicate.h"

@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext

@property (nonatomic) NSInteger distributionStyle; // ivar: _distributionStyle
@property (retain, nonatomic) HKInteractiveChartOverlayPredicate *namedPredicate; // ivar: _namedPredicate
@property (weak, nonatomic) NSObject<HKOverlayRoomViewControllerIntegratedContextDelegate> *optionalDelegate; // ivar: _optionalDelegate
@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) NSDictionary *styleToMetricColors; // ivar: _styleToMetricColors


-(BOOL)isEqual:(id)arg0 ;
-(id)_computeTitleFromStyleAndPredicate;
-(id)_representativeDisplayTypeForStyle:(NSInteger)arg0 ;
-(id)_selectedMetricColorsForDistributionStyle:(NSInteger)arg0 ;
-(id)buildContextItemWithValue:(id)arg0 unit:(id)arg1 valueContext:(id)arg2 forTimeScope:(NSInteger)arg3 ;
-(id)buildOverlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 namedPredicate:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 options:(NSInteger)arg5 mode:(NSInteger)arg6 ;
-(id)representativeDisplayType;
-(id)unitString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)valueString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(void)fetchCachedDataForTimeScope:(NSInteger)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;


@end


#endif