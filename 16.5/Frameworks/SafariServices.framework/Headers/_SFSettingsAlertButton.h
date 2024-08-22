// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSETTINGSALERTBUTTON_H
#define _SFSETTINGSALERTBUTTON_H

@class SFSettingsAlertControl, NSArray, UILabel, UILayoutGuide, UIView, NSString, NSAttributedString, UIImage, UIImageView;
@protocol _SFSettingsAlertOptionsGroupItemConfiguration;



@interface _SFSettingsAlertButton : SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration>

 {
    NSArray *_contentConstraints;
    NSArray *_componentsArrangement;
    UILabel *_detailTextLabel;
    UILayoutGuide *_textGuide;
    UIView *_dotView;
    BOOL _selected;
    NSString *_text;
    NSString *_detailText;
    NSAttributedString *_attributedDetailText;
    UIImage *_image;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL limitToSingleLine; // ivar: _limitToSingleLine
@property (nonatomic) BOOL showsIndicatorDot; // ivar: _showsIndicatorDot
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (copy, nonatomic) NSString *textStyle; // ivar: _textStyle
@property (readonly, nonatomic) UIView *trailingView;


-(BOOL)canBecomeFocused;
-(BOOL)isSelected;
-(id)_arrangedSubviews;
-(id)attributedDetailText;
-(id)detailText;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)image;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(void)_didChangeContents;
-(void)_hover:(id)arg0 ;
-(void)_updateHasDetailText;
-(void)_updateTintColor;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)setAttributedDetailText:(id)arg0 ;
-(void)setDetailText:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif