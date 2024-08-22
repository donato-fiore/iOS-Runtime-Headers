// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPLANATIONVIEWCONTROLLER_H
#define PKEXPLANATIONVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, UIActivityIndicatorView, NSString, OBPrivacyLinkController;
@protocol PKPaymentSetupPresentationProtocol, PKExplanationViewDelegate, PKExplanationViewControllerDelegate;


#import "PKExplanationView.h"

@interface PKExplanationViewController : UIViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewDelegate>

 {
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showingSpinner;
    BOOL _wasBackHidden;
}


@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKExplanationView *explanationView; // ivar: _explanationView
@property (weak, nonatomic) NSObject<PKExplanationViewControllerDelegate> *explanationViewControllerDelegate; // ivar: _explanationViewControllerDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (nonatomic) BOOL showCloseButton; // ivar: _showCloseButton
@property (nonatomic) BOOL showDoneButton; // ivar: _showDoneButton
@property (readonly) Class superclass;


-(BOOL)paymentSetupMarkerRemovalIsInclusive;
-(NSUInteger)paymentSetupMarker;
-(id)contentScrollView;
-(id)init;
-(id)initWithContext:(NSInteger)arg0 ;
-(void)_cancelPressed;
-(void)_dismissViewController;
-(void)_donePressed;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)loadView;
-(void)showNavigationBarSpinner:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif