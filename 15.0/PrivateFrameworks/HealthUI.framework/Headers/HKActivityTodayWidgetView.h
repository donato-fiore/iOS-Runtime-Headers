// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKACTIVITYTODAYWIDGETVIEW_H
#define HKACTIVITYTODAYWIDGETVIEW_H

@class UIView, HKActivityRingView, HKActivitySummary, HKUnit, UIImageView, UILabel, UIFont, UILayoutGuide, NSMutableArray;



@interface HKActivityTodayWidgetView : UIView {
    HKActivityRingView *_ringView;
    HKActivitySummary *_activitySummary;
    HKUnit *_activeEnergyUnit;
    HKUnit *_basalEnergyUnit;
    UIImageView *_ringViewSnapshot;
    UILabel *_moveTitleLabel;
    UILabel *_moveValueLabel;
    UILabel *_exerciseTitleLabel;
    UILabel *_exerciseValueLabel;
    UILabel *_standTitleLabel;
    UILabel *_standValueLabel;
    UIFont *_smallCapsValueFont;
    UIView *_textContainerView;
    UILayoutGuide *_labelsTopLayoutGuide;
    UILayoutGuide *_labelsBottomLayoutGuide;
}


@property (retain, nonatomic) NSMutableArray *sizeDepedentConstraints; // ivar: _sizeDepedentConstraints


+(CGFloat)preferredHeight;
+(id)_integerFormatter;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 activeEnergyUnit:(id)arg1 basalEnergyUnit:(id)arg2 ;
-(void)_animateCurrentActivitySummary;
-(void)_constrainLabels;
-(void)_renderRingImage;
-(void)_textSizeDidUpdate:(id)arg0 ;
-(void)_updateForCurrentSizeCategoryAndSystemLanguage;
-(void)_updateMoveValueLabelWithSummary:(id)arg0 ;
-(void)_updateStandTitleLabelWithSummary:(id)arg0 ;
-(void)dealloc;
-(void)setActiveEnergyUnit:(id)arg0 basalEnergyUnit:(id)arg1 ;
-(void)setActivitySummary:(id)arg0 animated:(BOOL)arg1 ;
-(void)setIsWheelchairUser:(BOOL)arg0 ;
-(void)setupExerciseLabelsWithTitleFont:(id)arg0 valueFont:(id)arg1 ;
-(void)setupMoveLabelsWithTitleFont:(id)arg0 valueFont:(id)arg1 ;
-(void)setupRingViews;
-(void)setupStandLabelsWithTitleFont:(id)arg0 valueFont:(id)arg1 ;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTextWithNewActivitySummary:(id)arg0 ;


@end


#endif