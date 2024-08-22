// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAIRDROPVIEWCONTROLLER_H
#define SFAIRDROPVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString, NSExtension;
@protocol SFAirDropViewServiceHostProtocol, _UIRemoteViewControllerContaining, SFAirDropViewControllerDelegate;


#import "_SFAirDropRemoteViewController.h"

@interface SFAirDropViewController : UIViewController <SFAirDropViewServiceHostProtocol, _UIRemoteViewControllerContaining>

 {
    _SFAirDropRemoteViewController *_childViewController;
    id *_extensionRequest;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAirDropViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNoContentView:(BOOL)arg0 ;
-(void)_presentationControllerDidDismiss:(id)arg0 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)airDropViewServiceDidFinishTransferWithSuccess:(BOOL)arg0 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)airDropViewServiceDidStartTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)airDropViewServiceWillStartTransferToRecipient:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif