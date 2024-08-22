// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISLOADURLBAGOPERATION_H
#define ISLOADURLBAGOPERATION_H

@class NSNumber, SSURLBagContext, NSString;
@protocol ISStoreURLOperationDelegate;


#import "ISOperation.h"
#import "ISURLBag.h"

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>

 {
    ISURLBag *_outputBag;
}


@property (readonly) ISURLBag *URLBag;
@property (retain, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (readonly) SSURLBagContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;


+(id)_executedNetworkRequests;
+(id)_networkCounters;
+(id)_networkSynchronyQueue;
+(id)storeFrontHeaderSuffix;
+(id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg0 ;
+(void)_addStoreFrontHeaderSuffix:(id)arg0 forBundleIdentifier:(id)arg1 ;
+(void)decrementNetworkCounterForBagContext:(id)arg0 ;
+(void)incrementNetworkCounterForBagContext:(id)arg0 ;
-(BOOL)operation:(id)arg0 shouldSetStoreFrontID:(id)arg1 ;
-(id)init;
-(id)initWithBagContext:(id)arg0 ;
-(id)uniqueKey;
-(void)_addHeadersToRequestProperties:(id)arg0 ;
-(void)_postBagDidLoadNotificationWithURLBag:(id)arg0 ;
-(void)_sendPingsForURLBag:(id)arg0 ;
-(void)_setOutputURLBag:(id)arg0 ;
-(void)operation:(id)arg0 willSendRequest:(id)arg1 ;
-(void)run;


@end


#endif