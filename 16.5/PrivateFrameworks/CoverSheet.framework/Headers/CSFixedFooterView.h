// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFIXEDFOOTERVIEW_H
#define CSFIXEDFOOTERVIEW_H

@class _UILegibilitySettings, SBUILegibilityLabel, SBUICallToActionLabel, UIView<SBUILegibility>, SBFPagedScrollView;


#import "CSCoverSheetViewBase.h"
#import "CSShakableView.h"
#import "CSPageControl.h"

@interface CSFixedFooterView : CSCoverSheetViewBase {
    _UILegibilitySettings *_legibilitySettings;
}


@property (retain, nonatomic) SBUILegibilityLabel *alternateCallToActionLabel; // ivar: _alternateCallToActionLabel
@property (retain, nonatomic) SBUICallToActionLabel *callToActionLabel; // ivar: _callToActionLabel
@property (readonly, nonatomic) CSShakableView *callToActionShakeView; // ivar: _callToActionShakeView
@property (readonly, nonatomic) CSPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) UIView<SBUILegibility> *statusTextView; // ivar: _statusTextView
@property (nonatomic) CGPoint statusTextViewOffset; // ivar: _statusTextViewOffset
@property (nonatomic) CGFloat statusTextViewScale; // ivar: _statusTextViewScale
@property (weak, nonatomic) SBFPagedScrollView *trackingScrollViewForPageControl; // ivar: _trackingScrollViewForPageControl


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentationRegions;
-(void)_addPageControl;
-(void)_addShakeView;
-(void)_layoutCallToActionView;
-(void)_layoutPageControl;
-(void)_layoutStatusTextView;
-(void)_updateViewsForLegibilitySettings;
-(void)layoutSubviews;
-(void)updateForLegibilitySettings:(id)arg0 ;
-(void)updatePageControl;


@end


#endif