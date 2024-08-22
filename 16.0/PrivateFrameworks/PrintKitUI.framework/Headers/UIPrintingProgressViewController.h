// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTINGPROGRESSVIEWCONTROLLER_H
#define UIPRINTINGPROGRESSVIEWCONTROLLER_H

@class UITableViewController, UINavigationController, UIWindow;


#import "UIPrintingProgress.h"
#import "UIPrintingMessageView.h"

@interface UIPrintingProgressViewController : UITableViewController {
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    CGFloat _rotationDelay;
}




-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)visible;
-(CGFloat)rotationDelay;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithTitle:(id)arg0 message:(id)arg1 printingProgress:(id)arg2 ;
-(void)cancelProgress;
-(void)cleanupAfterDismiss;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)doneProgress;
-(void)setDonePrinting:(BOOL)arg0 ;
-(void)setMessage:(id)arg0 ;
-(void)show;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif