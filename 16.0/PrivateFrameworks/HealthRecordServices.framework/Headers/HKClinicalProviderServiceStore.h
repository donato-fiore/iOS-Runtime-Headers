// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALPROVIDERSERVICESTORE_H
#define HKCLINICALPROVIDERSERVICESTORE_H

@class HKTaskServerProxyProvider, NSString;
@protocol HKClinicalProviderServiceStoreClientInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKClinicalProviderServiceStore : NSObject <HKClinicalProviderServiceStoreClientInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)cancelInFlightSearchQueriesWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
-(void)fetchLogoDataForBrand:(id)arg0 scaleKey:(id)arg1 completion:(id)arg2 ;
-(void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg0 completion:(id)arg1 ;
-(void)fetchRemoteGatewayWithExternalID:(id)arg0 batchID:(id)arg1 completion:(id)arg2 ;
-(void)fetchRemoteProviderWithExternalID:(id)arg0 batchID:(id)arg1 completion:(id)arg2 ;
-(void)fetchRemoteSearchResultsPageForQuery:(id)arg0 completion:(id)arg1 ;


@end


#endif