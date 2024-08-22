// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTMEDIALOADINGCOORDINATOR_H
#define PXIMPORTMEDIALOADINGCOORDINATOR_H

@class NSString, NSMutableArray;
@protocol PXImportAssetsDataSourceManagerObserver, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXImportAssetsDataSource.h"
#import "PXImportAssetsDataSourceManager.h"
#import "PXImportController.h"

@interface PXImportMediaLoadingCoordinator : PXObservable <PXImportAssetsDataSourceManagerObserver>

 {
    NSObject<OS_dispatch_queue> *_modelQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
}


@property (nonatomic) NSInteger completedDataSourceIdentifier; // ivar: _completedDataSourceIdentifier
@property (retain, nonatomic) PXImportAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXImportAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PXImportController *importController; // ivar: _importController
@property (nonatomic, setter=setPaused:) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *thumbnailWorkItemUuids; // ivar: _thumbnailWorkItemUuids


-(id)dequeueNextThumbnailWorkItem;
-(id)initWithImportController:(id)arg0 ;
-(void)_processItemIfPossible;
-(void)handleNewDataSource:(id)arg0 ;
-(void)mediaProviderThumbnailingBecameIdle:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)shutdown;


@end


#endif