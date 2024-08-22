// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDCAMERACELL_H
#define HUGRIDCAMERACELL_H

@class HFItem, NSArray, UIView, NADecayingTimer, UIImage, UIImageView, _UILegibilitySettings, UILabel;


#import "HUGridCell.h"
#import "HUCameraView.h"
#import "HULegibilityLabel.h"
#import "HUVisualEffectContainerView.h"
#import "HUGridCameraCellLayoutOptions.h"

@interface HUGridCameraCell : HUGridCell {
    HFItem *_item;
}


@property (retain, nonatomic) NSArray *allConstraints; // ivar: _allConstraints
@property (readonly, nonatomic) UIView *cameraContentView;
@property (retain, nonatomic) HUCameraView *cameraView; // ivar: _cameraView
@property (nonatomic) CGFloat cameraViewAlpha;
@property (retain, nonatomic) HULegibilityLabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NADecayingTimer *descriptionLabelUpdateTimer; // ivar: _descriptionLabelUpdateTimer
@property (readonly, nonatomic) UIImage *exclamationImage; // ivar: _exclamationImage
@property (readonly, nonatomic) UIImageView *exclamationImageView; // ivar: _exclamationImageView
@property (readonly, nonatomic) HUVisualEffectContainerView *exclamationView; // ivar: _exclamationView
@property (retain, nonatomic) NSArray *labelsConstraints; // ivar: _labelsConstraints
@property (retain, nonatomic) HUGridCameraCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIImageView *recordingIndicatorImageView; // ivar: _recordingIndicatorImageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *topBarView; // ivar: _topBarView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)shouldDisplayAccessModeErrorContent;
-(BOOL)shouldDisplayErrorContent;
-(id)_descriptionLabelText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)item;
-(void)_animateTransitionWithView:(id)arg0 animations:(id)arg1 ;
-(void)_handleShouldDifferentiateWithoutColorDidChange;
-(void)_populateExclamationImageIfNeeded;
-(void)_updateCameraViewAppearance;
-(void)_updateRecordIndicatorColor;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setItem:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif