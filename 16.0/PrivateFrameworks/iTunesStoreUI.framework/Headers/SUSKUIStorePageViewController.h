// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSKUISTOREPAGEVIEWCONTROLLER_H
#define SUSKUISTOREPAGEVIEWCONTROLLER_H

@class UIViewController, SKUIIPhoneProductPageViewController, SKStoreProductViewController, SKUIStorePageViewController, NSString;
@protocol SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate;


#import "SUViewController.h"

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate>

 {
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKStoreProductViewController *_remoteProductViewController;
    SKUIStorePageViewController *_storePageViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)iPhoneProductPage:(id)arg0 shouldOpenItem:(id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg0 shouldOpenURL:(id)arg1 ;
-(id)initWithSection:(id)arg0 ;
-(void)_loadClientContextWithCompletionBlock:(id)arg0 ;
-(void)_setActiveChildViewController:(id)arg0 ;
-(void)_showIPhoneProductPageWithPage:(id)arg0 clientContext:(id)arg1 ;
-(void)_showProductPageWithPageDictionary:(id)arg0 ;
-(void)_showRemoteViewControllerWithPageDictionary:(id)arg0 ;
-(void)_showStorePageWithPageDictionary:(id)arg0 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)productViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)productViewController:(id)arg0 presentProductWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(void)reloadWithStorePage:(id)arg0 forURL:(id)arg1 ;


@end


#endif