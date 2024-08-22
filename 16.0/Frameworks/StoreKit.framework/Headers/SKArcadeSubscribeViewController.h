// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKARCADESUBSCRIBEVIEWCONTROLLER_H
#define SKARCADESUBSCRIBEVIEWCONTROLLER_H

@class UIViewController, NSString, NSExtension, NSNumber;
@protocol SKStoreRemoteViewControllerDelegate, SKArcadeSubscribeViewControllerDelegate, NSCopying;


#import "SKStoreRemoteViewController.h"

@interface SKArcadeSubscribeViewController : UIViewController <SKStoreRemoteViewControllerDelegate>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKArcadeSubscribeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (retain, nonatomic) SKStoreRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


-(BOOL)prefersStatusBarHidden;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithItemID:(id)arg0 bundleID:(id)arg1 ;
-(void)_loadOcelotUpsellExtension;
-(void)_setupRemoteChildViewController;
-(void)dealloc;
-(void)finish;
-(void)finishExtension;
-(void)storeRemoteViewController:(id)arg0 presentRequestedViewControllerWithIdentifier:(id)arg1 ;
-(void)storeRemoteViewControllerDidDismiss;
-(void)storeRemoteViewControllerNeedsTabSelection:(id)arg0 ;
-(void)storeRemoteViewControllerTerminatedWithError:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif