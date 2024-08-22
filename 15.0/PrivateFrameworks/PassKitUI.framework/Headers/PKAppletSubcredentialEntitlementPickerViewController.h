// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLETSUBCREDENTIALENTITLEMENTPICKERVIEWCONTROLLER_H
#define PKAPPLETSUBCREDENTIALENTITLEMENTPICKERVIEWCONTROLLER_H

@class PKPaymentPass, PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, NSArray, NSString;
@protocol PKSubcredentialMessageComposeViewControllerDelegate, PKAppletSubcredentialSharingExplanationViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKSubcredentialMessageComposeViewController.h"

@interface PKAppletSubcredentialEntitlementPickerViewController : PKPaymentSetupTableViewController <PKSubcredentialMessageComposeViewControllerDelegate>

 {
    PKPaymentPass *_pass;
    PKSharedCredentialsGroupController *_groupController;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    NSArray *_supportedEntitlements;
    NSInteger _selectedEntitlementIndex;
    id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> *_delegate;
    BOOL _isSharing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKSubcredentialMessageComposeViewController *messageComposeViewController; // ivar: _messageComposeViewController
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithSharedCredentialsGroupController:(id)arg0 delegate:(id)arg1 sharingRequest:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)handleSharedButton;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif