// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHAREDSUMMARYTRANSACTIONBUILDERSERVER_H
#define HDSHAREDSUMMARYTRANSACTIONBUILDERSERVER_H

@class HKSharedSummaryTransactionBuilderTaskConfiguration, NSString;
@protocol HKSharedSummaryTransactionBuilderServerInterface;


#import "HDStandardTaskServer.h"
#import "HDSharedSummaryTransactionEntity.h"

@interface HDSharedSummaryTransactionBuilderServer : HDStandardTaskServer <HKSharedSummaryTransactionBuilderServerInterface>

 {
    HKSharedSummaryTransactionBuilderTaskConfiguration *_configuration;
    HDSharedSummaryTransactionEntity *_transactionEntity;
    BOOL _committed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)remote_addSummaries:(id)arg0 completion:(id)arg1 ;
-(void)remote_addedSummariesWithPackage:(id)arg0 names:(id)arg1 resultsHandler:(id)arg2 ;
-(void)remote_allAddedSummariesWithPackage:(id)arg0 resultsHandler:(id)arg1 ;
-(void)remote_commitAsUrgent:(BOOL)arg0 completion:(id)arg1 ;
-(void)remote_discardWithCompletion:(id)arg0 ;
-(void)remote_removeAllSummariesWithPackage:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeSummariesWithPackage:(id)arg0 names:(id)arg1 completion:(id)arg2 ;
-(void)remote_removeSummariesWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)remote_reuseAllSummariesWithPackage:(id)arg0 completion:(id)arg1 ;
-(void)remote_reuseSummariesWithPackage:(id)arg0 names:(id)arg1 completion:(id)arg2 ;
-(void)remote_reuseSummariesWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif