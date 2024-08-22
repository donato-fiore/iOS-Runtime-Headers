// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DECRYPTOR_H
#define DECRYPTOR_H

@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DECryptor : NSObject <DEWriter>



@property (nonatomic) *_CCCryptor cryptor; // ivar: _cryptor
@property (nonatomic) unsigned int operation; // ivar: _operation
@property (retain, nonatomic) NSObject<DEWriter> *writer; // ivar: _writer


-(id)init;
-(id)initWithWriter:(id)arg0 operation:(unsigned int)arg1 key:(id)arg2 iv:(id)arg3 ;
-(void)close;
-(void)dealloc;
-(void)writeData:(id)arg0 ;


@end


#endif