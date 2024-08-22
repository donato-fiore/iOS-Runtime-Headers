// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12FEEDBACKCORE24FBKACTIONSHEETCONTROLLER_H
#define _TTC12FEEDBACKCORE24FBKACTIONSHEETCONTROLLER_H

@protocol _TtP12FeedbackCore19FBKActionController_;


#import "FBKPartialSheetNavigationController.h"

@interface _TtC12FeedbackCore24FBKActionSheetController : FBKPartialSheetNavigationController <_TtP12FeedbackCore19FBKActionController_>

 {
    ? actionSheetController;
}


@property (nonatomic) BOOL dismissesOnAction;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 actions:(id)arg2 ;
-(void)addAction:(id)arg0 ;
-(void)addActionWithTitle:(id)arg0 image:(id)arg1 actionHandler:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif