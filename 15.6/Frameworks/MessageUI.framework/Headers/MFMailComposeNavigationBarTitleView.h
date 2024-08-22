// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILCOMPOSENAVIGATIONBARTITLEVIEW_H
#define MFMAILCOMPOSENAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView, UILabel, NSString;



@interface MFMailComposeNavigationBarTitleView : UINavigationBarTitleView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSUInteger _style;
}


@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


-(BOOL)_needsToLayoutTitleLabel;
-(CGFloat)_subtitleFontSizeWhenMini:(BOOL)arg0 ;
-(CGFloat)_titleFontSizeWhenMini:(BOOL)arg0 ;
-(CGFloat)_topPaddingForTitleWhenMini:(BOOL)arg0 ;
-(CGFloat)_verticalOffsetForSubtitleWhenMini:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_contentInsetsWithExclusionRects:(id)arg0 wantsUniformHorizontalInsets:(BOOL)arg1 ;
-(void)_updateHeightForCurrentTraits;
-(void)_updateTrailingBarButtonItemsAlpha;
-(void)contentDidChange;
-(void)didMoveToWindow;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif