// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPCRYPTOCOMPONENTWRITECHANNEL_H
#define TSPCRYPTOCOMPONENTWRITECHANNEL_H

@class NSString;
@protocol TSPComponentWriteChannel;

#import <Foundation/Foundation.h>


@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    id<TSPComponentWriteChannel> *_writeChannel;
    *_CCCryptor _cryptor;
    char * _buffer;
    ? _ccHmacContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWriteChannel:(id)arg0 encryptionKey:(id)arg1 ;
-(void)_writeData:(id)arg0 updateHmac:(BOOL)arg1 ;
-(void)close;
-(void)dealloc;
-(void)writeData:(id)arg0 ;


@end


#endif