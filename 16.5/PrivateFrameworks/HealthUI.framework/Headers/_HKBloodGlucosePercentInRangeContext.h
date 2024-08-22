// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKBLOODGLUCOSEPERCENTINRANGECONTEXT_H
#define _HKBLOODGLUCOSEPERCENTINRANGECONTEXT_H

@class NSString, NSNumberFormatter;
@protocol HKOverlayContext;

#import <Foundation/Foundation.h>

#import "HKInteractiveChartDisplayType.h"
#import "HKDisplayTypeController.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"
#import "HKUnitPreferenceController.h"

@interface _HKBloodGlucosePercentInRangeContext : NSObject <HKOverlayContext>



@property (readonly, nonatomic) HKInteractiveChartDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (readonly, nonatomic) NSInteger classification; // ivar: _classification
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (readonly, copy, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(CGFloat)_fractionForClassificationFromUserInfo:(id)arg0 ;
-(id)_buildTitleString;
-(id)_fractionRangeFromChartPoints:(id)arg0 ;
-(id)_stringFromFractionRange:(id)arg0 ;
-(id)_stringFromFractionRangeBound:(id)arg0 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithBaseDisplayType:(id)arg0 classification:(NSInteger)arg1 overlayChartController:(id)arg2 unitController:(id)arg3 displayTypeController:(id)arg4 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)_updateContextItemFromChartPoints:(id)arg0 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif