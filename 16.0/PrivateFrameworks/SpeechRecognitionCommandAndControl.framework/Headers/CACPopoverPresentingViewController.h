// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACPOPOVERPRESENTINGVIEWCONTROLLER_H
#define CACPOPOVERPRESENTINGVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIPopoverPresentationControllerDelegate;



@interface CACPopoverPresentingViewController : UIViewController <UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UIPopoverPresentationControllerDelegate> *popoverPresentationDelegate; // ivar: _popoverPresentationDelegate
@property (nonatomic) CGRect portraitUpSourceRect; // ivar: _portraitUpSourceRect
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewControllerInPopover; // ivar: _viewControllerInPopover


-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif