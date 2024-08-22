// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUGCCALLTOACTIONLIKEDISLIKEACCESSORYVIEW_H
#define MKUGCCALLTOACTIONLIKEDISLIKEACCESSORYVIEW_H

@class UIView, UIButton, NSString;



@interface MKUGCCallToActionLikeDislikeAccessoryView : UIView {
    UIButton *_dislikeButton;
    UIButton *_likeButton;
}


@property (copy, nonatomic) NSString *dislikeImageGlyphName; // ivar: _dislikeImageGlyphName
@property (copy, nonatomic) NSString *likeImageGlyphName; // ivar: _likeImageGlyphName


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeChanged;
-(void)_setupButtons;
-(void)setTarget:(id)arg0 likeSelector:(SEL)arg1 dislikeSelector:(SEL)arg2 ;


@end


#endif