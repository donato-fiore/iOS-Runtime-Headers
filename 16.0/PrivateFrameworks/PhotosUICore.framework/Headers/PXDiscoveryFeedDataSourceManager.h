// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISCOVERYFEEDDATASOURCEMANAGER_H
#define PXDISCOVERYFEEDDATASOURCEMANAGER_H

@class PHPhotoLibrary, NSArray;
@protocol OS_dispatch_queue;


#import "PXSectionedDataSourceManager.h"
#import "PXDiscoveryFeedGenerationSession.h"
#import "PXDiscoveryFeedDataSource.h"

@interface PXDiscoveryFeedDataSourceManager : PXSectionedDataSourceManager {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_assetCollections;
    PXDiscoveryFeedGenerationSession *_session;
    atomic_flag _hasDispatchedCallToGetAdditionalItems;
}


@property (readonly, nonatomic) PXDiscoveryFeedDataSource *dataSource;


-(id)_requestMemoryWithCount:(NSInteger)arg0 beforeDate:(id)arg1 ;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_handleMoreContentLoadedWithDataSource:(id)arg0 ;
-(void)_loadMoreContentWithCompletionHandler:(id)arg0 ;
-(void)loadMoreContentWithCompletionHandler:(id)arg0 ;


@end


#endif