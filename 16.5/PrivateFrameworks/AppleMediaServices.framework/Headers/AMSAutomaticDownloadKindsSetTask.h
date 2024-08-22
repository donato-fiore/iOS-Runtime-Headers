// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAUTOMATICDOWNLOADKINDSSETTASK_H
#define AMSAUTOMATICDOWNLOADKINDSSETTASK_H

@class ACAccount, NSString, NSArray;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer, AMSBagProtocol, AMSRequestPresentationDelegate;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSURLSession.h"

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *enabledMediaKinds; // ivar: _enabledMediaKinds
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<AMSRequestPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(id)initWithEnabledMediaKinds:(id)arg0 account:(id)arg1 bag:(id)arg2 ;
-(id)initWithEnabledMediaKinds:(id)arg0 account:(id)arg1 bag:(id)arg2 presentationDelegate:(id)arg3 ;
-(id)perform;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;


@end


#endif