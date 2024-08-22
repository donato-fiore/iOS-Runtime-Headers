// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDMMCSITEM_H
#define CKDMMCSITEM_H

@class CKAsset, NSDictionary, NSData, NSString, NSURL, NSNumber, CKAssetDownloadPreauthorization, NSError, NSFileHandle, CKPackage, CKRecordID, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKDAssetZoneKey.h"
#import "CKDMMCSItemCommandWriter.h"

@interface CKDMMCSItem : NSObject

@property (retain, nonatomic) CKAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSDictionary *assetChunkerOptions; // ivar: _assetChunkerOptions
@property (retain, nonatomic) NSData *assetKey; // ivar: _assetKey
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey; // ivar: _assetZoneKey
@property (retain, nonatomic) NSString *authToken; // ivar: _authToken
@property (retain, nonatomic) NSData *boundaryKey; // ivar: _boundaryKey
@property (nonatomic) unsigned int chunkCount; // ivar: _chunkCount
@property (retain, nonatomic) NSData *clearAssetKey; // ivar: _clearAssetKey
@property (retain, nonatomic) NSURL *constructedAssetDownloadURL; // ivar: _constructedAssetDownloadURL
@property (nonatomic) NSUInteger constructedAssetEstimatedSize; // ivar: _constructedAssetEstimatedSize
@property (retain, nonatomic) NSURL *contentBaseURL; // ivar: _contentBaseURL
@property (retain, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL downloadLooksOkay; // ivar: _downloadLooksOkay
@property (retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization; // ivar: _downloadPreauthorization
@property (nonatomic) NSUInteger downloadTokenExpiration; // ivar: _downloadTokenExpiration
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL finished; // ivar: _finished
@property (retain, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (nonatomic) BOOL hasOffset; // ivar: _hasOffset
@property (nonatomic) BOOL hasSize; // ivar: _hasSize
@property (nonatomic) BOOL isAlreadyRegistered; // ivar: _isAlreadyRegistered
@property (nonatomic) BOOL isReaderReadFrom; // ivar: _isReaderReadFrom
@property (nonatomic) BOOL isRereferencedAssetUpload; // ivar: _isRereferencedAssetUpload
@property (nonatomic) NSUInteger itemID; // ivar: _itemID
@property (retain, nonatomic) NSString *itemTypeHint; // ivar: _itemTypeHint
@property (retain, nonatomic) NSNumber *modTimeInSeconds; // ivar: _modTimeInSeconds
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (retain, nonatomic) NSString *owner; // ivar: _owner
@property (retain, nonatomic) CKPackage *package; // ivar: _package
@property (nonatomic) NSUInteger packageIndex; // ivar: _packageIndex
@property (nonatomic) NSUInteger paddedFileSize; // ivar: _paddedFileSize
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) NSString *putPackageSectionIdentifier; // ivar: _putPackageSectionIdentifier
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) NSString *recordKey; // ivar: _recordKey
@property (retain, nonatomic) NSString *recordType; // ivar: _recordType
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (retain, nonatomic) NSString *requestor; // ivar: _requestor
@property (retain, nonatomic) NSMutableArray *sectionItems; // ivar: _sectionItems
@property (nonatomic) BOOL shouldReadAssetContentUsingClientProxy; // ivar: _shouldReadAssetContentUsingClientProxy
@property (nonatomic) BOOL shouldReadRawEncryptedData; // ivar: _shouldReadRawEncryptedData
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic, getter=isTemporary) BOOL temporary; // ivar: _temporary
@property (retain, nonatomic) NSString *trackingUUID; // ivar: _trackingUUID
@property (retain, nonatomic) NSString *uploadReceipt; // ivar: _uploadReceipt
@property (nonatomic) CGFloat uploadReceiptExpiration; // ivar: _uploadReceiptExpiration
@property (nonatomic) NSUInteger uploadTokenExpiration; // ivar: _uploadTokenExpiration
@property (nonatomic) BOOL usesAssetDownloadStagingManager; // ivar: _usesAssetDownloadStagingManager
@property (retain, nonatomic) NSData *wrappedAssetKey; // ivar: _wrappedAssetKey
@property (retain, nonatomic) CKDMMCSItemCommandWriter *writer; // ivar: _writer


-(BOOL)canBeRegistered;
-(id)CKPropertiesDescription;
-(id)_openInfo;
-(id)description;
-(id)getFileMetadataWithContainer:(id)arg0 fileHandle:(id)arg1 error:(*id)arg2 ;
-(id)getFileMetadataWithFileHandle:(id)arg0 error:(*id)arg1 ;
-(id)getFileSizeWithError:(*id)arg0 ;
-(id)getFileSizeWithOperation:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithPackage:(id)arg0 ;
-(id)openWithError:(*id)arg0 ;
-(id)openWithOperation:(id)arg0 error:(*id)arg1 ;
-(id)readBytesOfInMemoryAssetContentWithContainer:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)clearFileSize;
-(void)setupForGetChunkKeysWithAsset:(id)arg0 destinationDatabaseScope:(NSInteger)arg1 ;


@end


#endif