// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRFEATUREREGULATORYPANELVIEWCONTROLLER_H
#define HRFEATUREREGULATORYPANELVIEWCONTROLLER_H

@class HKTableViewController, NSString, UIViewController<HRFeatureRegulatoryReenableFeatureActionDelegate>, NSArray, HKHealthStore, HKHeartRhythmAvailability, UINavigationController;
@protocol HKHeartRhythmAvailabilityObserver, HRFeatureRegulatoryReenableFeatureActionDelegate;



@interface HRFeatureRegulatoryPanelViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HRFeatureRegulatoryReenableFeatureActionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<HRFeatureRegulatoryReenableFeatureActionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayableItems; // ivar: _displayableItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // ivar: _heartRhythmAvailability
@property (nonatomic) BOOL isAtrialFibrillationDetectionOnboarded; // ivar: _isAtrialFibrillationDetectionOnboarded
@property (nonatomic) BOOL isElectrocardiogramRecordingOnboarded; // ivar: _isElectrocardiogramRecordingOnboarded
@property (retain, nonatomic) UINavigationController *onboardingNavigationController; // ivar: _onboardingNavigationController
@property (readonly) Class superclass;


+(BOOL)shouldUseOldVersioningFormat;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)didSelectReenableFeatureForProductName:(id)arg0 ;
-(void)protectedDataDidBecomeAvailable:(id)arg0 ;
-(void)receivedHeartRhythmAvailabilityNotification;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif