// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMARKETINGITEMTASK_H
#define AMSMARKETINGITEMTASK_H

@class ACAccount, NSString, NSDictionary;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSMarketingItemTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (copy, nonatomic) NSDictionary *contextInfo; // ivar: _contextInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hydrateRelatedContent; // ivar: _hydrateRelatedContent
@property (nonatomic) BOOL includeMediaAssets; // ivar: _includeMediaAssets
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *offerHints; // ivar: _offerHints
@property (readonly, nonatomic) NSString *placement; // ivar: _placement
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;
-(id)_fetchItems;
-(id)_fetchItemsFromURL:(id)arg0 ;
-(id)_processMediaResultFromPromise:(id)arg0 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 placement:(id)arg4 serviceType:(id)arg5 ;
-(id)initWithBag:(id)arg0 clientIdentifier:(id)arg1 clientVersion:(id)arg2 placement:(id)arg3 serviceType:(id)arg4 ;
-(id)perform;
-(id)performWithFetchOnly;


@end


#endif