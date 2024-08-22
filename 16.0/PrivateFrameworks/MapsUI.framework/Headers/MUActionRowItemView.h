// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUACTIONROWITEMVIEW_H
#define MUACTIONROWITEMVIEW_H

@class UIButton, UILabel, UIImageView, MKVibrantView, UIView, UIColor, NSString;
@protocol MUActionRowItemViewDelegate;


#import "MUEdgeLayout.h"
#import "MUStackLayout.h"

@interface MUActionRowItemView : UIButton {
    UILabel *_label;
    UIImageView *_glyphImageView;
    MKVibrantView *_vibrantView;
    UIView *_backgroundView;
    MUEdgeLayout *_edgeLayout;
    MUStackLayout *_iconLabelStackLayout;
}


@property (retain, nonatomic) UIColor *contentBackgroundColor; // ivar: _contentBackgroundColor
@property (weak, nonatomic) NSObject<MUActionRowItemViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fullWidthMode; // ivar: _fullWidthMode
@property (retain, nonatomic) UIColor *glyphColor;
@property (copy, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (nonatomic) BOOL hovering; // ivar: _hovering
@property (nonatomic) BOOL showSelectedState; // ivar: _showSelectedState
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL touched; // ivar: _touched
@property (readonly, nonatomic) BOOL useVibrancy; // ivar: _useVibrancy


+(id)glyphFont;
+(id)labelFont;
-(id)accessibilityLabel;
-(id)initWithStyle:(NSInteger)arg0 useVibrancy:(BOOL)arg1 ;
-(void)_applyBorderIfNeeded;
-(void)_contentSizeDidChange;
-(void)_touchBegan;
-(void)_touchCancelled;
-(void)_touchEnded;
-(void)_updateMetrics;
-(void)didMoveToWindow;
-(void)handleHoverGesture:(id)arg0 ;
-(void)handleMenuPresentation;
-(void)handlePress;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;
-(void)setAccessibilityLabel:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setMenu:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateColor;
-(void)updateImage;


@end


#endif