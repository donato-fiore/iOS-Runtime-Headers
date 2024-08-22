// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIAUDIOGRAMCONFIRMRESULTSVIEWCONTROLLER_H
#define AIAUDIOGRAMCONFIRMRESULTSVIEWCONTROLLER_H

@class OBWelcomeController, HKAudiogramSample, HKHealthStore, HKUnitPreferenceController;
@protocol AIAudiogramConfirmResultsViewControllerDelegate;



@interface AIAudiogramConfirmResultsViewController : OBWelcomeController

@property (nonatomic) NSUInteger analyticsClient; // ivar: _analyticsClient
@property (nonatomic) BOOL analyticsDidCompleteIngestion; // ivar: _analyticsDidCompleteIngestion
@property (nonatomic) BOOL analyticsDidMakeAdjustments; // ivar: _analyticsDidMakeAdjustments
@property (nonatomic) NSUInteger analyticsImportSource; // ivar: _analyticsImportSource
@property (retain, nonatomic) HKAudiogramSample *audiogram; // ivar: _audiogram
@property (weak, nonatomic) NSObject<AIAudiogramConfirmResultsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(id)initWithDelegate:(id)arg0 audiogram:(id)arg1 ;
-(void)_saveToHealth:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif