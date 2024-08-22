// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONBADGEVIEW_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONBADGEVIEW_H

@class UIView, UIVisualEffectView, UILabel;
@protocol PXGReusableView, NSCopying;


#import "PXShadowView.h"
#import "PXSharedLibrarySharingSuggestionBadgeViewConfiguration.h"

@interface PXSharedLibrarySharingSuggestionBadgeView : UIView <PXGReusableView>

 {
    UIVisualEffectView *_backgroundEffectView;
    UIVisualEffectView *_labelVibrancyEffectView;
    UILabel *_label;
    PXShadowView *_shadowView;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (retain, nonatomic) PXSharedLibrarySharingSuggestionBadgeViewConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData; // ivar: _userData


-(id)init;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif