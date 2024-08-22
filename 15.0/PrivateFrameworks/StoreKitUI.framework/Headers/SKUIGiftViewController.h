// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTVIEWCONTROLLER_H
#define SKUIGIFTVIEWCONTROLLER_H

@class UINavigationController, UIViewController, NSOperationQueue;
@protocol SKUIGiftViewControllerDelegate;


#import "SKUIGiftConfiguration.h"
#import "SKUIGiftComposeViewController.h"
#import "SKUIClientContext.h"
#import "SKUIGift.h"

@interface SKUIGiftViewController : UINavigationController {
    SKUIGiftConfiguration *_giftConfiguration;
    NSInteger _initialBarStyle;
    UIViewController *_placeholderViewController;
    SKUIGiftComposeViewController *_rootViewController;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy, nonatomic) SKUIGift *gift; // ivar: _gift
@property (weak, nonatomic) NSObject<SKUIGiftViewControllerDelegate> *giftDelegate; // ivar: _giftDelegate
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue


-(NSUInteger)supportedInterfaceOrientations;
-(id)_localizedString:(id)arg0 ;
-(id)initWithGift:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_cancelButtonAction:(id)arg0 ;
-(void)_clientContextDidLoadWithContext:(id)arg0 error:(id)arg1 ;
-(void)_configurationDidLoadWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_finishAuthenticateWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_finishGiftingWithResult:(BOOL)arg0 ;
-(void)_loadGiftConfiguration;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif