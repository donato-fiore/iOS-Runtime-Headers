// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMSTACKEDCONTEXT_H
#define HKOVERLAYROOMSTACKEDCONTEXT_H

@class NSCalendar, NSString, HKSampleType;
@protocol HKOverlayContext, HKOverlayStackedContext;

#import <Foundation/Foundation.h>

#import "HKOverlayRoomApplicationItems.h"
#import "HKInteractiveChartDisplayType.h"
#import "HKDisplayTypeContextItem.h"
#import "HKDisplayType.h"

@interface HKOverlayRoomStackedContext : NSObject <HKOverlayContext, HKOverlayStackedContext>



@property (readonly, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // ivar: _applicationItems
@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (nonatomic) NSInteger currentTimeScope; // ivar: _currentTimeScope
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // ivar: _lastUpdatedItem
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (readonly, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (readonly, nonatomic) HKInteractiveChartDisplayType *stackedBaseDisplayType; // ivar: _stackedBaseDisplayType
@property (readonly, nonatomic) HKSampleType *stackedSampleType; // ivar: _stackedSampleType
@property (retain, nonatomic) HKDisplayType *stackedTemplateDisplayType; // ivar: _stackedTemplateDisplayType
@property (readonly) Class superclass;
@property (retain, nonatomic) HKDisplayType *templateDisplayType; // ivar: _templateDisplayType


+(id)generateCustomSeriesWithTemplateDisplayType:(id)arg0 sampleType:(id)arg1 applicationItems:(id)arg2 currentTimeScope:(NSInteger)arg3 ;
-(BOOL)_obsoleteDateRange:(id)arg0 overlayController:(id)arg1 ;
-(BOOL)canSelectOverlayContextItem:(id)arg0 isDeselecting:(BOOL)arg1 timeScope:(NSInteger)arg2 chartController:(id)arg3 ;
-(id)_canonicalUnitOverrideForDisplayType:(id)arg0 ;
-(id)_contextItemTitleForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_generateDisplayTypeForTemplateDisplayType:(id)arg0 sampleType:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 currentTimeScope:(NSInteger)arg4 currentCalendar:(id)arg5 ;
-(id)_generateNamedDataSourceForTemplateDisplayType:(id)arg0 overlayChartController:(id)arg1 applicationItems:(id)arg2 currentTimeScope:(NSInteger)arg3 currentCalendar:(id)arg4 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)buildContextItemWithValue:(id)arg0 unit:(id)arg1 valueContext:(id)arg2 forTimeScope:(NSInteger)arg3 ;
-(id)contextItemForLastUpdate;
-(id)initWithDisplayType:(id)arg0 overlayDisplayType:(id)arg1 stackedDisplayType:(id)arg2 overlayChartController:(id)arg3 currentCalendarOverride:(id)arg4 applicationItems:(id)arg5 ;
-(id)initWithDisplayType:(id)arg0 overlayDisplayType:(id)arg1 stackedSampleType:(id)arg2 overlayChartController:(id)arg3 currentCalendarOverride:(id)arg4 applicationItems:(id)arg5 ;
-(id)initWithDisplayType:(id)arg0 templateDisplayType:(id)arg1 sampleType:(id)arg2 overlayDisplayType:(id)arg3 stackedDisplayType:(id)arg4 stackedTemplateDisplayType:(id)arg5 stackedSampleType:(id)arg6 overlayChartController:(id)arg7 currentTimeScope:(NSInteger)arg8 currentCalendar:(id)arg9 applicationItems:(id)arg10 ;
-(id)initWithSampleType:(id)arg0 overlayDisplayType:(id)arg1 stackedSampleType:(id)arg2 overlayChartController:(id)arg3 currentCalendarOverride:(id)arg4 applicationItems:(id)arg5 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)stackedBaseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)stackedOverlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif