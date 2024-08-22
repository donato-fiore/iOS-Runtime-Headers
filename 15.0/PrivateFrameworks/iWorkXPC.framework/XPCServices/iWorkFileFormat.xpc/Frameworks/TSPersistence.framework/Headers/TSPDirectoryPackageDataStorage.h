// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDIRECTORYPACKAGEDATASTORAGE_H
#define TSPDIRECTORYPACKAGEDATASTORAGE_H

@class NSString;
@protocol TSPCryptoInfo;


#import "TSPFileDataStorage.h"
#import "TSPDirectoryPackage.h"

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    NSString *_path;
    id<TSPCryptoInfo> *_decryptionInfo;
    unsigned char _packageIdentifier;
    uint8_t _didCalculateEncodedLength;
    uint8_t _encodedLength;
    uint8_t _isMissingData;
    BOOL _gilligan_isRemote;
}


@property (readonly, weak, nonatomic) TSPDirectoryPackage *package; // ivar: _package


-(BOOL)gilligan_isRemote;
-(BOOL)isInPackage:(id)arg0 ;
-(BOOL)isMissingData;
-(BOOL)linkOrCopyToURL:(id)arg0 encryptionInfo:(id)arg1 canLink:(BOOL)arg2 ;
-(NSUInteger)encodedLength;
-(NSUInteger)length;
-(id)decryptionInfo;
-(id)init;
-(id)initWithPath:(id)arg0 package:(id)arg1 decryptionInfo:(id)arg2 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(void)didInitializeFromDocumentURL:(id)arg0 ;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;
-(void)setEncodedLength:(NSUInteger)arg0 isMissingData:(BOOL)arg1 ;
-(void)setGilligan_isRemote:(BOOL)arg0 ;


@end


#endif