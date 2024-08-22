// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONINCOMINGRUNREQUESTSESSION_H
#define WFREMOTEEXECUTIONINCOMINGRUNREQUESTSESSION_H

@class NSString, NSSet, NSDictionary;
@protocol WFOutOfProcessWorkflowControllerDelegate;


#import "WFRemoteExecutionSession.h"
#import "WFOutOfProcessWorkflowController.h"

@interface WFRemoteExecutionIncomingRunRequestSession : WFRemoteExecutionSession <WFOutOfProcessWorkflowControllerDelegate>



@property (retain, nonatomic) WFOutOfProcessWorkflowController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *lastKnownDestinations; // ivar: _lastKnownDestinations
@property (retain, nonatomic) NSDictionary *lastKnownOptions; // ivar: _lastKnownOptions
@property (readonly) Class superclass;


-(CGFloat)timeoutLimitInSeconds;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg0 withIdentifier:(id)arg1 metadata:(id)arg2 destinations:(id)arg3 options:(id)arg4 ;
-(void)handleIncomingProtobuf:(id)arg0 destinations:(id)arg1 options:(id)arg2 ;
-(void)handleTimeout;
-(void)handleUnsupportedVersionForRequestData:(id)arg0 error:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(void)outOfProcessWorkflowController:(id)arg0 didFinishWithResult:(id)arg1 dialogAttribution:(id)arg2 ;
-(void)sendResponse:(id)arg0 toDestinations:(id)arg1 options:(id)arg2 ;


@end


#endif