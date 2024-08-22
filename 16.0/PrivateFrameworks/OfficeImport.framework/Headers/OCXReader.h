// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCXREADER_H
#define OCXREADER_H



#import "OCDEncryptedReader.h"
#import "OCPZipPackage.h"

@interface OCXReader : OCDEncryptedReader {
    *void mDataBytes;
}


@property (retain, nonatomic) OCPZipPackage *zipPackage; // ivar: mZipPackage


-(BOOL)isBinaryReader;
-(BOOL)retainDecryptorWithErrorCode:(*int)arg0 ;
-(BOOL)start;
-(BOOL)verifyFileFormat;
-(id)read;
-(void)restartReaderToUseDecryptedDocument;


@end


#endif