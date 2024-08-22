// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCBREADER_H
#define OCBREADER_H



#import "OCDEncryptedReader.h"

@interface OCBReader : OCDEncryptedReader

@property (nonatomic) *OcBinaryReader binaryReader; // ivar: mBinaryReader
@property (readonly, nonatomic) *OCCEncryptionInfoReader encryptionInfoReader;
@property (nonatomic) *__sFILE file; // ivar: mFile


-(BOOL)isBinaryReader;
-(BOOL)retainDecryptorWithErrorCode:(*int)arg0 ;
-(BOOL)start;
-(id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg0 baseOutputFilename:(id)arg1 ;
-(id)initWithCancelDelegate:(id)arg0 ;
-(id)read;
-(struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg0 baseOutputFilenameInUTF8:(char *)arg1 ;
-(void)closeFile;
-(void)dealloc;
-(void)restartReaderToUseDecryptedDocument;


@end


#endif