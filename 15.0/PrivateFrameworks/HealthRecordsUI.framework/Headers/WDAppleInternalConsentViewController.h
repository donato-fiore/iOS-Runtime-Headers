// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDAPPLEINTERNALCONSENTVIEWCONTROLLER_H
#define WDAPPLEINTERNALCONSENTVIEWCONTROLLER_H

@class HKTitledBuddyViewController, UIBarButtonItem, UIViewController;



@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {
    UIBarButtonItem *_navigationCancelButton;
}


@property (retain, nonatomic) UIViewController *actionViewController; // ivar: _actionViewController
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock


-(BOOL)shouldCustomizeNavigationBar;
-(NSInteger)bodyTextAlignment;
-(NSUInteger)supportedInterfaceOrientations;
-(id)bodyString;
-(id)bottomAnchoredButtons;
-(id)initWithPresentingViewController:(id)arg0 completionBlock:(id)arg1 ;
-(id)titleString;
-(void)acceptButtonTapped:(id)arg0 ;
-(void)buttonAtIndexTapped:(NSInteger)arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)declineButtonTapped:(id)arg0 ;
-(void)updateBodyTextAttributesWithMutableString:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif