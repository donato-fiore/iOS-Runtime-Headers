// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSUMMARYVIEW_H
#define HUQUICKCONTROLSUMMARYVIEW_H

@class UIView, NSLayoutConstraint, NSMutableArray, UIImage, UIImageView, NSAttributedString, UILabel, NSString, UIVisualEffectView, UIStackView;
@protocol HUBaseIconViewDelegate;


#import "HUBaseIconView.h"
#import "HUIconView.h"

@interface HUQuickControlSummaryView : UIView <HUBaseIconViewDelegate>



@property (retain, nonatomic) HUBaseIconView *baseIconView; // ivar: _baseIconView
@property (retain, nonatomic) NSLayoutConstraint *baseIconViewWidthConstraint; // ivar: _baseIconViewWidthConstraint
@property (retain, nonatomic) NSMutableArray *contentConstraints; // ivar: _contentConstraints
@property (readonly, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSAttributedString *microphoneStatusText; // ivar: _microphoneStatusText
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UIVisualEffectView *secondaryLabelEffectView; // ivar: _secondaryLabelEffectView
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UIStackView *verticalStackView; // ivar: _verticalStackView


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)baseIconViewDidUpdateConfiguration:(id)arg0 ;
-(void)updateConstraints;


@end


#endif