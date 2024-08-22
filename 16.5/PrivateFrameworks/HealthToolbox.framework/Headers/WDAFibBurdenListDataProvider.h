// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDAFIBBURDENLISTDATAPROVIDER_H
#define WDAFIBBURDENLISTDATAPROVIDER_H

@class HKCalendarCache;
@protocol HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider;


#import "WDQuantityListDataProvider.h"

@interface WDAFibBurdenListDataProvider : WDQuantityListDataProvider <HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider>

 {
    HKCalendarCache *_calendarCache;
}




-(id)_generateFeatureVersionFromUpdateVersion:(id)arg0 ;
-(id)_timeZoneForSample:(id)arg0 ;
-(id)featureVersionForSample:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)updateVersionForSample:(id)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;


@end


#endif