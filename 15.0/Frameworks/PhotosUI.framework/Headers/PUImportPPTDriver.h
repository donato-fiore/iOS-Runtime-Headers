// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTPPTDRIVER_H
#define PUIMPORTPPTDRIVER_H

@class NSMutableDictionary, PXImportAssetsDataSourceManager, PXImportController, PXImportMediaProvider, NSDictionary, NSString;
@protocol PXImportAssetsDataSourceManagerObserver, PUImportActionCoordinatorDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PUImportPPTImportSource.h"
#import "PUImportActionCoordinator.h"
#import "PUTabbedLibraryViewController.h"

@interface PUImportPPTDriver : NSObject <PXImportAssetsDataSourceManagerObserver, PUImportActionCoordinatorDelegate>

 {
    id *_insertDatasourceReply;
    id *_thumbnailTestReply;
    id *_importToLibraryTestReply;
    NSMutableDictionary *_extraResults;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    PXImportController *_importController;
    PUImportPPTImportSource *_currentImportSource;
    PXImportMediaProvider *_mediaProvider;
    PUImportActionCoordinator *_actionCoordinator;
    NSObject<OS_dispatch_semaphore> *_importSemaphore;
    BOOL _importComplete;
    NSInteger _iteration;
    CGFloat _startTime;
    CGFloat _endTime;
    BOOL _loadingContentStarted;
    BOOL _hasSeenAbsolulteLastThumbnailMarker;
}


@property (readonly, nonatomic) NSDictionary *additionalResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;
@property (weak) PUTabbedLibraryViewController *tabbedLibraryViewController; // ivar: _tabbedLibraryViewController
@property (copy) NSDictionary *testOptions; // ivar: _testOptions


+(id)sharedInstance;
-(CGFloat)_contentLoadingCheckInterval;
-(id)importController;
-(id)importDestinationForActionCoordinator:(id)arg0 ;
-(id)importViewController;
-(id)init;
-(id)mediaProvider;
-(id)modelBatchesForOptions:(id)arg0 ;
-(void)_removeCurrentImportSourceIfNecessary;
-(void)_updateLoadingContentState;
-(void)actionCoordinator:(id)arg0 didCompleteWithImportSession:(id)arg1 results:(id)arg2 ;
-(void)actionCoordinatorDidBeginDelete:(id)arg0 ;
-(void)actionCoordinatorDidBeginImport:(id)arg0 ;
-(void)actionCoordinatorDidCancelImport:(id)arg0 ;
-(void)actionCoordinatorDidEndDelete:(id)arg0 ;
-(void)actionCoordinatorWillBeginDelete:(id)arg0 ;
-(void)actionCoordinatorWillBeginImport:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_insertImportDataSourceWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)ppt_mediaProviderDidProcessAsset:(id)arg0 ;
-(void)ppt_performDeleteWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)ppt_performImportToLibraryWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)ppt_performThumbnailWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)ppt_removeImportDataSourceWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)signalImportToLibraryTestReply:(BOOL)arg0 ;
-(void)signalInsertDatasourceReply:(BOOL)arg0 ;
-(void)signalThumbnailTestReply:(BOOL)arg0 ;


@end


#endif