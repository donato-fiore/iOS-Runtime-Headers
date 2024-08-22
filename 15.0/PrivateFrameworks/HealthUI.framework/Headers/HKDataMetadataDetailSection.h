// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATAMETADATADETAILSECTION_H
#define HKDATAMETADATADETAILSECTION_H

@class HKCalendarCache;
@protocol HKDataMetadataDetailSectionDataReceiver, HKDataMetadataObject;


#import "HKDataMetadataSimpleSection.h"
#import "HKDataMetadataDataSource.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver>

 {
    HKDataMetadataDataSource *_metadataDataSource;
}


@property (readonly, nonatomic) HKCalendarCache *calendarCache; // ivar: _calendarCache
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) NSObject<HKDataMetadataObject> *object; // ivar: _object
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(id)initWithSample:(id)arg0 displayTypeController:(id)arg1 unitController:(id)arg2 ;
-(id)initWithWorkoutEvent:(id)arg0 ;
-(void)_loadMetadataValues;


@end


#endif