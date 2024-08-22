// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSVIEWSERVICEHOSTVIEWCONTROLLER_H
#define VSVIEWSERVICEHOSTVIEWCONTROLLER_H

@class UIViewController, VSOptional, NSString, NSMutableDictionary;
@protocol VSViewServiceRemoteViewControllerDelegate, VSViewServiceHostViewControllerDelegate;


#import "VSViewServiceRemoteViewController.h"
#import "VSViewControllerFactory.h"

@interface VSViewServiceHostViewController : UIViewController <VSViewServiceRemoteViewControllerDelegate>



@property (retain, nonatomic) VSOptional *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSViewServiceHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRequestedPresentation; // ivar: _hasRequestedPresentation
@property (nonatomic) BOOL hasRetriedOnce; // ivar: _hasRetriedOnce
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSMutableDictionary *requestsByID; // ivar: _requestsByID
@property (readonly) Class superclass;
@property (retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // ivar: _viewControllerFactory


-(BOOL)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg0 ;
-(BOOL)isModalInPresentation;
-(NSInteger)modalPresentationStyle;
-(id)_requestForID:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addRemoteViewControllerAsChildViewController;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_connectToViewServiceForRequest:(id)arg0 ;
-(void)_didCancelRequest:(id)arg0 ;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg0 ;
-(void)_didCompleteRequest:(id)arg0 ;
-(void)_dismissViewServiceHostViewController;
-(void)_presentViewServiceHostViewController;
-(void)_removeRemoteViewControllerAsChildViewController;
-(void)_request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_request:(id)arg0 didFinishWithResponse:(id)arg1 ;
-(void)dealloc;
-(void)dismissViewServiceRemoteViewController:(id)arg0 ;
-(void)enqueueViewServiceRequest:(id)arg0 withIdentifier:(id)arg1 ;
-(void)presentViewServiceRemoteViewController:(id)arg0 ;
-(void)viewServiceRemoteViewController:(id)arg0 didCancelRequest:(id)arg1 ;
-(void)viewServiceRemoteViewController:(id)arg0 didChooseAdditionalProvidersForRequest:(id)arg1 ;
-(void)viewServiceRemoteViewController:(id)arg0 didSelectProviderWithIdentifier:(id)arg1 vetoHandler:(id)arg2 ;
-(void)viewServiceRemoteViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)viewServiceRemoteViewController:(id)arg0 request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)viewServiceRemoteViewController:(id)arg0 request:(id)arg1 didFinishWithResponse:(id)arg2 ;


@end


#endif