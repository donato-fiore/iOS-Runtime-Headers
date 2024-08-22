// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYINLINECAPTIONEDMEDIASHELFVIEW_H
#define PKDISCOVERYINLINECAPTIONEDMEDIASHELFVIEW_H

@class PKDiscoveryInlineMediaShelf, UIView, PKDiscoveryMedia;


#import "PKDiscoveryShelfView.h"
#import "PKDiscoveryInlineMediaCaptionView.h"

@interface PKDiscoveryInlineCaptionedMediaShelfView : PKDiscoveryShelfView {
    PKDiscoveryInlineMediaShelf *_shelf;
    UIView *_mediaContainerView;
    PKDiscoveryInlineMediaCaptionView *_captionView;
    BOOL _isInline;
    CGFloat _leadingSpace;
    UIView *_mediaView;
    PKDiscoveryMedia *_media;
}




-(id)initWithShelf:(id)arg0 mediaView:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setContentInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif