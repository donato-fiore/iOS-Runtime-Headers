// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDTITLEBACKDROPBLURVIEW_H
#define PXPHOTOSGRIDTITLEBACKDROPBLURVIEW_H

@class UIView, UIVisualEffectView, NSString;
@protocol PXGReusableView;



@interface PXPhotosGridTitleBackdropBlurView : UIView <PXGReusableView>

 {
    UIVisualEffectView *_visualEffectView;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSString *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif