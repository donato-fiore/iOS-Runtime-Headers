// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKCACHEDELETEMANAGER_H
#define IMDCKCACHEDELETEMANAGER_H


#import <Foundation/Foundation.h>


@interface IMDCKCacheDeleteManager : NSObject

@property (nonatomic) BOOL allowsWritingToDisk; // ivar: _allowsWritingToDisk
@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture; // ivar: _alreadyCapturedErrorWithAutoBugCapture
@property (nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace; // ivar: _deviceLowOnDiskSpace
@property BOOL isUpdatingAttachmentFileSizes; // ivar: _isUpdatingAttachmentFileSizes
@property (nonatomic) BOOL isUsingCentralizedModel; // ivar: _isUsingCentralizedModel


+(id)sharedInstance;
-(BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg0 ;
-(BOOL)_shouldFetchNextBatch:(NSUInteger)arg0 totalTransfers:(id)arg1 ;
-(BOOL)canWriteFileOfEstimatedSize:(NSUInteger)arg0 refreshCachedValue:(BOOL)arg1 ;
-(BOOL)isUsingCentralizeCacheDelete;
-(BOOL)shouldDownloadAssetsOfSize:(NSUInteger)arg0 refreshCachedValue:(BOOL)arg1 ;
-(NSInteger)_deleteAttachmentsAndReturnBytesDeleted:(int)arg0 ;
-(NSInteger)_deleteFilesOnDiskAndUpdateTransfers:(id)arg0 ;
-(NSInteger)_purgeableSpaceGivenUrgency:(int)arg0 ;
-(NSInteger)purgeAttachments:(NSInteger)arg0 ;
-(NSInteger)purgeableAttachmentSize;
-(NSUInteger)_indexOfNextBatch:(id)arg0 totalTransfers:(id)arg1 indexOfTransfers:(NSUInteger)arg2 ;
-(id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg0 urgency:(int)arg1 ;
-(id)__wrapperAroundCacheDeletePurgingCallback:(id)arg0 urgency:(int)arg1 ;
-(id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg0 diskVolume:(id)arg1 urgency:(int)arg2 requestedSize:(NSUInteger)arg3 ;
-(id)_ckUtilitiesSharedInstance;
-(id)_fileTransfersToDelete:(struct __CFArray *)arg0 ;
-(id)_fileTransfersToValidate:(struct __CFArray *)arg0 ;
-(id)_getIndexSetForBatch:(id)arg0 indexOfTransfers:(NSUInteger)arg1 ;
-(id)createDictionaryForNotDeletingAnyAttachments:(id)arg0 urgency:(int)arg1 ;
-(id)deleteAttachmentsAndReturnBytesDeleted:(id)arg0 urgency:(int)arg1 ;
-(id)init;
-(id)reportAvailableSpaceToBeDeleted:(id)arg0 urgency:(int)arg1 ;
-(struct _IMDAttachmentRecordStruct *)_copyRecordRef:(id)arg0 ;
-(void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)arg0 ;
-(void)_cacheDeleteSetUp;
-(void)_fetchTransfersFromCloudKit:(id)arg0 ;
-(void)_fetchTransfersFromCloudKit:(id)arg0 indexOfTransfers:(NSUInteger)arg1 numberOfBatchesToFetch:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)_postTransferInfoOfDeletedTransfers:(id)arg0 ;
-(void)metricAttachmentsToPurge:(NSInteger)arg0 ;
-(void)registerWithCacheDelete;
-(void)resetAttachmentWatermark;
-(void)updateAttachmentFileSizesWithActivity:(id)arg0 ;


@end


#endif