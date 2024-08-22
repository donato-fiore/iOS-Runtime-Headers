// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCAMERADEVICE_H
#define ICCAMERADEVICE_H

@class NSString, NSArray, NSMutableArray, NSMutableSet, NSXPCConnection, NSXPCListenerEndpoint, NSNumber, NSMutableIndexSet, NSMutableOrderedSet, NSProgress;
@protocol OS_dispatch_queue;


#import "ICDevice.h"

@interface ICCameraDevice : ICDevice {
    os_unfair_lock_s _mediaFilesLock;
    os_unfair_lock_s _contentsLock;
    NSObject<OS_dispatch_queue> *_devCommandQueue;
    NSObject<OS_dispatch_queue> *_devNotificationQueue;
    NSUInteger _contentCatalogPercentCompleted;
}


@property (nonatomic, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice; // ivar: _accessRestrictedAppleDevice
@property (nonatomic) BOOL allowsSyncingClock; // ivar: _allowsSyncingClock
@property (nonatomic) NSUInteger appleRelatedUUIDSupport; // ivar: _appleRelatedUUIDSupport
@property (nonatomic) BOOL basicMediaModel; // ivar: _basicMediaModel
@property (nonatomic) NSUInteger batteryLevel; // ivar: _batteryLevel
@property (nonatomic) BOOL batteryLevelAvailable; // ivar: _batteryLevelAvailable
@property (nonatomic) BOOL beingEjected; // ivar: _beingEjected
@property (readonly) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSUInteger contentCatalogPercentCompleted;
@property (nonatomic) BOOL contentReceived; // ivar: _contentReceived
@property (readonly, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSMutableArray *convertedMediaFiles; // ivar: _convertedMediaFiles
@property (retain, nonatomic) NSMutableSet *devCapabilities; // ivar: _devCapabilities
@property (retain, nonatomic) NSXPCConnection *devConnection; // ivar: _devConnection
@property (copy, nonatomic) id *devConnectionFailureBlock; // ivar: _devConnectionFailureBlock
@property (retain, nonatomic) NSMutableArray *devContents; // ivar: _devContents
@property (retain, nonatomic) NSXPCListenerEndpoint *devEndpoint; // ivar: _devEndpoint
@property NSUInteger devFailureCount; // ivar: _devFailureCount
@property (retain, nonatomic) NSMutableArray *devMediaFiles; // ivar: _devMediaFiles
@property NSUInteger devMediaPresentation; // ivar: _devMediaPresentation
@property (copy, nonatomic) NSString *devProductType; // ivar: _devProductType
@property NSUInteger deviceAccessRestriction; // ivar: _deviceAccessRestriction
@property (readonly) NSString *deviceClass; // ivar: _deviceClass
@property (readonly) NSString *deviceColor; // ivar: _deviceColor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceCommandQueue;
@property (readonly) NSString *deviceEnclosureColor; // ivar: _deviceEnclosureColor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceNotificationQueue;
@property (readonly) NSNumber *devicePairedState; // ivar: _devicePairedState
@property (nonatomic) CGFloat downloadCancelTimestamp; // ivar: _downloadCancelTimestamp
@property (nonatomic, getter=isEjectable) BOOL ejectable; // ivar: _ejectable
@property (retain, nonatomic) NSMutableIndexSet *enumeratedObjectIndexes; // ivar: _enumeratedObjectIndexes
@property (nonatomic) NSInteger enumerationOrder; // ivar: _enumerationOrder
@property (nonatomic) NSUInteger estMediaObjectCount; // ivar: _estMediaObjectCount
@property NSUInteger estimatedCountOfMediafiles; // ivar: _estimatedCountOfMediafiles
@property (nonatomic) BOOL iCloudPhotosEnabled; // ivar: _iCloudPhotosEnabled
@property (retain, nonatomic) NSMutableOrderedSet *indexedCameraFiles; // ivar: _indexedCameraFiles
@property (retain, nonatomic) NSMutableOrderedSet *indexedCameraFolders; // ivar: _indexedCameraFolders
@property (readonly) BOOL isEnumeratingContent; // ivar: _isEnumeratingContent
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSArray *mediaFiles;
@property (nonatomic) NSUInteger mediaObjectCount; // ivar: _mediaObjectCount
@property (nonatomic) NSUInteger mediaPresentation;
@property (readonly, nonatomic) NSString *mountPoint; // ivar: _mountPoint
@property (readonly, nonatomic) NSUInteger numberOfDownloadableItems;
@property (retain, nonatomic) NSMutableArray *originalMediaFiles; // ivar: _originalMediaFiles
@property NSInteger preflightCountOfObjects; // ivar: _preflightCountOfObjects
@property (nonatomic) BOOL preheatMetadata; // ivar: _preheatMetadata
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) id *ptpEventHandler; // ivar: _ptpEventHandler
@property (nonatomic) BOOL ready; // ivar: _ready
@property (readonly) NSArray *supportedSidecarFiles; // ivar: _supportedSidecarFiles
@property (readonly, nonatomic) BOOL tetheredCaptureEnabled; // ivar: _tetheredCaptureEnabled
@property (readonly) CGFloat timeOffset; // ivar: _timeOffset
@property (retain, nonatomic) NSMutableArray *universalMediaFiles; // ivar: _universalMediaFiles


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)addMediaFile:(id)arg0 ;
-(BOOL)addMediaFiles:(id)arg0 ;
-(BOOL)containsRestrictedStorage;
-(BOOL)legacyDevice;
-(BOOL)supportsMediaFormatCatalog;
-(BOOL)updateMediaPresentation;
-(NSInteger)stitchMedia:(id)arg0 withMedia:(id)arg1 ;
-(NSUInteger)countOfObjects;
-(NSUInteger)estimatedNumberOfDownloadableItems;
-(id)addCameraFiles:(id)arg0 ;
-(id)cameraFileWithObjectID:(NSUInteger)arg0 ;
-(id)cameraFolderWithObjectID:(NSUInteger)arg0 ;
-(id)description;
-(id)filesOfType:(id)arg0 ;
-(id)init;
-(id)ownerMedia:(id)arg0 withMedia:(id)arg1 ;
-(id)relateGroupedMedia:(id)arg0 ;
-(id)relateLegacyMedia:(id)arg0 ;
-(id)relateMedia:(id)arg0 ;
-(id)remoteCamera;
-(id)remoteCameraWithFailureBlock:(id)arg0 ;
// -(id)requestDeleteFiles:(id)arg0 deleteFailed:(id)arg1 completion:(unk)arg2  ;
-(void)addCameraFileToIndex:(id)arg0 ;
-(void)addCameraFolderToIndex:(id)arg0 ;
-(void)addEstimatedNumberOfDownloadableItems:(NSInteger)arg0 ;
-(void)addFolder:(id)arg0 ;
-(void)addNumberOfDownloadableItems:(NSInteger)arg0 ;
-(void)blendMedia:(id)arg0 ofLength:(int)arg1 withMedia:(id)arg2 ofLength:(int)arg3 ;
-(void)cancelDownload;
-(void)dealloc;
-(void)discardCameraFiles:(id)arg0 ;
-(void)dispatchAsyncForOperationType:(NSInteger)arg0 block:(id)arg1 ;
-(void)executeConnectionFailureBlock;
-(void)grindMedia:(id)arg0 index:(*int)arg1 file:(id)arg2 ;
-(void)handleCommandCompletionNotification:(id)arg0 ;
-(void)handleImageCaptureEventNotification:(id)arg0 ;
-(void)handlePtpEvent:(id)arg0 ;
-(void)lockContents;
-(void)lockMediaFiles;
-(void)notifyDelegateOfAddedItem:(id)arg0 ;
-(void)notifyDelegateOfAddedItems:(id)arg0 progress:(id)arg1 ;
-(void)popMediaFiles:(id)arg0 ;
-(void)pushMediaFiles:(id)arg0 ;
-(void)removeCameraFileFromIndex:(id)arg0 ;
-(void)removeCameraFolderFromIndex:(id)arg0 ;
-(void)removeFolder:(id)arg0 ;
-(void)removeMediaFile:(id)arg0 ;
-(void)removeObjects:(id)arg0 ;
-(void)requestCloseSession;
-(void)requestCloseSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestDeleteFiles:(id)arg0 ;
-(void)requestDownloadFile:(id)arg0 options:(id)arg1 downloadDelegate:(id)arg2 didDownloadSelector:(SEL)arg3 contextInfo:(*void)arg4 ;
-(void)requestEject;
-(void)requestOpenSession;
-(void)requestOpenSessionWithOptions:(id)arg0 ;
-(void)requestOpenSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestSendPTPCommand:(id)arg0 outData:(id)arg1 completion:(id)arg2 ;
-(void)requestSyncClock;
-(void)resetAccessRestriction;
-(void)setAccessRestriction:(NSUInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsAccessRestrictedAppleDevice:(BOOL)arg0 ;
-(void)setPtpEventForwarding:(BOOL)arg0 ;
-(void)storageAvailable;
-(void)unlockContents;
-(void)unlockMediaFiles;
-(void)updateAccessRestriction;
-(void)updateContentCatalogPercentCompleted;
-(void)updateMediaFilesCount:(id)arg0 ;


@end


#endif