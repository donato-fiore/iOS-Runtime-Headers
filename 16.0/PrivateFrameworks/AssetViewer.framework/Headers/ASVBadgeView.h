// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVBADGEVIEW_H
#define ASVBADGEVIEW_H

@class UIView, UIVisualEffectView, UIImageView;


#import "ASVBadgeDescription.h"

@interface ASVBadgeView : UIView {
    UIVisualEffectView *_blurView;
    UIImageView *_badgeImageView;
    UIView *_shadowView;
}


@property (readonly, nonatomic) ASVBadgeDescription *badgeDescription; // ivar: _badgeDescription
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


+(id)badgeForThumbnail:(id)arg0 ;
+(id)badgeView;
+(id)highlightedBlurViewEffects;
+(id)normalBlurViewEffects;
+(void)applyBlurWithBackground:(id)arg0 offset:(struct CGPoint )arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateShadow;
-(void)setUpView;


@end


#endif