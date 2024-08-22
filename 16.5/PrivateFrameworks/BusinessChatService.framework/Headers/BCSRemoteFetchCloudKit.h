// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSREMOTEFETCHCLOUDKIT_H
#define BCSREMOTEFETCHCLOUDKIT_H

@class CKContainer, NSString;
@protocol BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSMegashardRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating, BCSICloudServerEnvironmentProtocol, BCSCloudKitDatabaseProtocol, BCSQueryOperationProtocol, BCSCloudKitQueryProviding, BCSQueryOperationFactoryProtocol, BCSCoalesceHelperProtocol, BCSBloomFilterExtractorProtocol, BCSOperationGroupFactoryProtocol, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSRemoteFetchCloudKit : NSObject <BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSMegashardRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating>

 {
    id<BCSICloudServerEnvironmentProtocol> *_environment;
    id<BCSCloudKitDatabaseProtocol> *_database;
    id<BCSQueryOperationProtocol> *_queryOperation;
    id<BCSCloudKitQueryProviding> *_queryProvider;
    id<BCSQueryOperationFactoryProtocol> *_queryOperationFactory;
    CKContainer *_databaseContainer;
    id<BCSCoalesceHelperProtocol> *_coalesceHelper;
    id<BCSBloomFilterExtractorProtocol> *_bloomFilterExtractor;
    id<BCSOperationGroupFactoryProtocol> *_operationGroupFactory;
    id<BCSMetricFactoryProtocol> *_metricFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 database:(id)arg1 databaseContainer:(id)arg2 queryOperationFactory:(id)arg3 coalesceHelper:(id)arg4 bloomFilterExtractor:(id)arg5 operationGroupFactory:(id)arg6 metricFactory:(id)arg7 ;
-(id)shardItemFromURL:(id)arg0 type:(NSInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)fetchConfigItemWithType:(NSInteger)arg0 clientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchConfigItemWithType:(NSInteger)arg0 clientBundleID:(id)arg1 xpcActivity:(id)arg2 completion:(id)arg3 ;
-(void)fetchItemsWithBucketStartIndex:(NSInteger)arg0 endIndex:(NSInteger)arg1 type:(NSInteger)arg2 forClientBundleID:(id)arg3 completion:(id)arg4 ;
-(void)fetchMegashardItemWithType:(NSInteger)arg0 clientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchMegashardItemWithType:(NSInteger)arg0 clientBundleID:(id)arg1 xpcActivity:(id)arg2 completion:(id)arg3 ;
-(void)fetchShardMatching:(id)arg0 clientBundleID:(id)arg1 completion:(id)arg2 ;


@end


#endif