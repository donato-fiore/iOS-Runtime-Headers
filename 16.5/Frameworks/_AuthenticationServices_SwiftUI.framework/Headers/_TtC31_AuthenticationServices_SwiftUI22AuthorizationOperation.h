// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC31_AUTHENTICATIONSERVICES_SWIFTUI22AUTHORIZATIONOPERATION_H
#define _TTC31_AUTHENTICATIONSERVICES_SWIFTUI22AUTHORIZATIONOPERATION_H

@class NSOperation;
@protocol ASAuthorizationControllerDelegate;



@interface _TtC31_AuthenticationServices_SwiftUI22AuthorizationOperation : NSOperation <ASAuthorizationControllerDelegate>

 {
    ? authorizationCompletionHandler;
    ? presentationAnchorProvider;
    ? requestContext;
    ? stateStorage;
    ? authorizationController;
    ? presentationContextProvider;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)authorizationController:(id)arg0 didCompleteWithAuthorization:(id)arg1 ;
-(void)authorizationController:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)cancel;
-(void)start;


@end


#endif