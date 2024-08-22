// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATFILEBUFFEREDPIPE_H
#define ATFILEBUFFEREDPIPE_H

@class NSPipe, NSFileHandle;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ATFileBuffer.h"

@interface ATFileBufferedPipe : NSObject {
    ATFileBuffer *_buffer;
    NSObject<OS_dispatch_queue> *_queue;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readyForData;
    BOOL _readyToClose;
}


@property (readonly, retain, nonatomic) NSFileHandle *fileHandleForReading; // ivar: _fileHandleForReading
@property (readonly, retain, nonatomic) NSFileHandle *fileHandleForWriting; // ivar: _fileHandleForWriting


+(id)pipe;
-(id)_bufferedWrite:(id)arg0 ;
-(id)init;
-(void)_inputReadyForReading:(NSUInteger)arg0 ;
-(void)_outputReadyForWriting:(NSUInteger)arg0 ;


@end


#endif