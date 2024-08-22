// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARESLISTVIEWCONTROLLER_H
#define PKPASSSHARESLISTVIEWCONTROLLER_H

@class PKSharedPassSharesController, NSString;
@protocol PKShareSecureElementPassViewControllerDelegate, PKPassSharesListSectionControllerDelegate;


#import "PKDynamicCollectionViewController.h"
#import "PKShareAuthorizationSession.h"
#import "PKPassSharesListSectionController.h"

@interface PKPassSharesListViewController : PKDynamicCollectionViewController <PKShareSecureElementPassViewControllerDelegate, PKPassSharesListSectionControllerDelegate>

 {
    PKSharedPassSharesController *_sharesController;
    PKShareAuthorizationSession *_authorizer;
    PKPassSharesListSectionController *_sharesSectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSharesController:(id)arg0 ;
-(void)_donePressed;
-(void)_setIsLoading:(BOOL)arg0 ;
-(void)_showDisplayableError:(id)arg0 ;
-(void)loadView;
-(void)passSharesListSectionController:(id)arg0 didSelectShare:(id)arg1 ;
-(void)passSharesListSectionController:(id)arg0 presentAlert:(id)arg1 ;
-(void)passSharesListSectionController:(id)arg0 setIsLoading:(BOOL)arg1 ;
-(void)passSharesListSectionControllerDidFinishRevokingShares:(id)arg0 ;
-(void)passSharesListSectionControllerDidSelectAddShare:(id)arg0 ;
-(void)reloadDataAnimated:(BOOL)arg0 ;
-(void)shareSecureElementPassViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif