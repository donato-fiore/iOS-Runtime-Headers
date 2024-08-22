// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSBIOMETRICSPRESENTATIONPROXY_H
#define AMSBIOMETRICSPRESENTATIONPROXY_H

@class NSString, NSURLSessionTask;
@protocol AMSRequestPresentationDelegate;

#import <Foundation/Foundation.h>

#import "AMSURLSession.h"

@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSessionTask *task; // ivar: _task


-(id)initWithSession:(id)arg0 task:(id)arg1 ;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif