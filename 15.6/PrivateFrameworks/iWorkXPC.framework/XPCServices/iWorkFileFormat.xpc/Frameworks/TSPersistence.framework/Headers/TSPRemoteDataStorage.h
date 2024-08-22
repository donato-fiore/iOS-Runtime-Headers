// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPREMOTEDATASTORAGE_H
#define TSPREMOTEDATASTORAGE_H

@class SFUCryptoKey, NSMutableIndexSet, NSDate, NSURL, NSIndexSet;
@protocol TSPDataStorageDownloadable, OS_dispatch_queue, TSPDataStorage, TSPRemoteDataStorageDelegate;


#import "TSPFileDataStorage.h"
#import "TSPTemporaryDataStorage.h"

@interface TSPRemoteDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable>

 {
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPTemporaryDataStorage *_temporaryMaterializedDataStorage;
    NSUInteger _changeCount;
    NSMutableIndexSet *_unmaterializedRanges;
    id<TSPDataStorage> *_packageDataStorage;
    NSInteger _uploadStatus;
    NSDate *_modificationDate;
    BOOL _canDownload;
}


@property (weak, nonatomic) NSObject<TSPRemoteDataStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (readonly, nonatomic) NSUInteger firstUnmaterializedIndex;
@property (readonly, nonatomic) BOOL isMaterialized;
@property (readonly, nonatomic) NSUInteger materializedLength;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (readonly, nonatomic) NSIndexSet *unmaterializedRanges;
@property (nonatomic) NSInteger uploadStatus;


+(id)ioQueue;
+(id)notificationQueue;
-(BOOL)canDownload;
-(BOOL)isReadable;
-(BOOL)linkOrCopyToURL:(id)arg0 encryptionInfo:(id)arg1 canLink:(BOOL)arg2 ;
-(BOOL)needsDownload;
-(BOOL)p_copyPartiallyMaterializedDataToURL:(id)arg0 ;
-(NSUInteger)encodedLength;
-(NSUInteger)length;
-(NSUInteger)reservedLength;
-(id)decryptionInfo;
-(id)initWithRemoteURL:(id)arg0 length:(NSUInteger)arg1 encryptionKey:(id)arg2 canDownload:(BOOL)arg3 downloadPriority:(NSInteger)arg4 uploadStatus:(NSInteger)arg5 modificationDate:(id)arg6 ;
-(id)initWithRemoteURL:(id)arg0 unmaterializedRanges:(id)arg1 encryptionKey:(id)arg2 canDownload:(BOOL)arg3 downloadPriority:(NSInteger)arg4 uploadStatus:(NSInteger)arg5 modificationDate:(id)arg6 packageDataStorage:(id)arg7 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(void)didAddDownloadObserverWithData:(id)arg0 ;
-(void)didReceivePartialRemoteData:(id)arg0 decryptionKey:(id)arg1 range:(struct _NSRange )arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)didReceiveRemoteData:(id)arg0 decryptionInfo:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(void)didReceiveRemoteDataAtURL:(id)arg0 canMove:(BOOL)arg1 decryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
// -(void)didReceiveRemoteDataWithDecryptionInfo:(id)arg0 noEncryptionHandler:(id)arg1 createReadChannelForCryptoTranscodeBlock:(unk)arg2 completionQueue:(id)arg3 completion:(unk)arg4  ;
-(void)didReceiveRemoteDataWithReadChannel:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)didSaveWithChangeCount:(NSUInteger)arg0 packageDataStorage:(id)arg1 ;
-(void)p_notifyDownloadObserversWithStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif