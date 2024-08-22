// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETVIDEOCONTENTPROVIDERREQUEST_H
#define PXDISPLAYASSETVIDEOCONTENTPROVIDERREQUEST_H

@class NSArray;
@protocol PXDisplayAsset, PXDisplayAssetVideoContentProviderRequestDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXMediaProvider.h"

@interface PXDisplayAssetVideoContentProviderRequest : NSObject {
    NSInteger _requestID;
    BOOL _isCancelled;
    BOOL _shouldDownloadTimeRange;
    NSInteger _retriesAfterTransientErrorCount;
}


@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (weak, nonatomic) NSObject<PXDisplayAssetVideoContentProviderRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat loadingProgress; // ivar: _loadingProgress
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // ivar: _loadingQueue
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) BOOL requestURLOnly; // ivar: _requestURLOnly
@property (readonly, nonatomic) NSArray *strategies; // ivar: _strategies


+(id)startRequestWithAsset:(id)arg0 mediaProvider:(id)arg1 strategies:(id)arg2 priority:(NSInteger)arg3 requestURLOnly:(BOOL)arg4 delegate:(id)arg5 loadingQueue:(id)arg6 ;
-(BOOL)_isTransientError:(id)arg0 ;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 strategies:(id)arg2 priority:(NSInteger)arg3 requestURLOnly:(BOOL)arg4 delegate:(id)arg5 loadingQueue:(id)arg6 ;
-(void)_handleLoadedPlayerItem:(id)arg0 videoURL:(id)arg1 info:(id)arg2 strategyAtIndex:(NSInteger)arg3 ;
-(void)_handleLoadingProgress:(CGFloat)arg0 ;
-(void)_loadMediaWithStrategyAtIndex:(NSInteger)arg0 ;
-(void)_start;
-(void)cancel;
-(void)dealloc;


@end


#endif