// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKASCAUTHORIZATIONPRESENTERDELEGATE_H
#define WKASCAUTHORIZATIONPRESENTERDELEGATE_H

@class NSString;
@protocol ASCAuthorizationPresenterDelegate;

#import <Foundation/Foundation.h>


@interface WKASCAuthorizationPresenterDelegate : NSObject <ASCAuthorizationPresenterDelegate>

 {
    WeakPtr<WebKit::AuthenticatorPresenterCoordinator, WTF::EmptyCounter> _coordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCoordinator:(*void)arg0 ;
-(void)authorizationPresenter:(id)arg0 credentialRequestedForLoginChoice:(id)arg1 authenticatedContext:(id)arg2 completionHandler:(id)arg3 ;
-(void)authorizationPresenter:(id)arg0 validateUserEnteredPIN:(id)arg1 completionHandler:(id)arg2 ;
-(void)dispatchCoordinatorCallback:(*void)arg0 ;


@end


#endif