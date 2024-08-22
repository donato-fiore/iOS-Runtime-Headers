// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC31_AUTHENTICATIONSERVICES_SWIFTUI26WEBAUTHENTICATIONOPERATION_H
#define _TTC31_AUTHENTICATIONSERVICES_SWIFTUI26WEBAUTHENTICATIONOPERATION_H

@class NSOperation;



@interface _TtC31_AuthenticationServices_SwiftUI26WebAuthenticationOperation : NSOperation {
    ? authenticationCompletionHandler;
    ? presentationAnchorProvider;
    ? requestContext;
    ? stateStorage;
    ? authenticationSession;
    ? presentationContextProvider;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)start;


@end


#endif