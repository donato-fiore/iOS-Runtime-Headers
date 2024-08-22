// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHIGHLIGHTVIEW_H
#define SBHIGHLIGHTVIEW_H

@class UIView, UIImageView;



@interface SBHighlightView : UIView {
    UIImageView *_highlight;
}


@property (readonly, nonatomic) CGFloat highlightAlpha; // ivar: _highlightAlpha
@property (readonly, nonatomic) CGFloat highlightHeight; // ivar: _highlightHeight


+(id)_highlightImageWithHeight:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)imageCache;
-(id)initWithFrame:(struct CGRect )arg0 highlightAlpha:(CGFloat)arg1 highlightHeight:(CGFloat)arg2 ;
-(void)layoutSubviews;


@end


#endif