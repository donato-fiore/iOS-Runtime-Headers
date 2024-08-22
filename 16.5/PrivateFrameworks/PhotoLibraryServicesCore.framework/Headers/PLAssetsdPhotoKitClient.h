// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDPHOTOKITCLIENT_H
#define PLASSETSDPHOTOKITCLIENT_H

@protocol PLAssetsdPhotoKitChangesRequestClient;


#import "PLAssetsdBaseClient.h"

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>





+(BOOL)inTransactionProxy;
+(BOOL)sendChangesRequest:(id)arg0 usingProxyFactory:(id)arg1 error:(*id)arg2 ;
+(void)sendChangesRequest:(id)arg0 usingProxyFactory:(id)arg1 reply:(id)arg2 ;
+(void)setInTransactionProxy:(BOOL)arg0 queue:(id)arg1 ;
-(BOOL)processUniversalSearchJITForAssetUUID:(id)arg0 processingTypes:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)sendChangesRequest:(id)arg0 error:(*id)arg1 ;
-(id)clientName;
-(id)getUUIDsForAssetObjectIDs:(id)arg0 filterPredicate:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)getUUIDsForCloudIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)arg0 bundleID:(id)arg1 processingTypes:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)sendChangesRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif