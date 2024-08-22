// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPTEMPORARYDATASTORAGE_H
#define TSPTEMPORARYDATASTORAGE_H

@protocol TSPCryptoInfo;


#import "TSPFileDataStorage.h"
#import "TSPTemporaryDataStorageURL.h"

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    id<TSPCryptoInfo> *_decryptionInfo;
    BOOL _leakTemporaryFile;
    BOOL _gilligan_isRemote;
}


@property (readonly, nonatomic) BOOL isMissingData; // ivar: _isMissingData
@property (readonly, nonatomic) BOOL isMissingOriginalData; // ivar: _isMissingOriginalData


-(BOOL)gilligan_isRemote;
-(BOOL)linkOrCopyToURL:(id)arg0 encryptionInfo:(id)arg1 canLink:(BOOL)arg2 ;
-(NSUInteger)length;
-(id)decryptionInfo;
-(id)init;
-(id)initWithTemporaryDataStorageURL:(id)arg0 decryptionInfo:(id)arg1 ;
-(id)initWithTemporaryDataStorageURL:(id)arg0 decryptionInfo:(id)arg1 isMissingOriginalData:(BOOL)arg2 isMissingData:(BOOL)arg3 ;
-(id)initWithTemporaryDataStorageURL:(id)arg0 decryptionInfo:(id)arg1 isMissingOriginalData:(BOOL)arg2 isMissingData:(BOOL)arg3 gilligan_isRemote:(BOOL)arg4 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(void)dealloc;
-(void)leakTemporaryFile;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;
-(void)setGilligan_isRemote:(BOOL)arg0 ;


@end


#endif