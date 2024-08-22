// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBREADER_H
#define EBREADER_H

@class NSString;


#import "OCBReader.h"

@interface EBReader : OCBReader {
    *XlObjectFactory mXlObjectFactory;
    *void mBuffer;
}


@property (nonatomic) BOOL isFileStructuredStorage; // ivar: mIsFileStructuredStorage
@property (retain, nonatomic) NSString *temporaryDirectory; // ivar: mTemporaryDirectory
@property (nonatomic) BOOL useStringOptimization; // ivar: mUseStringOptimization
@property (readonly, nonatomic) *void xlReader;


-(BOOL)start;
-(id)initWithCancelDelegate:(id)arg0 ;
-(id)read;
-(struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg0 baseOutputFilenameInUTF8:(char *)arg1 ;
-(struct OCCEncryptionInfoReader *)encryptionInfoReader;
-(void)dealloc;


@end


#endif