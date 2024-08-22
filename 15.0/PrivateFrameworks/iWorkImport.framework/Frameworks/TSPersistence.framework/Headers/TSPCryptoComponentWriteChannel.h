// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCRYPTOCOMPONENTWRITECHANNEL_H
#define TSPCRYPTOCOMPONENTWRITECHANNEL_H

@class NSString;
@protocol TSPComponentWriteChannel, TSPMutableCryptoInfo, OS_dispatch_semaphore, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    id<TSPComponentWriteChannel> *_writeChannel;
    id<TSPMutableCryptoInfo> *_encryptionInfo;
    NSUInteger _bufferSize;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    char * _buffer;
    NSObject<OS_dispatch_data> *_bufferDispatchData;
    NSUInteger _bufferPosition;
    NSUInteger _remainingBufferSize;
    *_CCCryptor _cryptor;
    ? _ccHmacContext;
    NSUInteger _encodedBlockLength;
    NSUInteger _decryptedBlockLength;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_finalizeBlockForClosing:(BOOL)arg0 ;
-(BOOL)_initializeBlock;
-(BOOL)_resetBuffer;
-(id)init;
-(id)initWithWriteChannel:(id)arg0 encryptionInfo:(id)arg1 ;
-(id)initWithWriteChannel:(id)arg0 encryptionInfo:(id)arg1 bufferSize:(NSUInteger)arg2 ;
-(void)_writeData:(id)arg0 isDecryptedData:(BOOL)arg1 ;
-(void)close;
-(void)dealloc;
-(void)writeData:(id)arg0 ;


@end


#endif