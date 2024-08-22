// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETRESOURCELOADINGDATAREQUEST_H
#define AVASSETRESOURCELOADINGDATAREQUEST_H


#import <Foundation/Foundation.h>

#import "AVAssetResourceLoadingDataRequestInternal.h"

@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}


@property (readonly, nonatomic) NSInteger currentOffset;
@property (readonly, nonatomic) NSInteger requestedLength;
@property (readonly, nonatomic) NSInteger requestedOffset;
@property (readonly, nonatomic) BOOL requestsAllDataToEndOfResource;


-(id)_loadingRequest;
-(id)description;
-(id)init;
-(id)initWithLoadingRequest:(id)arg0 requestedOffset:(NSInteger)arg1 requestedLength:(NSInteger)arg2 requestsAllDataToEndOfResource:(BOOL)arg3 canSupplyIncrementalDataImmediately:(BOOL)arg4 ;
-(struct __CFDictionary *)_requestInfo;
-(void)dealloc;
-(void)respondWithData:(id)arg0 ;


@end


#endif