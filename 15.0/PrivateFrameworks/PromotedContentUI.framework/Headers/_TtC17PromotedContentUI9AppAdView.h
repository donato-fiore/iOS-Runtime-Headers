// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI9APPADVIEW_H
#define _TTC17PROMOTEDCONTENTUI9APPADVIEW_H

@protocol ASCAdLockupViewDelegate;


#import "APPCPromotedContentView.h"

@interface _TtC17PromotedContentUI9AppAdView : APPCPromotedContentView <ASCAdLockupViewDelegate>

 {
    ? $__lazy_storage_$_appView;
}




-(id)metricsActivityForAdLockupView:(id)arg0 toPerformActionOfOffer:(id)arg1 inState:(id)arg2 ;
-(id)metricsActivityForPresentingProductDetailsOfAdLockupView:(id)arg0 inState:(id)arg1 ;
-(id)presentingViewControllerForAdLockupView:(id)arg0 ;
-(void)adLockupView:(id)arg0 didFailRequestWithError:(id)arg1 ;
-(void)adLockupView:(id)arg0 didSelectOfferWithState:(id)arg1 ;
-(void)adLockupViewDidCancelScreenshotsFetchRequest:(id)arg0 ;
-(void)adLockupViewDidFinishRequest:(id)arg0 ;
-(void)adLockupViewDidFinishScreenshotsFetchRequest:(id)arg0 ;
-(void)adLockupViewDidSelectAdMarker:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif