// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPREHEATITEM_H
#define PLPREHEATITEM_H

@class NSString, PLAssetsdCloudClient;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PLPreheatItem : NSObject {
    NSObject<OS_dispatch_queue> *_CPLPrefetchingIsolationQueue;
    NSString *_CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    BOOL _CPLPrefetchingCancelled;
    uint8_t _requestCount;
    PLAssetsdCloudClient *_cloudClient;
}


@property (readonly, nonatomic) BOOL CPLPrefetching; // ivar: _CPLPrefetching
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup; // ivar: _CPLPrefetchingWaitGroup
@property BOOL CPLPrefetchingWasCancelled; // ivar: _CPLPrefetchingWasCancelled
@property (readonly, copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (nonatomic) unsigned short bestFormat; // ivar: _bestFormat
@property (nonatomic) BOOL cachingAllowed; // ivar: _cachingAllowed
@property BOOL didCompleteCPLPrefetchingWithSuccessOrError; // ivar: _didCompleteCPLPrefetchingWithSuccessOrError
@property (readonly, nonatomic) unsigned short format; // ivar: _format
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic) CGSize optimalSourcePixelSize; // ivar: _optimalSourcePixelSize
@property (retain) NSString *virtualCPLTaskIdentifier; // ivar: _virtualCPLTaskIdentifier


-(BOOL)addImageHandler:(id)arg0 ;
-(BOOL)isCancelled;
-(BOOL)isRetained;
-(NSInteger)decrementRequestCount;
-(NSInteger)incrementRequestCount;
-(id)cachedImage:(*BOOL)arg0 ;
-(id)cachedImageIfAvailable:(*BOOL)arg0 ;
-(id)description;
-(id)initForCPLPrefetchingWithAssetUUID:(id)arg0 format:(unsigned short)arg1 assetsdClient:(id)arg2 ;
-(void)cancelPreheatRequestWithCompletionHandler:(id)arg0 ;
-(void)startPreheatRequestWithCompletionHandler:(id)arg0 ;


@end


#endif