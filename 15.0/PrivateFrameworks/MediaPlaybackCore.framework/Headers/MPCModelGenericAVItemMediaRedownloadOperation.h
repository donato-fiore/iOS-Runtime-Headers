// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELGENERICAVITEMMEDIAREDOWNLOADOPERATION_H
#define MPCMODELGENERICAVITEMMEDIAREDOWNLOADOPERATION_H

@class MPAsyncOperation, ICMediaRedownloadRequest, ICStoreRequestContext;
@protocol OS_dispatch_queue;


#import "MPCModelGenericAVItemAssetLoadProperties.h"

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICMediaRedownloadRequest *_mediaDownloadRequest;
}


@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // ivar: _assetLoadProperties
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)init;
-(void)cancel;
-(void)execute;


@end


#endif