// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSBIOMETRICSTOKENUPDATETASK_H
#define AMSBIOMETRICSTOKENUPDATETASK_H

@class ACAccount, NSDictionary, NSString;
@protocol AMSBagConsumer, AMSBagProtocol, AMSRequestPresentationDelegate;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSURLSession.h"

@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *additionalDialogMetrics; // ivar: _additionalDialogMetrics
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AMSRequestPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (nonatomic) BOOL shouldGenerateKeysOnly; // ivar: _shouldGenerateKeysOnly
@property (nonatomic) BOOL shouldPromptUser; // ivar: _shouldPromptUser
@property (nonatomic) BOOL shouldRequestConfirmation; // ivar: _shouldRequestConfirmation
@property (readonly) Class superclass;


-(id)_sendRequestToDaemon;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)performUpdate;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif