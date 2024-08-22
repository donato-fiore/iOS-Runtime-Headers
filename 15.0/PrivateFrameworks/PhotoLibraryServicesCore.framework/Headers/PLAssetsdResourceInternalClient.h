// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDRESOURCEINTERNALCLIENT_H
#define PLASSETSDRESOURCEINTERNALCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient



-(void)batchSaveAssetsWithJobDictionaries:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestMasterThumbnailForAssetUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif