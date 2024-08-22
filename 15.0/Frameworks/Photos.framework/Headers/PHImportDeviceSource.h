// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTDEVICESOURCE_H
#define PHIMPORTDEVICESOURCE_H

@class NSMutableArray, NSMapTable, NSMutableDictionary, NSArray, ICCameraDevice, NSString, NSProgress, NSMutableSet;
@protocol ICCameraDeviceDelegate, OS_dispatch_queue;


#import "PHImportSource.h"
#import "ICCameraDeviceRemovedItemsCoalescer.h"

@interface PHImportDeviceSource : PHImportSource <ICCameraDeviceDelegate>

 {
    NSMutableArray *_assetThumbnailRequests;
    BOOL _waitingForAssetThumbnailRequest;
    NSMutableArray *_assetMetadataRequests;
    BOOL _waitingForAssetMetadataRequest;
    NSMutableArray *_assetThumbnailHighPriorityRequests;
    NSMapTable *_assetDataRequestsByCameraItem;
    NSObject<OS_dispatch_queue> *_assetDataRequestQueue;
}


@property (retain, nonatomic) NSMutableDictionary *assetByCameraFile; // ivar: _assetByCameraFile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetByCameraFileAccess; // ivar: _assetByCameraFileAccess
@property (retain, nonatomic) NSArray *avchdAssets; // ivar: _avchdAssets
@property (retain) ICCameraDevice *camera; // ivar: _camera
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deleteEjectQueue; // ivar: _deleteEjectQueue
@property (retain, nonatomic) NSProgress *deleteProgress; // ivar: _deleteProgress
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL ejectAfterDelete; // ivar: _ejectAfterDelete
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEjecting; // ivar: _isEjecting
@property (retain, nonatomic) ICCameraDeviceRemovedItemsCoalescer *removalCoalescer; // ivar: _removalCoalescer
@property (retain, nonatomic) NSMutableSet *removedCameraFiles; // ivar: _removedCameraFiles
@property (readonly) Class superclass;


-(BOOL)canAutolaunch;
-(BOOL)canDeleteContent;
-(BOOL)canReference;
-(BOOL)containsSupportedMedia:(*id)arg0 ;
-(BOOL)isAppleDevice;
-(BOOL)isAvailable;
-(BOOL)isCamera;
-(BOOL)isConnectedDevice;
-(BOOL)isDeleting;
-(BOOL)isOptimizedCPLStorage;
-(id)assetsByProcessingItem:(id)arg0 ;
-(id)cameraFilesForAssets:(id)arg0 ;
-(id)deleteImportAssets:(id)arg0 isConfirmed:(BOOL)arg1 atEnd:(id)arg2 ;
-(id)importAssetForCameraFile:(id)arg0 create:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)name;
-(id)path;
-(id)productKind;
-(id)uuid;
-(id)volumePath;
-(struct CGImage *)icon;
-(void)beginProcessingWithCompletion:(id)arg0 ;
-(void)cameraDevice:(id)arg0 didAddItems:(id)arg1 ;
-(void)cameraDevice:(id)arg0 didReceiveMetadata:(id)arg1 forItem:(id)arg2 error:(id)arg3 ;
-(void)cameraDevice:(id)arg0 didReceivePTPEvent:(id)arg1 ;
-(void)cameraDevice:(id)arg0 didReceiveThumbnail:(struct CGImage *)arg1 forItem:(id)arg2 error:(id)arg3 ;
-(void)cameraDevice:(id)arg0 didRemoveItems:(id)arg1 ;
-(void)cameraDevice:(id)arg0 didRenameItems:(id)arg1 ;
-(void)cameraDevice:(id)arg0 setAccessState:(unsigned char)arg1 ;
-(void)cameraDeviceDidChangeCapability:(id)arg0 ;
-(void)cameraDeviceDidEnableAccessRestriction:(id)arg0 ;
-(void)cameraDeviceDidRemoveAccessRestriction:(id)arg0 ;
-(void)device:(id)arg0 didCloseSessionWithError:(id)arg1 ;
-(void)device:(id)arg0 didEncounterError:(id)arg1 ;
-(void)device:(id)arg0 didOpenSessionWithError:(id)arg1 ;
-(void)deviceDidBecomeReady:(id)arg0 ;
-(void)deviceDidBecomeReadyWithCompleteContentCatalog:(id)arg0 ;
-(void)deviceFinishedEnumeratingItems:(id)arg0 ;
-(void)didRemoveDevice:(id)arg0 ;
-(void)eject;
-(void)fetchMetadataForRequest:(id)arg0 importAsset:(id)arg1 completion:(id)arg2 ;
-(void)fetchMetadataUsingRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchThumbnailDataUsingRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeAssetForCameraFile:(id)arg0 ;
-(void)sendNextMetadataRequest;
-(void)sendNextThumbnailRequest;


@end


#endif