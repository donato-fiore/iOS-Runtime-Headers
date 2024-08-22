// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPCRYPTOREADCHANNEL_H
#define TSPCRYPTOREADCHANNEL_H

@class SFUCryptoKey, NSArray, NSString;
@protocol TSUStreamReadChannel, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
    SFUCryptoKey *_decryptionKey;
    NSArray *_blockInfos;
    NSObject<OS_dispatch_data> *_holdData;
    char * _iv;
    NSUInteger _ivRead;
    *_CCCryptor _cryptor;
    NSUInteger _initialBytesIgnored;
    NSUInteger _remainingBlockSize;
    NSUInteger _nextBlockIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithReadChannel:(id)arg0 decryptionKey:(id)arg1 blockInfos:(id)arg2 ;
-(void)_readBlocksWithHandler:(id)arg0 ;
-(void)_resetCryptor;
-(void)close;
-(void)dealloc;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;


@end


#endif