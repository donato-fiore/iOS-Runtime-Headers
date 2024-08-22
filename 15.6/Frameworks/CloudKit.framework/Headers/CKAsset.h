// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASSET_H
#define CKASSET_H

@class NSString, NSDictionary, NSData, NSURL, NSNumber, NSDate, NSFileHandle;
@protocol CKRecordValue, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKAssetCopyInfo.h"
#import "CKAssetReference.h"
#import "CKAssetRereferenceInfo.h"
#import "CKAssetTransferOptions.h"
#import "CKAssetDownloadPreauthorization.h"
#import "CKRecord.h"
#import "CKRecordID.h"

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding>



@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (nonatomic) NSInteger arrayIndex; // ivar: _arrayIndex
@property (retain, nonatomic) NSDictionary *assetChunkerOptions; // ivar: _assetChunkerOptions
@property (retain, nonatomic) NSData *assetContent; // ivar: _assetContent
@property (retain, nonatomic) CKAssetCopyInfo *assetCopyInfo; // ivar: _assetCopyInfo
@property (retain, nonatomic) NSData *assetKey; // ivar: _assetKey
@property (retain, nonatomic) CKAssetReference *assetReference; // ivar: _assetReference
@property (retain, nonatomic) CKAssetRereferenceInfo *assetRereferenceInfo; // ivar: _assetRereferenceInfo
@property (retain, nonatomic) CKAssetTransferOptions *assetTransferOptions; // ivar: _assetTransferOptions
@property (copy, nonatomic) NSString *authToken; // ivar: _authToken
@property (copy, nonatomic) NSData *boundaryKey; // ivar: _boundaryKey
@property (retain, nonatomic) NSData *clearAssetKey; // ivar: _clearAssetKey
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters; // ivar: _constructedAssetDownloadParameters
@property (retain, nonatomic) NSURL *constructedAssetDownloadURL; // ivar: _constructedAssetDownloadURL
@property (retain, nonatomic) NSString *constructedAssetDownloadURLTemplate; // ivar: _constructedAssetDownloadURLTemplate
@property (nonatomic) NSUInteger constructedAssetEstimatedSize; // ivar: _constructedAssetEstimatedSize
@property (retain, nonatomic) NSURL *contentBaseURL; // ivar: _contentBaseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSString *downloadBaseURL; // ivar: _downloadBaseURL
@property (retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization; // ivar: _downloadPreauthorization
@property (nonatomic) NSUInteger downloadTokenExpiration; // ivar: _downloadTokenExpiration
@property (retain, nonatomic) NSDate *downloadURLExpiration; // ivar: _downloadURLExpiration
@property (retain, nonatomic) NSString *downloadURLTemplate; // ivar: _downloadURLTemplate
@property (nonatomic) BOOL downloaded; // ivar: _downloaded
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSNumber *generationCountToSave; // ivar: _generationCountToSave
@property (nonatomic) BOOL hasSize; // ivar: _hasSize
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemTypeHint; // ivar: _itemTypeHint
@property (copy, nonatomic) NSURL *nullableFileURL;
@property (retain, nonatomic) NSString *owner; // ivar: _owner
@property (nonatomic) NSUInteger paddedFileSize; // ivar: _paddedFileSize
@property (copy, nonatomic) NSURL *realPathURL; // ivar: _realPathURL
@property (weak, nonatomic) CKRecord *record; // ivar: _record
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (copy, nonatomic) NSString *recordKey; // ivar: _recordKey
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (retain, nonatomic) NSString *requestor; // ivar: _requestor
@property (nonatomic) BOOL shouldReadAssetContentUsingClientProxy; // ivar: _shouldReadAssetContentUsingClientProxy
@property (nonatomic) BOOL shouldReadRawEncryptedData; // ivar: _shouldReadRawEncryptedData
@property (copy, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) NSUInteger size; // ivar: _size
@property (nonatomic) NSInteger storageGroupingPolicy; // ivar: _storageGroupingPolicy
@property (readonly) Class superclass;
@property (nonatomic) NSInteger uploadRank; // ivar: _uploadRank
@property (copy, nonatomic) NSString *uploadReceipt; // ivar: _uploadReceipt
@property (nonatomic) CGFloat uploadReceiptExpiration; // ivar: _uploadReceiptExpiration
@property (nonatomic) BOOL uploaded; // ivar: _uploaded
@property (nonatomic) BOOL usesAssetDownloadStagingManager; // ivar: _usesAssetDownloadStagingManager
@property (nonatomic) BOOL wasCached; // ivar: _wasCached
@property (retain, nonatomic) NSData *wrappedAssetKey; // ivar: _wrappedAssetKey


+(BOOL)_templateURLRequiresAssetKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_canonicalizeTemplateURL:(id)arg0 ;
+(id)_expandTemplateURL:(id)arg0 fieldValues:(id)arg1 ;
+(id)_openUnencryptedWithOpenInfo:(id)arg0 genCountCheck:(BOOL)arg1 error:(*id)arg2 ;
+(id)assetWithFileURL:(id)arg0 ;
+(id)getFileMetadataAtPath:(id)arg0 error:(*id)arg1 ;
+(id)getFileMetadataWithFileHandle:(id)arg0 openInfo:(id)arg1 error:(*id)arg2 ;
+(id)getFileSizeWithOpenInfo:(id)arg0 error:(*id)arg1 ;
+(id)openToReadRawEncryptedDataWithOpenInfo:(id)arg0 error:(*id)arg1 ;
+(id)openWithOpenInfo:(id)arg0 error:(*id)arg1 ;
+(int)errorCodeFromPOSIXCode:(int)arg0 ;
-(BOOL)isConstructedAsset;
-(BOOL)isRereferencedAssetUpload;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_initBare;
-(id)downloadURL;
-(id)downloadURLWithFileName:(id)arg0 ;
-(id)init;
-(id)initWithAssetContent:(id)arg0 itemTypeHint:(id)arg1 ;
-(id)initWithAssetReference:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCopyInfo:(id)arg0 fileURL:(id)arg1 ;
-(id)initWithDeviceID:(id)arg0 fileID:(id)arg1 generationID:(id)arg2 ;
-(id)initWithFileDescriptor:(int)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 signature:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 signature:(id)arg1 assetHandleUUID:(id)arg2 ;
-(id)openWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif