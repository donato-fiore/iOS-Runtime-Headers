// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCAMPAIGNATTRIBUTIONTASK_H
#define AMSCAMPAIGNATTRIBUTIONTASK_H

@class NSURL, ACAccount, NSArray, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSURLSession.h"
#import "AMSProcessInfo.h"

@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) AMSURLSession *URLSession; // ivar: _URLSession
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSArray *additionalQueryItems; // ivar: _additionalQueryItems
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(BOOL)_validateAllowlist:(id)arg0 error:(*id)arg1 ;
-(id)_buildProcessRedirectURLWithEndpointURL:(id)arg0 error:(*id)arg1 ;
-(id)_encodeRequestForURL:(id)arg0 error:(*id)arg1 ;
-(id)_parseAllowedQueryParamsFromInfo:(id)arg0 error:(*id)arg1 ;
-(id)_parseCookiesFromResult:(id)arg0 ;
-(id)_parseEndpointURLFromInfo:(id)arg0 error:(*id)arg1 ;
-(id)_parseRedirectURLFromResult:(id)arg0 error:(*id)arg1 ;
-(id)_processRedirectWithEndpointURL:(id)arg0 error:(*id)arg1 ;
-(id)_processRedirectWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)_queryItemNames;
-(id)_retrieveProcessRedirectInfoWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 bag:(id)arg1 ;
-(id)initWithURL:(id)arg0 bag:(id)arg1 URLSession:(id)arg2 ;
-(id)perform;


@end


#endif