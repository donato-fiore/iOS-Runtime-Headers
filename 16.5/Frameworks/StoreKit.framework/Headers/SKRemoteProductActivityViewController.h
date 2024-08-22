// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREMOTEPRODUCTACTIVITYVIEWCONTROLLER_H
#define SKREMOTEPRODUCTACTIVITYVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKUIClientProductActivityViewController;


#import "SKStoreProductActivityViewController.h"

@interface SKRemoteProductActivityViewController : UIRemoteViewController <SKUIClientProductActivityViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SKStoreProductActivityViewController *productActivityViewController; // ivar: _productActivityViewController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithResult:(id)arg0 error:(id)arg1 ;


@end


#endif