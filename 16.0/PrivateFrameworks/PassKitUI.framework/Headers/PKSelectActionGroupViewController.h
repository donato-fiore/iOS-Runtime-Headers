// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSELECTACTIONGROUPVIEWCONTROLLER_H
#define PKSELECTACTIONGROUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentPass, NSArray, PKPaymentPassActionGroup, PKPaymentWebService, NSString;
@protocol PKSelectActionGroupViewDelegate, PKRemoteActionGroupViewControllerDelegate, PKPaymentDataProvider, PKSelectActionGroupViewControllerDelegate;


#import "PKPerformActionPassView.h"
#import "PKSelectActionGroupView.h"

@interface PKSelectActionGroupViewController : UIViewController <PKSelectActionGroupViewDelegate, PKRemoteActionGroupViewControllerDelegate>

 {
    PKPerformActionPassView *_passView;
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    PKSelectActionGroupView *_actionGroupView;
    PKPaymentPassActionGroup *_selectedActionGroup;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSelectActionGroupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithPass:(id)arg0 actionGroups:(id)arg1 paymentDataProvider:(id)arg2 webService:(id)arg3 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_reloadActionGroupView;
-(void)_rightBarButtonPressed:(id)arg0 ;
-(void)remoteGroupActionsViewControllerDidCancel:(id)arg0 ;
-(void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)arg0 ;
-(void)selectActionGroupViewDidSelectActionGroup:(id)arg0 ;
-(void)setRightBarButtonEnabled:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif