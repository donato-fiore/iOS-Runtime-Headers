// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRELECTROCARDIOGRAMREGULATORYPANELVIEWCONTROLLER_H
#define HRELECTROCARDIOGRAMREGULATORYPANELVIEWCONTROLLER_H

@class NSArray, HKFeatureAvailabilityStore, HKFeatureStatusManager, HKPairedFeatureAttributes, NSString;
@protocol HKFeatureStatusProvidingObserver;


#import "HRFeatureRegulatoryPanelViewController.h"

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController <HKFeatureStatusProvidingObserver>

 {
    NSArray *_displayableItems;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
    HKFeatureStatusManager *_featureStatusManager;
    HKPairedFeatureAttributes *_pairedFeatureAttributes;
    BOOL _isElectrocardiogramRecordingOnboarded;
    BOOL _isElectrocardiogramRecordingRemoteDisabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger reenableFeatureSection; // ivar: _reenableFeatureSection
@property (readonly) Class superclass;


-(BOOL)_shouldDisplayItemsForWatch;
-(id)_displayableItemsForContactSupport;
-(id)_displayableItemsForFeatureName;
-(id)_displayableItemsForInstructionManual;
-(id)_displayableItemsForPhone;
-(id)_displayableItemsForReenableFeature;
-(id)_displayableItemsForWatch;
-(id)displayableItems;
-(id)initWithHealthStore:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;
-(void)updateElectrocardiogramStatusWithFeatureStatus:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif