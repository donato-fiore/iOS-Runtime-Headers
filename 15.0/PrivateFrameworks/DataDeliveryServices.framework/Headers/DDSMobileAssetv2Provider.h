// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSMOBILEASSETV2PROVIDER_H
#define DDSMOBILEASSETV2PROVIDER_H

@class NSString, NSMutableDictionary;
@protocol DDSAssetProviding, DDSAssetQueryResultCaching, DDSAssetProvidingDelegate;

#import <Foundation/Foundation.h>


@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding>



@property (retain, nonatomic) NSObject<DDSAssetQueryResultCaching> *assetQueryResultsCache; // ivar: _assetQueryResultsCache
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<DDSAssetProvidingDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *downloadStateByAssetID; // ivar: _downloadStateByAssetID
@property (nonatomic) BOOL encounteredAssertionUpdateError; // ivar: _encounteredAssertionUpdateError
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *remainingAssetsByQueryId; // ivar: _remainingAssetsByQueryId
@property (readonly) Class superclass;


+(NSInteger)supportedCompatibilityVersion;
+(id)latestAssetsOnlyFromAssets:(id)arg0 ;
+(id)latestBetweenAssetA:(id)arg0 AssetB:(id)arg1 ;
-(BOOL)shouldMatchAttributeValue:(id)arg0 givenValue:(id)arg1 ;
-(id)allContentItemsMatchingQuery:(id)arg0 error:(*id)arg1 ;
-(id)assetsForQuery:(id)arg0 errorPtr:(*id)arg1 ;
-(id)contentItemsFromAssets:(id)arg0 matchingFilter:(id)arg1 ;
-(id)downloadOptionsForCatalogWithType:(id)arg0 discretionaryDownload:(BOOL)arg1 ;
-(id)downloadOptionsForPolicy:(id)arg0 discretionaryDownload:(BOOL)arg1 ;
-(id)init;
-(id)performAssetsForQuery:(id)arg0 errorPtr:(*id)arg1 ;
-(void)beginDownloadForAssertion:(id)arg0 discretionaryDownload:(BOOL)arg1 handler:(id)arg2 ;
-(void)beginDownloadForAssertions:(id)arg0 discretionaryDownload:(BOOL)arg1 ;
-(void)beginDownloadForAssets:(id)arg0 withPolicy:(id)arg1 discretionaryDownload:(BOOL)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(void)didChangeDownloadState:(NSUInteger)arg0 forAsset:(id)arg1 ;
-(void)didCompleteDownloadForAssertion:(id)arg0 error:(id)arg1 ;
-(void)didUpdateCatalogWithError:(id)arg0 ;
-(void)removeAssets:(id)arg0 ;
-(void)removeAssetsForAssertions:(id)arg0 ;
-(void)removeOldAssetsForAssertions:(id)arg0 ;
-(void)serverDidUpdateAssetsWithType:(id)arg0 ;
-(void)updateCatalogForAssetTypes:(id)arg0 discretionaryDownload:(BOOL)arg1 withCompletion:(id)arg2 ;


@end


#endif