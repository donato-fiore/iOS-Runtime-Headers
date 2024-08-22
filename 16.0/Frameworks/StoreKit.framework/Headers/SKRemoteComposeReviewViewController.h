// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKREMOTECOMPOSEREVIEWVIEWCONTROLLER_H
#define SKREMOTECOMPOSEREVIEWVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKUIClientComposeReviewViewController;


#import "SKComposeReviewViewController.h"

@interface SKRemoteComposeReviewViewController : UIRemoteViewController <SKUIClientComposeReviewViewController>



@property (weak, nonatomic) SKComposeReviewViewController *composeReviewViewController; // ivar: _composeReviewViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)didFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)didPrepareWithResult:(id)arg0 error:(id)arg1 ;
-(void)promptForStarRating;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif