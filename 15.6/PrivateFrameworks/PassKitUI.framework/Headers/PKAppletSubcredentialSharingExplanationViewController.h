// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGEXPLANATIONVIEWCONTROLLER_H
#define PKAPPLETSUBCREDENTIALSHARINGEXPLANATIONVIEWCONTROLLER_H

@class PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, NSString;
@protocol PKExplanationViewDelegate, PKSubcredentialMessageComposeViewControllerDelegate, PKViewControllerPreflightable, PKAppletSubcredentialSharingExplanationViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKHeroCardExplainationHeaderView.h"
#import "PKSubcredentialMessageComposeViewController.h"

@interface PKAppletSubcredentialSharingExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialMessageComposeViewControllerDelegate, PKViewControllerPreflightable>

 {
    PKHeroCardExplainationHeaderView *_heroCardView;
    PKSharedCredentialsGroupController *_groupController;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> *_delegate;
    BOOL _isSharing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKSubcredentialMessageComposeViewController *messageComposeViewController; // ivar: _messageComposeViewController
@property (readonly) Class superclass;


-(id)initWithSharedCredentialsGroupController:(id)arg0 delegate:(id)arg1 SharingRequest:(id)arg2 ;
-(void)_openMessagesToPresentAction;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif