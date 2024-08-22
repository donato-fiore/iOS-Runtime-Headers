// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONBADGEVIEW_H
#define SBICONBADGEVIEW_H

@class UIView, UIImageView, UITapGestureRecognizer, NSString, SBFParallaxSettings;
@protocol PTSettingsKeyObserver, SBIconAccessoryView, SBIconListLayout;


#import "SBHIconAccessoryCountedMapImageTuple.h"
#import "SBDarkeningImageView.h"

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView>

 {
    UIImageView *_incomingTextView;
    BOOL _displayingAccessory;
    SBHIconAccessoryCountedMapImageTuple *_backgroundImageTuple;
    SBHIconAccessoryCountedMapImageTuple *_textImageTuple;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_textView;
}


@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBIconListLayout> *listLayout; // ivar: _listLayout
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings; // ivar: _parallaxSettings
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(id)_checkoutImageForText:(id)arg0 font:(id)arg1 highlighted:(BOOL)arg2 ;
+(id)_createImageForText:(id)arg0 font:(id)arg1 highlighted:(BOOL)arg2 ;
+(id)backgroundImageCache;
-(BOOL)displayingAccessory;
-(CGFloat)badgeContentScale;
-(id)_checkoutBackgroundImageTuple;
-(id)font;
-(id)init;
-(struct CGPoint )accessoryCenterForIconBounds:(struct CGRect )arg0 ;
-(struct CGPoint )layoutOffset;
-(struct CGSize )badgeSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )intrinsicContentSizeForTextImage:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyParallaxSettings;
-(void)_clearText;
-(void)_configureAnimatedForText:(id)arg0 highlighted:(BOOL)arg1 animator:(id)arg2 ;
-(void)_crossfadeToTextImage:(id)arg0 animator:(id)arg1 ;
-(void)_layOutTextImageView:(id)arg0 ;
-(void)_resizeForTextImage:(id)arg0 ;
-(void)_zoomInWithTextImage:(id)arg0 animator:(id)arg1 ;
-(void)_zoomOutWithAnimator:(id)arg0 ;
-(void)configureAnimatedForIcon:(id)arg0 infoProvider:(id)arg1 animator:(id)arg2 ;
-(void)configureForIcon:(id)arg0 infoProvider:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryBrightness:(CGFloat)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif