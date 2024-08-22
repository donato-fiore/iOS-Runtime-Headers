// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATAMETADATAOXYGENSATURATIONSECTION_H
#define HKDATAMETADATAOXYGENSATURATIONSECTION_H

@class HKSample, HKHealthStore, HKQuantitySample, NSString;
@protocol HKDataMetadataViewControllerDelegate, HKDataMetadataSubsampleDelegate;


#import "HKDataMetadataSection.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"
#import "HKDataMetadataSimpleTableViewCell.h"

@interface HKDataMetadataOxygenSaturationSection : HKDataMetadataSection <HKDataMetadataViewControllerDelegate>

 {
    HKSample *_sample;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id<HKDataMetadataSubsampleDelegate> *_subsampleDelegate;
    HKDataMetadataSimpleTableViewCell *_cell;
    HKQuantitySample *_heartRateSample;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) Class superclass;


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)displayNameForSampleType:(id)arg0 displayTypeController:(id)arg1 ;
-(id)displayTypeController;
-(id)formattedHeartRateFromSample:(id)arg0 ;
-(id)heartRateFromSample:(id)arg0 ;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4 ;
-(id)sectionTitle;
-(id)unitController;
-(void)queryForData;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif