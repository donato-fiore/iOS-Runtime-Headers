// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSHAREDSUMMARYTRANSACTIONBUILDER_H
#define HKSHAREDSUMMARYTRANSACTIONBUILDER_H

@class NSString, NSUUID;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *transactionUUID; // ivar: _transactionUUID


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 transactionUUID:(id)arg1 ;
-(id)remoteInterface;
-(void)addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addSummaries:(id)arg0 completion:(id)arg1 ;
-(void)addedSummariesWithPackage:(id)arg0 names:(id)arg1 resultsHandler:(id)arg2 ;
-(void)allAddedSummariesWithPackage:(id)arg0 resultsHandler:(id)arg1 ;
-(void)commitAsUrgent:(BOOL)arg0 completion:(id)arg1 ;
-(void)commitWithCompletion:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)discardWithCompletion:(id)arg0 ;
-(void)removeAllSummariesWithPackage:(id)arg0 completion:(id)arg1 ;
-(void)removeSummariesWithPackage:(id)arg0 names:(id)arg1 completion:(id)arg2 ;
-(void)removeSummariesWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)reuseAllSummariesWithPackage:(id)arg0 completion:(id)arg1 ;
-(void)reuseSummariesWithPackage:(id)arg0 names:(id)arg1 completion:(id)arg2 ;
-(void)reuseSummariesWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif