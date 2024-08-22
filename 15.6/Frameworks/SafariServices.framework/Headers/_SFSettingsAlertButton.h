// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSETTINGSALERTBUTTON_H
#define _SFSETTINGSALERTBUTTON_H

@class SFSettingsAlertControl, NSString, NSAttributedString, NSArray, UILabel, UILayoutGuide, UIView, UIImage, UIImageView;
@protocol _SFSettingsAlertOptionsGroupItemConfiguration;



@interface _SFSettingsAlertButton : SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration>

 {
    NSString *_text;
    NSAttributedString *_attributedText;
    NSArray *_contentConstraints;
    NSArray *_componentsArrangement;
    UILabel *_detailTextLabel;
    UILayoutGuide *_textGuide;
    UIView *_dotView;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL limitToSingleLine; // ivar: _limitToSingleLine
@property (nonatomic) BOOL showsIndicatorDot; // ivar: _showsIndicatorDot
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (copy, nonatomic) NSString *textStyle; // ivar: _textStyle
@property (readonly, nonatomic) UIView *trailingView;


-(BOOL)canBecomeFocused;
-(id)_arrangedSubviews;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didChangeContents;
-(void)_hover:(id)arg0 ;
-(void)_updateTintColor;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif