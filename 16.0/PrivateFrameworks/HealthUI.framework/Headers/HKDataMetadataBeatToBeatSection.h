// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATAMETADATABEATTOBEATSECTION_H
#define HKDATAMETADATABEATTOBEATSECTION_H

@class HKSample, HKHealthStore;


#import "HKDataMetadataSection.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKDataMetadataBeatToBeatSection : HKDataMetadataSection {
    HKSample *_sample;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}




-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif