// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCCLOUDASSETANNOTATIONMANAGER_H
#define BCCLOUDASSETANNOTATIONMANAGER_H

@class NSURL, NSString;
@protocol BCCloudDataSyncManagerDelegate, BCCloudAssetAnnotationManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BCCloudDataSource.h"
#import "BCCloudKitController.h"
#import "BCCloudDataManager.h"
#import "BCCloudDataSyncManager.h"

@interface BCCloudAssetAnnotationManager : NSObject <BCCloudDataSyncManagerDelegate, BCCloudAssetAnnotationManager>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (retain, nonatomic) BCCloudDataSource *annotationsDataSource; // ivar: _annotationsDataSource
@property (retain, nonatomic) NSURL *ckAssetStoreDirectory; // ivar: _ckAssetStoreDirectory
@property (weak, nonatomic) BCCloudKitController *cloudKitController; // ivar: _cloudKitController
@property (retain, nonatomic) BCCloudDataManager *dataManager; // ivar: _dataManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableCloudSync; // ivar: _enableCloudSync
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager; // ivar: _syncManager


-(id)entityName;
-(id)fileURLForCachingCKAssetWithAssetID:(id)arg0 ;
-(id)initWithCloudDataSource:(id)arg0 cloudKitController:(id)arg1 ;
-(void)assetWithID:(id)arg0 updatedAnnotations:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)getAnnotationChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)signalSyncToCKForSyncManager:(id)arg0 ;
-(void)syncManager:(id)arg0 failedRecordIDs:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 removeCloudDataForIDs:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 resolveConflictsForRecords:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 startSyncToCKWithCompletion:(id)arg1 ;
-(void)syncManager:(id)arg0 updateSyncGenerationFromCloudData:(id)arg1 completion:(id)arg2 ;


@end


#endif