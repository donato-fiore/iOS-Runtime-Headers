// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXMESSAGEPARSER_H
#define DTXMESSAGEPARSER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, DTXBlockCompressor;

#import <Foundation/Foundation.h>


@interface DTXMessageParser : NSObject {
    char * _parsingBuffer;
    NSUInteger _parsingBufferUsed;
    NSUInteger _parsingBufferSize;
    id *_exceptionHandler;
    id *_parsedMessageHandler;
    BOOL _eof;
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSMutableDictionary *_fragmentedBuffersByIdentifier;
    id<DTXBlockCompressor> *_compressor;
}




// -(id)initWithMessageHandler:(id)arg0 andParseExceptionHandler:(unk)arg1  ;
-(id)parsingComplete;
-(void)_messageParsedWithHeader:(struct DTXMessageHeader )arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 destructor:(id)arg3 ;
-(void)dealloc;
-(void)parseIncomingBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)replaceCompressor:(id)arg0 ;


@end


#endif