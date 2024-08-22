// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAVASSETKEYFETCHOPERATION_H
#define FCAVASSETKEYFETCHOPERATION_H

@class NSData, AVPersistableContentKeyRequest, NSURL;
@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;


#import "FCOperation.h"

@interface FCAVAssetKeyFetchOperation : FCOperation {
    NSData *_resultCKCData;
    id *_fetchCompletionHandler;
    AVPersistableContentKeyRequest *_keyRequest;
    NSURL *_keyURI;
    id<FCAVAssetKeyServiceType> *_service;
    id<FCAVAssetKeyCacheType> *_cache;
}




-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(NSUInteger)maxRetries;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif