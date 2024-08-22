// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDADDTOCONTACTSVIEWCONTROLLER_H
#define DDADDTOCONTACTSVIEWCONTROLLER_H

@class UINavigationController, CNContactViewController, NSString;
@protocol DDRemoteActionViewService, CNContactViewControllerDelegate, DDRemoteActionPresenter;


#import "DDAction.h"

@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate>

 {
    id<DDRemoteActionPresenter> *_proxy;
    CNContactViewController *_personViewController;
    BOOL _contactBeingAdded;
}


@property (retain) DDAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)alternateNameForContact:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;
-(void)cancelPressed:(id)arg0 ;
-(void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)arg0 ;
-(void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)arg0 ;
-(void)doneWithAddingContactShouldDismiss:(BOOL)arg0 ;
-(void)prepareForAction:(id)arg0 ;
-(void)setCancelButtonVisible:(BOOL)arg0 ;
-(void)setCancellable:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif