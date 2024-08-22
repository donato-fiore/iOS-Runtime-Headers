// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCASSETFETCHER_H
#define DCASSETFETCHER_H


#import <Foundation/Foundation.h>


@interface DCAssetFetcher : NSObject



+(id)sharedFetcher;
-(id)_assetQuery;
-(id)_validateAsset:(id)arg0 error:(*id)arg1 ;
-(void)_fetchAssetWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleMissingMetadataWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_handleSuccessForQuery:(id)arg0 completion:(id)arg1 ;
-(void)_queryMetadataWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchPublicKeyAssetWithCompletion:(id)arg0 ;
-(void)initiateMetadataFetchIgnoringCachesWithCompletion:(id)arg0 ;


@end


#endif