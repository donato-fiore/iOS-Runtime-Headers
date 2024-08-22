// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREMOTEPRODUCTVIEWCONTROLLER_H
#define SKREMOTEPRODUCTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKUIClientProductPageViewController;


#import "SKStoreProductViewController.h"

@interface SKRemoteProductViewController : UIRemoteViewController <SKUIClientProductPageViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SKStoreProductViewController *productViewController; // ivar: _productViewController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)didFinish;
-(void)didFinishDismissal;
-(void)didFinishWithResult:(id)arg0 ;
-(void)didReceiveTitle:(id)arg0 ;
-(void)loadDidFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presentPageWithRequest:(id)arg0 animated:(id)arg1 ;
-(void)promptForStarRating;
-(void)setStatusBarHidden:(id)arg0 withAnimation:(id)arg1 ;
-(void)setStatusBarStyle:(id)arg0 animated:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif