// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPFILEPACKAGEDATASTORAGE_H
#define TSPFILEPACKAGEDATASTORAGE_H

@class NSString;
@protocol TSPCryptoInfo;


#import "TSPStreamDataStorage.h"
#import "TSPFilePackage.h"

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    NSString *_path;
    TSPFilePackage *_package;
    uint8_t _didCalculateEncodedLength;
    uint8_t _encodedLength;
    uint8_t _didCalculateCRC;
    uint8_t _CRC;
    uint8_t _isMissingData;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> *_decryptionInfo;
}




-(BOOL)isInPackage:(id)arg0 ;
-(BOOL)isLengthPrecise;
-(BOOL)isMissingData;
-(BOOL)isReadable;
-(BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
-(BOOL)linkOrCopyToURL:(id)arg0 encryptionInfo:(id)arg1 canLink:(BOOL)arg2 ;
-(BOOL)shouldValidateCRCOnWrite;
-(NSUInteger)encodedLength;
-(NSUInteger)fileFormatVersion;
-(NSUInteger)length;
-(id)decryptionInfo;
-(id)init;
-(id)initWithPath:(id)arg0 package:(id)arg1 decryptionInfo:(id)arg2 ;
-(id)newDataCopyReadChannelProviderWithDocumentURL:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)packageLocator;
-(id)streamReadChannelForWriteWithPackageWriter:(id)arg0 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(unsigned char)packageIdentifier;
-(unsigned int)CRC;
-(void)didInitializeFromDocumentURL:(id)arg0 ;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)setEncodedLength:(NSUInteger)arg0 isMissingData:(BOOL)arg1 ;
-(void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)arg0 ;


@end


#endif