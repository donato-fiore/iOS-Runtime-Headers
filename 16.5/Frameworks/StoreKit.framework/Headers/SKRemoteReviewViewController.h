// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREMOTEREVIEWVIEWCONTROLLER_H
#define SKREMOTEREVIEWVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKUIClientReviewViewController, SKRemoteReviewViewControllerDelegate;


#import "SKStoreReviewViewController.h"

@interface SKRemoteReviewViewController : UIRemoteViewController <SKUIClientReviewViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKRemoteReviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SKStoreReviewViewController *reviewViewController; // ivar: _reviewViewController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif