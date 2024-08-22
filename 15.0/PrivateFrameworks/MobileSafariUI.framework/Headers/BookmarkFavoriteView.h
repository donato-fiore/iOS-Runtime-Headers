// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKFAVORITEVIEW_H
#define BOOKMARKFAVORITEVIEW_H

@class UIView, WebBookmark, _SFSiteIconView;


#import "VibrantLabelView.h"
#import "BookmarkFavoriteViewMetrics.h"

@interface BookmarkFavoriteView : UIView {
    UIView *_iconTouchHighlightView;
    VibrantLabelView *_titleLabel;
    VibrantLabelView *_descriptionLabel;
    BOOL _grabbed;
    BOOL _highlighted;
    BOOL _usesVibrantEffect;
    WebBookmark *_bookmark;
    _SFSiteIconView *_iconView;
    NSUInteger _childCount;
    BookmarkFavoriteViewMetrics *_metrics;
    NSInteger _iconSize;
    CGFloat _spaceBetweenIconAndLabelBaseline;
}




-(id)init;
-(void)layoutSubviews;


@end


#endif