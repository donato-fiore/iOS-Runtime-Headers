// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDPHOTOKITADDCLIENT_H
#define PLASSETSDPHOTOKITADDCLIENT_H

@protocol PLAssetsdPhotoKitChangesRequestClient;


#import "PLAssetsdBaseClient.h"

@interface PLAssetsdPhotoKitAddClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>





-(BOOL)sendChangesRequest:(id)arg0 error:(*id)arg1 ;
-(id)clientName;
-(void)sendChangesRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif