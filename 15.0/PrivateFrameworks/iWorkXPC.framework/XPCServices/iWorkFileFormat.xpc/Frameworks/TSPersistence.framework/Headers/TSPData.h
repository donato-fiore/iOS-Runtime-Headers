// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATA_H
#define TSPDATA_H

@class NSString, NSUUID, NSError, NSDate, NSArray;
@protocol TSPSplitableData, TSPRemoteDataStorageDelegate, OS_dispatch_queue, TSPDataStorage;

#import <Foundation/Foundation.h>

#import "TSPDigest.h"
#import "TSPDataAttributes.h"
#import "TSPObjectContext.h"
#import "TSPDataManager.h"
#import "TSPDataMetadata.h"
#import "TSPDataUniqueIdentifier.h"

@interface TSPData : NSObject <TSPSplitableData, TSPRemoteDataStorageDelegate>

 {
    uint8_t _didCull;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSPDataStorage> *_storage;
    NSString *_filename;
    NSString *_type;
    NSInteger _typeClass;
    BOOL _hasTypeClass;
    NSString *_normalizedExtension;
    NSUUID *_anonymousUniqueIdentifier;
    uint8_t _hasValidatedDigestMatch;
    uint8_t _lastValidationResult;
    NSError *_lastValidationError;
    os_unfair_lock_s _lastMismatchedDigestLock;
    TSPDigest *_lastMismatchedDigest;
}


@property (readonly) NSUUID *anonymousUniqueIdentifier;
@property (copy) TSPDataAttributes *attributes;
@property (readonly, nonatomic) BOOL canDownload;
@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *digestString;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSUInteger encodedLength;
@property (readonly, nonatomic) NSUInteger encodedLengthIfLocal;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSUInteger firstUnmaterializedIndex;
@property (readonly, nonatomic) BOOL gilligan_isRemote;
@property (readonly, nonatomic) BOOL hasValidatedDigestMatch;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isApplicationData;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, nonatomic) BOOL isExternalData;
@property (readonly, nonatomic) BOOL isInDocument;
@property (readonly, nonatomic) BOOL isMaterialized;
@property (readonly, nonatomic) BOOL isReadable;
@property (nonatomic) BOOL isRemoteDataEver;
@property (readonly, nonatomic) BOOL isUnmaterializedRemoteData;
@property (copy, nonatomic) TSPDigest *lastMismatchedDigest;
@property (readonly, nonatomic) NSString *lastMismatchedDigestString;
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly) int lastValidationResult;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSUInteger lengthIfLocal;
@property (readonly, weak, nonatomic) TSPDataManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSUInteger materializedLength;
@property (retain, nonatomic) TSPDataMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) NSString *normalizedExtension;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) NSArray *referencingObjects;
@property (readonly, nonatomic) BOOL reservedInServer;
@property (readonly, nonatomic) NSUInteger reservedLengthIfLocal;
@property (retain, nonatomic) NSObject<TSPDataStorage> *storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tsp_length;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSInteger typeClass;
@property (readonly, nonatomic) TSPDataUniqueIdentifier *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy, nonatomic) TSPDataAttributes *unsafeAttributes; // ivar: _attributes
@property (nonatomic) NSInteger uploadStatus;


+(BOOL)isSupportedURL:(id)arg0 ;
+(BOOL)p_writeStorage:(id)arg0 toURL:(id)arg1 withRange:(struct _NSRange )arg2 error:(*id)arg3 ;
+(BOOL)writeStorage:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)dataFromDataRep:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)dataFromNSData:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)dataFromReadChannel:(id)arg0 filename:(id)arg1 context:(id)arg2 ;
+(id)dataFromURL:(id)arg0 context:(id)arg1 ;
+(id)dataFromURL:(id)arg0 useExternalReferenceIfAllowed:(BOOL)arg1 context:(id)arg2 ;
+(id)dataFromURL:(id)arg0 useExternalReferenceIfAllowed:(BOOL)arg1 useFileCoordination:(BOOL)arg2 context:(id)arg3 ;
+(id)dataFromURL:(id)arg0 useExternalReferenceIfAllowed:(BOOL)arg1 useFileCoordination:(BOOL)arg2 filename:(id)arg3 context:(id)arg4 ;
+(id)normalizedExtensionForFilename:(id)arg0 ;
+(id)null;
+(id)pasteboardTypeForIdentifier:(NSInteger)arg0 ;
+(id)readOnlyDataFromNSData:(id)arg0 filename:(id)arg1 ;
+(id)readOnlyDataFromURL:(id)arg0 ;
+(id)remoteDataWithURL:(id)arg0 digest:(id)arg1 filename:(id)arg2 length:(NSUInteger)arg3 canDownload:(BOOL)arg4 downloadPriority:(NSInteger)arg5 uploadStatus:(NSInteger)arg6 modificationDate:(id)arg7 context:(id)arg8 ;
+(id)requiredAVAssetOptions;
+(id)resourceNameForFilename:(id)arg0 identifier:(NSInteger)arg1 ;
+(id)typeForFilename:(id)arg0 ;
+(void)addCullingListener:(id)arg0 ;
+(void)performDataCullingOperationSynchronously:(BOOL)arg0 usingBlock:(id)arg1 ;
+(void)removeCullingListener:(id)arg0 ;
-(BOOL)archiveInfoMessage:(*void)arg0 archiver:(id)arg1 packageWriter:(id)arg2 ;
-(BOOL)bookmarkDataNeedsWriteWithContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLengthLikelyToBeGreaterThan:(NSUInteger)arg0 ;
-(BOOL)replaceContentsWithDataFrom:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateDataDigestWithReason:(id)arg0 options:(NSUInteger)arg1 documentMetadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)validateDataDigestWithReason:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 withRange:(struct _NSRange )arg1 error:(*id)arg2 ;
-(id)AVAsset;
-(id)AVAssetWithOptions:(id)arg0 ;
-(id)NSData;
-(id)UIImage;
-(id)copyWithContext:(id)arg0 ;
-(id)createMetadataIfNeeded;
-(id)dataForRemoteDataStorage:(id)arg0 ;
-(id)fallbackColor;
-(id)init;
-(id)initWithIdentifier:(NSInteger)arg0 digest:(id)arg1 hasValidatedDigestMatch:(BOOL)arg2 filename:(id)arg3 lastModificationDate:(id)arg4 storage:(id)arg5 manager:(id)arg6 ;
-(id)lastValidationError;
-(id)makeBookmarkDataWithContext:(id)arg0 filename:(id)arg1 error:(*id)arg2 ;
-(id)newDataCopyInputStreamProviderWithEncryptionInfo:(id)arg0 error:(*id)arg1 ;
-(id)newDataCopyReadChannelProviderWithEncryptionInfo:(id)arg0 error:(*id)arg1 ;
-(id)newDataCopyURLProviderWithEncryptionInfo:(id)arg0 error:(*id)arg1 ;
-(id)pasteboardType;
-(id)preferredFilename;
-(id)temporaryDataStorageURLForRemoteDataStorage:(id)arg0 ;
-(struct CGDataProvider *)newCGDataProvider;
-(struct CGImage *)newCGImage;
-(struct CGImageSource *)newCGImageSource;
-(struct CGSize )pixelSize;
-(void)addDownloadObserver:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)didAddDownloadObserver;
-(void)didReceivePartialRemoteData:(id)arg0 decryptionKey:(id)arg1 range:(struct _NSRange )arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)didReceiveRemoteData:(id)arg0 decryptionInfo:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(void)didReceiveRemoteDataAtURL:(id)arg0 canMove:(BOOL)arg1 decryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
// -(void)didReceiveRemoteDataWithHandler:(id)arg0 completionQueue:(unk)arg1 completion:(id)arg2  ;
-(void)didReceiveRemoteDataWithReadChannel:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)didReplaceDataContents;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performInputStreamReadWithAccessor:(id)arg0 ;
-(void)replaceContentsWithMissingData;
-(void)replaceStorageWithEmptyRemoteDataStorage;
-(void)replaceStorageWithRemoteDataStorageWithLength:(NSUInteger)arg0 ;
-(void)setFallbackColor:(id)arg0 ;
-(void)setLastValidationError:(id)arg0 ;
-(void)setToCopyOfMetadataIfNil:(id)arg0 ;
-(void)tsp_splitDataWithMaxSize:(NSUInteger)arg0 subdataHandlerBlock:(id)arg1 ;
-(void)updateAnonymousUniqueIdentifierWithDocumentProperties:(id)arg0 passphrase:(id)arg1 ;
-(void)upgradeFallbackColorIfNeeded;
-(void)willCull;
-(void)willCullWithFlags:(NSUInteger)arg0 ;


@end


#endif