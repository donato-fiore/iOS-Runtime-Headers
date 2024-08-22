// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDPHOTOKITCLIENT_H
#define PLASSETSDPHOTOKITCLIENT_H

@protocol PLAssetsdPhotoKitChangesRequestClient;


#import "PLAssetsdBaseClient.h"

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>





+(BOOL)inTransactionProxy;
+(BOOL)sendChangesRequest:(id)arg0 usingProxyFactory:(id)arg1 error:(*id)arg2 ;
+(void)sendChangesRequest:(id)arg0 usingProxyFactory:(id)arg1 reply:(id)arg2 ;
+(void)setInTransactionProxy:(BOOL)arg0 queue:(id)arg1 ;
-(BOOL)sendChangesRequest:(id)arg0 error:(*id)arg1 ;
-(id)clientName;
-(id)getUUIDsForCloudIdentifiers:(id)arg0 error:(*id)arg1 ;
-(void)sendChangesRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif