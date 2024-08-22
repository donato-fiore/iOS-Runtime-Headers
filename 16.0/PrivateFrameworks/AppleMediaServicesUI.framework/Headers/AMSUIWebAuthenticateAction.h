// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBAUTHENTICATEACTION_H
#define AMSUIWEBAUTHENTICATEACTION_H

@class NSString, AMSAuthenticateRequest;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAuthenticatingCloud; // ivar: _isAuthenticatingCloud
@property (nonatomic) BOOL makeCurrentAccount; // ivar: _makeCurrentAccount
@property (nonatomic) BOOL pauseTimeouts; // ivar: _pauseTimeouts
@property (retain, nonatomic) AMSAuthenticateRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)_responseForAccount:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(void)_updateContextWithAccountIfNeeded:(id)arg0 ;


@end


#endif