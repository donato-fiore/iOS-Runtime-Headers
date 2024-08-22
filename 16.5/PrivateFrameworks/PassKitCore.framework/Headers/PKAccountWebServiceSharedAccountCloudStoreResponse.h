// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICESHAREDACCOUNTCLOUDSTORERESPONSE_H
#define PKACCOUNTWEBSERVICESHAREDACCOUNTCLOUDSTORERESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKSharedAccountCloudStore.h"

@interface PKAccountWebServiceSharedAccountCloudStoreResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKSharedAccountCloudStore *sharedAccountCloudStore; // ivar: _sharedAccountCloudStore


-(id)initWithData:(id)arg0 ;


@end


#endif