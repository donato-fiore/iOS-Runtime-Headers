// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDRECENTLYDELETEDDECORATIONVIEW_H
#define PXPHOTOSGRIDRECENTLYDELETEDDECORATIONVIEW_H

@class UIView;
@protocol PXGDecorationView;


#import "PXTextBannerView.h"
#import "PXAssetReference.h"

@interface PXPhotosGridRecentlyDeletedDecorationView : UIView <PXGDecorationView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (nonatomic) NSUInteger decorationOptions; // ivar: _decorationOptions
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (retain, nonatomic) PXTextBannerView *textBannerView; // ivar: _textBannerView
@property (copy, nonatomic) PXAssetReference *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateTextBanner;


@end


#endif