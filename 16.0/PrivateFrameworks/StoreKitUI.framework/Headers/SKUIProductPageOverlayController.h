// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGEOVERLAYCONTROLLER_H
#define SKUIPRODUCTPAGEOVERLAYCONTROLLER_H

@class NSArray, NSString, UIViewController, UIView;
@protocol SKUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate, SKUIProductPageOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SKUIItem.h"
#import "SKUIOverlayContainerViewController.h"
#import "SKUIClientContext.h"

@interface SKUIProductPageOverlayController : NSObject <SKUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate>

 {
    SKUIItem *_initialItem;
    SKUIOverlayContainerViewController *_overlayViewController;
}


@property (readonly, nonatomic) NSArray *URLs;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfVisibleOverlays;
@property (readonly, weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)initWithParentViewController:(id)arg0 ;
-(void)_backstopViewAction:(id)arg0 ;
-(void)_finishDismissAndNotifyDelegate:(BOOL)arg0 withViewController:(id)arg1 ;
-(void)_removeOverlayViewController;
-(void)_showOverlayViewController;
-(void)_showWithInitialViewController:(id)arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)iPadProductPage:(id)arg0 openItem:(id)arg1 ;
-(void)iPadProductPage:(id)arg0 openURL:(id)arg1 viewControllerBlock:(id)arg2 ;
-(void)iPadProductPageCannotOpen:(id)arg0 ;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)showWithInitialItem:(id)arg0 ;
-(void)showWithInitialItemIdentifier:(NSInteger)arg0 ;
-(void)showWithInitialProductPage:(id)arg0 metricsPageEvent:(id)arg1 ;
-(void)showWithInitialURL:(id)arg0 ;
-(void)showWithInitialURLRequest:(id)arg0 ;
-(void)showWithInitialURLs:(id)arg0 ;


@end


#endif