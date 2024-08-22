// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSVIEWSERVICEREQUESTOPERATION_H
#define VSVIEWSERVICEREQUESTOPERATION_H

@class NSString, NSUUID, VSViewServiceHostViewController;
@protocol VSViewServiceHostViewControllerDelegate, VSViewServiceRequestOperationDelegate;


#import "VSAsyncOperation.h"
#import "VSOptional.h"
#import "VSViewServiceRequest.h"

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate>

 {
    BOOL _isPresentingViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSViewServiceRequestOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *requestID; // ivar: _requestID
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (readonly) Class superclass;
@property (retain, nonatomic) VSViewServiceHostViewController *viewServiceHostViewController; // ivar: _viewServiceHostViewController
@property (readonly, copy, nonatomic) VSViewServiceRequest *viewServiceRequest; // ivar: _viewServiceRequest


-(BOOL)viewServiceHostViewController:(id)arg0 shouldAuthenticateAccountProviderWithIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithViewServiceRequest:(id)arg0 ;
-(void)_dismissViewController;
-(void)_dismissViewControllerIfRequired;
-(void)_presentViewController;
-(void)cancel;
-(void)dismissViewServiceHostViewController:(id)arg0 ;
-(void)executionDidBegin;
-(void)finishExecutionIfPossible;
-(void)presentViewServiceHostViewController:(id)arg0 ;
-(void)viewServiceHostViewController:(id)arg0 didCancelRequest:(id)arg1 ;
-(void)viewServiceHostViewController:(id)arg0 didChooseAdditionalProvidersForRequest:(id)arg1 ;
-(void)viewServiceHostViewController:(id)arg0 request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)viewServiceHostViewController:(id)arg0 request:(id)arg1 didFinishWithResponse:(id)arg2 ;


@end


#endif