// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKREMOTESTOREPAGEVIEWCONTROLLER_H
#define SKREMOTESTOREPAGEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKUIClientStorePageViewController;


#import "SKStorePageViewController.h"

@interface SKRemoteStorePageViewController : UIRemoteViewController <SKUIClientStorePageViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SKStorePageViewController *storePageViewController; // ivar: _storePageViewController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)showProductPageWithItemIdentifier:(id)arg0 ;


@end


#endif