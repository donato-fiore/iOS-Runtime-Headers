// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMOSAICCAMERACELL_H
#define HUMOSAICCAMERACELL_H

@class HFItem, NSArray, UIView, UIImageView, NADecayingTimer;


#import "HUGridCell.h"
#import "HUGridCellLayoutOptions.h"
#import "HULegibilityLabel.h"
#import "HUCameraView.h"

@interface HUMosaicCameraCell : HUGridCell {
    HFItem *_item;
    HUGridCellLayoutOptions *_layoutOptions;
}


@property (retain, nonatomic) NSArray *allConstraints; // ivar: _allConstraints
@property (readonly, nonatomic) UIView *cameraContentView;
@property (retain, nonatomic) HULegibilityLabel *cameraNameLabel; // ivar: _cameraNameLabel
@property (retain, nonatomic) HUCameraView *cameraView; // ivar: _cameraView
@property (nonatomic) CGFloat cameraViewAlpha;
@property (nonatomic) CGFloat currentCornerRadius; // ivar: _currentCornerRadius
@property (nonatomic) CGSize currentSize; // ivar: _currentSize
@property (nonatomic) BOOL isSingleCell; // ivar: _isSingleCell
@property (retain, nonatomic) NSArray *legibilityLabelConstraints; // ivar: _legibilityLabelConstraints
@property (retain, nonatomic) UIImageView *recordingIndicatorImageView; // ivar: _recordingIndicatorImageView
@property (retain, nonatomic) HULegibilityLabel *timingLabel; // ivar: _timingLabel
@property (retain, nonatomic) NADecayingTimer *timingLabelUpdateTimer; // ivar: _timingLabelUpdateTimer


+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
+(id)legibilityLabel;
-(BOOL)shouldDisplayAccessModeErrorContent;
-(BOOL)shouldDisplayErrorContent;
-(id)_timingLabelText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)item;
-(id)layoutOptions;
-(void)_animateTransitionWithView:(id)arg0 animations:(id)arg1 ;
-(void)_handleShouldDifferentiateWithoutColorDidChange;
-(void)_setupCommonCellAppearance;
-(void)_updateCornerRadiusIfNeeded;
-(void)_updateRecordIndicatorColor;
-(void)_updateUIForSizeChange;
-(void)_updateViewCorners:(CGFloat)arg0 ;
-(void)createLegibilityLabelsIfNecessary;
-(void)dealloc;
-(void)layoutOptionsDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setItem:(id)arg0 ;
-(void)setLayoutOptions:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif