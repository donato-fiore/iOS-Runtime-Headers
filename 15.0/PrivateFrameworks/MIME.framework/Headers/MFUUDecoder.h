// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFUUDECODER_H
#define MFUUDECODER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFUUDecoder : MFBaseFilterDataConsumer {
    NSUInteger _begin;
    NSUInteger _end;
    NSUInteger _length;
    NSUInteger _readBytes;
    unsigned char _encoded;
    BOOL _beginComplete;
    BOOL _dataComplete;
    BOOL _validLength;
    BOOL _lineComplete;
    BOOL _passthrough;
}




-(NSInteger)appendData:(id)arg0 ;
-(void)done;


@end


#endif