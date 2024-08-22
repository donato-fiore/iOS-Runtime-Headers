// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMTAKERECORDINGVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMTAKERECORDINGVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UIView, HKHeartRhythmAvailability, UILabel, HKElectrocardiogram, HKAnchoredObjectQuery;
@protocol HKHeartRhythmAvailabilityObserver;


#import "HRImageLabel.h"

@interface HROnboardingElectrocardiogramTakeRecordingViewController : HKOnboardingBaseViewController <HKHeartRhythmAvailabilityObserver>



@property (retain, nonatomic) UIView *assetView; // ivar: _assetView
@property (retain, nonatomic) HKHeartRhythmAvailability *availability; // ivar: _availability
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (nonatomic) BOOL didStepForward; // ivar: _didStepForward
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram; // ivar: _electrocardiogram
@property (nonatomic) BOOL electrocardiogramFirstRecordingCompleted; // ivar: _electrocardiogramFirstRecordingCompleted
@property (retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery; // ivar: _electrocardiogramQuery
@property (retain, nonatomic) HRImageLabel *recordingStep1ImageLabel; // ivar: _recordingStep1ImageLabel
@property (retain, nonatomic) HRImageLabel *recordingStep2ImageLabel; // ivar: _recordingStep2ImageLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *wristSettingsLabel; // ivar: _wristSettingsLabel


-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_recordingStepFont;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)_titleForOnboarding:(BOOL)arg0 ;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(struct CGSize )_takeRecordingImageDimension;
-(void)_setUpElectrocardiogramQuery;
-(void)_stepForwardWithElectrocardiogramRecorded:(BOOL)arg0 ;
-(void)_stopElectrocardiogramQuery;
-(void)heartRhythmAvailabilityDidUpdate;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)skipButtonTapped:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif