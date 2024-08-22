// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGASSETDECORATIONVIEW_H
#define PXGASSETDECORATIONVIEW_H

@class UIView, NSTimer;
@protocol PXGReusableView;


#import "PXUpdater.h"
#import "PXRoundProgressView.h"
#import "PXGAssetDecorationViewConfiguration.h"

@interface PXGAssetDecorationView : UIView <PXGReusableView>

 {
    PXUpdater *_updater;
    PXRoundProgressView *_progressIndicatorView;
    NSTimer *_progressIndicatorDelayTimer;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGAssetDecorationViewConfiguration *userData; // ivar: _userData


+(BOOL)_wantsProgressIndicatorForConfiguration:(id)arg0 ;
+(BOOL)wantsDecorationViewForConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateProgressIndicator;
-(void)_setNeedsUpdate;
-(void)_updateProgressIndicator;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif