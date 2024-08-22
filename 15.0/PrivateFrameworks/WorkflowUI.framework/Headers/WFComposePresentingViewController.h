// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPOSEPRESENTINGVIEWCONTROLLER_H
#define WFCOMPOSEPRESENTINGVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol WFComposeViewControllerPresenter, UINavigationControllerDelegate;


#import "WFComposeViewController.h"

@interface WFComposePresentingViewController : UIViewController <WFComposeViewControllerPresenter, UINavigationControllerDelegate>



@property (readonly, nonatomic) WFComposeViewController *composeViewController; // ivar: _composeViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithComposeViewController:(id)arg0 ;
-(id)presentingViewControllerForComposeViewController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif