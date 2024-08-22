// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCAMERADEVICE_H
#define ICCAMERADEVICE_H

@class NSString, NSArray, NSMutableArray, NSProgress, NSMutableSet, NSXPCConnection, NSXPCListenerEndpoint, NSNumber, NSMutableOrderedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "ICDevice.h"

@interface ICCameraDevice : ICDevice {
    BOOL _iCloudPhotosEnabled;
    NSUInteger _iCloudPhotosOptimizeStorageState;
    BOOL _isEnumeratingContent;
    NSUInteger _appleRelatedUUIDSupport;
}


@property (nonatomic, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice; // ivar: _accessRestrictedAppleDevice
@property (nonatomic) BOOL allowsSyncingClock; // ivar: _allowsSyncingClock
@property (nonatomic) NSUInteger appleRelatedUUIDSupport;
@property (nonatomic) BOOL basicMediaModel; // ivar: _basicMediaModel
@property (nonatomic) NSUInteger batteryLevel; // ivar: _batteryLevel
@property (nonatomic) BOOL batteryLevelAvailable; // ivar: _batteryLevelAvailable
@property (nonatomic) BOOL beingEjected; // ivar: _beingEjected
@property (readonly) NSString *buildVersion;
@property (retain, nonatomic) *CGImage cameraDeviceIcon; // ivar: _cameraDeviceIcon
@property (readonly, nonatomic) NSUInteger contentCatalogPercentCompleted;
@property (nonatomic) BOOL contentReceived; // ivar: _contentReceived
@property (readonly, nonatomic) NSArray *contents;
@property (retain) NSMutableArray *convertedMediaFiles; // ivar: _convertedMediaFiles
@property (retain, nonatomic) NSProgress *deleteProgress; // ivar: _deleteProgress
@property NSUInteger devAccessRestriction; // ivar: _devAccessRestriction
@property (retain, nonatomic) NSMutableSet *devCapabilities; // ivar: _devCapabilities
@property (retain) NSObject<OS_dispatch_queue> *devCommandQueue; // ivar: _devCommandQueue
@property (retain, nonatomic) NSXPCConnection *devConnection; // ivar: _devConnection
@property (copy, nonatomic) id *devConnectionFailureBlock; // ivar: _devConnectionFailureBlock
@property (nonatomic) NSUInteger devContentCatalogPercentCompleted; // ivar: _devContentCatalogPercentCompleted
@property (retain, nonatomic) NSMutableArray *devContents; // ivar: _devContents
@property (retain, nonatomic) NSXPCListenerEndpoint *devEndpoint; // ivar: _devEndpoint
@property NSUInteger devFailureCount; // ivar: _devFailureCount
@property (retain, nonatomic) NSMutableArray *devMediaFiles; // ivar: _devMediaFiles
@property NSUInteger devMediaPresentation; // ivar: _devMediaPresentation
@property (retain) NSObject<OS_dispatch_queue> *devNotificationQueue; // ivar: _devNotificationQueue
@property (copy, nonatomic) NSString *devProductType; // ivar: _devProductType
@property (nonatomic) NSUInteger deviceAccessRestriction; // ivar: _deviceAccessRestriction
@property (readonly) NSString *deviceClass;
@property (readonly) NSString *deviceColor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceCommandQueue;
@property (readonly) NSString *deviceEnclosureColor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceNotificationQueue;
@property (readonly) NSNumber *devicePairedState;
@property (retain, nonatomic) NSProgress *downloadProgress; // ivar: _downloadProgress
@property (nonatomic, getter=isEjectable) BOOL ejectable; // ivar: _ejectable
@property (nonatomic) NSInteger enumerationOrder; // ivar: _enumerationOrder
@property (readonly, nonatomic) NSUInteger estimatedNumberOfDownloadableItems;
@property (readonly, nonatomic) BOOL iCloudPhotosEnabled;
@property (readonly, nonatomic) NSUInteger iCloudPhotosOptimizeStorageState;
@property (retain, nonatomic) NSMutableOrderedSet *indexedCameraFiles; // ivar: _indexedCameraFiles
@property (retain, nonatomic) NSMutableOrderedSet *indexedCameraFolders; // ivar: _indexedCameraFolders
@property (readonly) BOOL isEnumeratingContent;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSArray *mediaFiles;
@property os_unfair_lock_s mediaLock; // ivar: _mediaLock
@property (nonatomic) NSUInteger mediaObjectCount; // ivar: _mediaObjectCount
@property (nonatomic) NSUInteger mediaPresentation;
@property (retain) NSMutableDictionary *mobdevProperties; // ivar: _mobdevProperties
@property (copy, nonatomic) NSString *mountPoint; // ivar: _mountPoint
@property (readonly, nonatomic) NSUInteger numberOfDownloadableItems;
@property (retain) NSMutableArray *originalMediaFiles; // ivar: _originalMediaFiles
@property NSInteger preflightCountOfObjects; // ivar: _preflightCountOfObjects
@property (nonatomic) NSUInteger previouslyIndexed; // ivar: _previouslyIndexed
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (copy, nonatomic) id *ptpEventHandler; // ivar: _ptpEventHandler
@property (readonly, nonatomic) BOOL tetheredCaptureEnabled; // ivar: _tetheredCaptureEnabled
@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset
@property (retain) NSMutableArray *universalMediaFiles; // ivar: _universalMediaFiles


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)addMediaFiles:(id)arg0 ;
-(BOOL)containsRestrictedStorage;
-(BOOL)legacyDevice;
-(BOOL)setDefaultMediaPresentation:(NSUInteger)arg0 ;
-(BOOL)supportsMediaFormatCatalog;
-(BOOL)updateAppleProperties:(id)arg0 ;
-(BOOL)updateMediaPresentation;
-(NSInteger)cameraFilesContentSizeInBytes;
-(NSInteger)stitchMedia:(id)arg0 withMedia:(id)arg1 ;
-(NSUInteger)countOfObjects;
-(id)cameraFileWithObjectID:(NSUInteger)arg0 ;
-(id)cameraFolderWithObjectID:(NSUInteger)arg0 ;
-(id)description;
-(id)filesOfType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)ownerMedia:(id)arg0 withMedia:(id)arg1 ;
-(id)relateGroupedMedia:(id)arg0 ;
-(id)relateLegacyMedia:(id)arg0 ;
-(id)relateMedia:(id)arg0 ;
-(id)remoteCamera;
-(id)remoteCameraWithFailureBlock:(id)arg0 ;
// -(id)requestDeleteFiles:(id)arg0 deleteFailed:(id)arg1 completion:(unk)arg2  ;
-(struct CGImage *)icon;
-(void)addCameraFileToIndex:(id)arg0 ;
-(void)addCameraFolderToIndex:(id)arg0 ;
-(void)addCapability:(id)arg0 ;
-(void)addFolder:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addNumberOfDownloadableItems:(NSInteger)arg0 ;
-(void)blendMedia:(id)arg0 ofLength:(int)arg1 withMedia:(id)arg2 ofLength:(int)arg3 ;
-(void)cancelDelete;
-(void)cancelDownload;
-(void)dealloc;
-(void)dispatchAsyncForOperationType:(NSInteger)arg0 block:(id)arg1 ;
-(void)dumpPTPPassthruCommand:(id)arg0 andData:(id)arg1 ;
-(void)executeConnectionFailureBlock;
-(void)grindMedia:(id)arg0 index:(*int)arg1 file:(id)arg2 ;
-(void)handlePtpEvent:(id)arg0 ;
-(void)handleStatusNotification:(id)arg0 ;
-(void)popMediaFiles:(id)arg0 ;
-(void)pushMediaFiles:(id)arg0 ;
-(void)removeCameraFileFromIndex:(id)arg0 ;
-(void)removeCameraFolderFromIndex:(id)arg0 ;
-(void)removeFolder:(id)arg0 ;
-(void)removeItems:(id)arg0 ;
-(void)requestCloseSession;
-(void)requestCloseSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestDeleteFiles:(id)arg0 ;
-(void)requestDisableTethering;
-(void)requestDownloadFile:(id)arg0 options:(id)arg1 downloadDelegate:(id)arg2 didDownloadSelector:(SEL)arg3 contextInfo:(*void)arg4 ;
-(void)requestEject;
-(void)requestEnableTethering;
-(void)requestOpenSession;
-(void)requestOpenSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestReadDataFromFile:(id)arg0 atOffset:(NSInteger)arg1 length:(NSInteger)arg2 readDelegate:(id)arg3 didReadDataSelector:(SEL)arg4 contextInfo:(*void)arg5 ;
-(void)requestSendPTPCommand:(id)arg0 outData:(id)arg1 completion:(id)arg2 ;
-(void)requestSendPTPCommand:(id)arg0 outData:(id)arg1 sendCommandDelegate:(id)arg2 didSendCommandSelector:(SEL)arg3 contextInfo:(*void)arg4 ;
-(void)requestSyncClock;
-(void)requestTakePicture;
-(void)requestUploadFile:(id)arg0 options:(id)arg1 uploadDelegate:(id)arg2 didUploadSelector:(SEL)arg3 contextInfo:(*void)arg4 ;
-(void)resetAccessRestriction;
-(void)setAccessRestriction:(NSUInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsAccessRestrictedAppleDevice:(BOOL)arg0 ;
-(void)setPtpEventForwarding:(BOOL)arg0 ;
-(void)storageAvailable;
-(void)updateAccessRestriction;
-(void)updateContentCatalogPercentCompleted;
-(void)updateEnumeratingErrorStatus;
-(void)updateLockedErrorStatus;
-(void)updateMediaFilesCount:(id)arg0 ;


@end


#endif