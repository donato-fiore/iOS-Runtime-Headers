// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUCRYPTOR_H
#define SFUCRYPTOR_H


#import <Foundation/Foundation.h>


@interface SFUCryptor : NSObject {
    int mOperation;
    *_CCCryptor mCryptor;
    NSUInteger mBlockSize;
    BOOL mFinished;
    char * mDecryptionInputBuffer;
    char * mOutputBuffer;
    char * mOutputBufferPos;
    NSUInteger mOutputBufferAvailable;
}




-(BOOL)cryptDataFromBuffer:(char *)arg0 length:(NSUInteger)arg1 toStream:(id)arg2 finished:(BOOL)arg3 crc32:(*unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)cryptDataFromBuffer:(char *)arg0 length:(NSUInteger)arg1 toStream:(id)arg2 finished:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)cryptDataFromStream:(id)arg0 toBuffer:(char *)arg1 length:(NSUInteger)arg2 bytesRead:(*NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithKey:(id)arg0 operation:(int)arg1 iv:(char *)arg2 ivLength:(NSUInteger)arg3 ;
-(id)initWithKey:(id)arg0 operation:(int)arg1 iv:(char *)arg2 ivLength:(NSUInteger)arg3 usePKCS7Padding:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif