// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACETAPRECORDDECODER_H
#define DTDTRACETAPRECORDDECODER_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "_XRDTraceStackTrace.h"

@interface DTDTraceTapRecordDecoder : NSObject {
    _XRDTraceStackTrace *_userStackTrace;
    _XRDTraceStackTrace *_kernelStackTrace;
    *__sFILE _dtraceFile;
    char * _readBuf;
    NSUInteger _bytesInReadBuffer;
    NSInteger _currentFilepos;
}


@property (readonly, retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) unsigned int maxStackDepth; // ivar: _maxStackDepth


+(char *)stringDelimiter;
+(unsigned int)stringDelimiterLength;
-(*void)_processUnformattedData:(char *)arg0 len:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 block:(id)arg3 ;
-(id)initWithFileURL:(id)arg0 maxStackDepth:(unsigned int)arg1 ;
-(void)dealloc;
-(void)enumerateRecordsUpToPosition:(NSInteger)arg0 timestamp:(NSUInteger)arg1 block:(id)arg2 ;


@end


#endif