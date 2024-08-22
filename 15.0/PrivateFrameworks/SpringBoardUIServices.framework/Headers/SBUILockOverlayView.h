// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUILOCKOVERLAYVIEW_H
#define SBUILOCKOVERLAYVIEW_H

@class SBFTouchPassThroughView, UIButton, _UILegibilitySettings, UILabel;
@protocol SBUILockOverlayViewDelegate;


#import "UIResizableView.h"
#import "SBLockOverlayStylePropertiesFactory.h"

@interface SBUILockOverlayView : SBFTouchPassThroughView {
    UIResizableView *_textContainerView;
}


@property (readonly, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (weak, nonatomic) NSObject<SBUILockOverlayViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory; // ivar: _underlayPropertiesFactory


-(CGFloat)_maxLabelWidth;
-(NSUInteger)_numberOfLinesForText:(id)arg0 font:(id)arg1 size:(struct CGSize )arg2 ;
-(id)_actionFont;
-(id)_legibilitySettingsForStyle:(NSUInteger)arg0 ;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 ;
-(void)_buttonPressed;
-(void)_sizeView:(id)arg0 forFixedWith:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif