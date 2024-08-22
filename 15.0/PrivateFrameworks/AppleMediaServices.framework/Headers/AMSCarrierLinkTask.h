// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSCARRIERLINKTASK_H
#define AMSCARRIERLINKTASK_H

@class ACAccount, NSDictionary, NSString;
@protocol AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer, AMSBagProtocol, AMSCarrierLinkTaskDelegate;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSEngagement.h"
#import "AMSCarrierLinkParams.h"
#import "AMSMetrics.h"
#import "AMSURLRequestEncoder.h"
#import "AMSURLSession.h"

@interface AMSCarrierLinkTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *additionalLinkingParameters; // ivar: _additionalLinkingParameters
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSCarrierLinkTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSEngagement *engagementHandler; // ivar: _engagementHandler
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSCarrierLinkParams *linkParams; // ivar: _linkParams
@property (readonly, nonatomic) AMSMetrics *metrics; // ivar: _metrics
@property (copy, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (readonly, nonatomic) NSString *msisdn; // ivar: _msisdn
@property (readonly, nonatomic) NSString *productCode; // ivar: _productCode
@property (readonly, nonatomic) AMSURLRequestEncoder *requestEncoder; // ivar: _requestEncoder
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSURLSession *urlSession; // ivar: _urlSession


+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;
-(id)_linkFailureFromResult:(id)arg0 ;
-(id)_linkParameters;
-(id)_linkURLRequest;
-(id)_metricsEventFromCarrierLinkResult:(id)arg0 error:(id)arg1 ;
-(id)_performLinking;
-(id)_performLinkingWithValidations;
-(id)_promptForAccount;
-(id)_recordEngagementMetricsEvent:(id)arg0 ;
-(id)_resultDecodingURLResult:(id)arg0 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 engagementHandler:(id)arg2 guid:(id)arg3 linkParams:(id)arg4 metrics:(id)arg5 msisdn:(id)arg6 productCode:(id)arg7 requestEncoder:(id)arg8 urlSession:(id)arg9 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 linkParams:(id)arg2 productCode:(id)arg3 ;
-(id)perform;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;
-(void)_delegateHandleEngagementRequest:(id)arg0 completion:(id)arg1 ;
-(void)_performDelegateAuthenticationWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif