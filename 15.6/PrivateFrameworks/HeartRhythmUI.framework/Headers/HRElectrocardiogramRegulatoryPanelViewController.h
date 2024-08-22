// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRELECTROCARDIOGRAMREGULATORYPANELVIEWCONTROLLER_H
#define HRELECTROCARDIOGRAMREGULATORYPANELVIEWCONTROLLER_H

@class NSArray;


#import "HRFeatureRegulatoryPanelViewController.h"

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController {
    NSArray *_displayableItems;
}


@property (nonatomic) NSInteger reenableFeatureSection; // ivar: _reenableFeatureSection


-(BOOL)_shouldDisplayItemsForWatch;
-(id)_displayableItemsForContactSupport;
-(id)_displayableItemsForFeatureName;
-(id)_displayableItemsForInstructionManual;
-(id)_displayableItemsForPhone;
-(id)_displayableItemsForReenableFeature;
-(id)_displayableItemsForWatch;
-(id)displayableItems;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)receivedHeartRhythmAvailabilityNotification;
-(void)viewDidLoad;


@end


#endif