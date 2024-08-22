// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCRYPTOREADCHANNEL_H
#define TSPCRYPTOREADCHANNEL_H

@class SFUCryptoKey, NSString;
@protocol TSUStreamReadChannel, OS_dispatch_queue, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
    NSObject<OS_dispatch_queue> *_readChannelQueue;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    char * _iv;
    NSUInteger _ivRead;
    *_CCCryptor _cryptor;
    char * _buffer;
    NSUInteger _initialBytesIgnored;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReadChannel:(id)arg0 decryptionKey:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif