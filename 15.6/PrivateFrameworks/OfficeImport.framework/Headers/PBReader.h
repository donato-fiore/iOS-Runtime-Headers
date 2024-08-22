// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBREADER_H
#define PBREADER_H



#import "OCBReader.h"

@interface PBReader : OCBReader {
    *PptObjectFactory mPptObjectFactory;
    *void mBuffer;
}


@property (readonly, nonatomic) *void pptReader;


-(BOOL)start;
-(id)initWithCancelDelegate:(id)arg0 ;
-(id)read;
-(struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg0 baseOutputFilenameInUTF8:(char *)arg1 ;
-(struct OCCEncryptionInfoReader *)encryptionInfoReader;
-(void)dealloc;


@end


#endif