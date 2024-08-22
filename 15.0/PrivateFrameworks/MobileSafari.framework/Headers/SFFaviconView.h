// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFFAVICONVIEW_H
#define SFFAVICONVIEW_H

@class UIView, UIImageView, UIImage, UIImageSymbolConfiguration, UIColor;



@interface SFFaviconView : UIView {
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) NSInteger iconContentMode;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIColor *themeColor; // ivar: _themeColor
@property (readonly, nonatomic) CGFloat trailingInset; // ivar: _trailingInset
@property (copy, nonatomic) id *trailingInsetChangeHandler; // ivar: _trailingInsetChangeHandler


-(id)_determineIconBackingColorAndInsets:(struct UIEdgeInsets *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateIconBackingColorAndInset;
-(void)layoutSubviews;


@end


#endif