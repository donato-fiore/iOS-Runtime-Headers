// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSTHUMBNAILVIEW_H
#define PKPASSTHUMBNAILVIEW_H

@class UIView, UIImageView, PKPass, UIImage;


#import "PKPassView.h"

@interface PKPassThumbnailView : UIView {
    unsigned int _options;
    BOOL _needsRasterization;
    UIView *_maskView;
    PKPassView *_passView;
    UIImageView *_pocketOverlay;
    BOOL _preferMinimumHeight;
    BOOL _modallyPresented;
    PKPass *_pass;
    NSUInteger _suppressedContent;
    UIImage *_foregroundPocketOverlayImage;
    CGFloat _shadowVisibility;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif