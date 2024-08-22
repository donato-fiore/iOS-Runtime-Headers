// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSTOREREMOTEVIEWCONTROLLER_H
#define SKSTOREREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKStoreExtensionClientInterface, SKStoreRemoteViewControllerDelegate;



@interface SKStoreRemoteViewController : UIRemoteViewController <SKStoreExtensionClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKStoreRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg0 ;
-(void)setNeedsTabSelection;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif