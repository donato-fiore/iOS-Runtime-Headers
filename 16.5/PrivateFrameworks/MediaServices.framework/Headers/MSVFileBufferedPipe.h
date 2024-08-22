// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVFILEBUFFEREDPIPE_H
#define MSVFILEBUFFEREDPIPE_H

@class NSFileHandle, NSPipe, NSData, NSMutableSet;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSVFileBufferedPipe : NSObject {
    NSFileHandle *_writeBufferFileHandle;
    NSFileHandle *_readBufferFileHandle;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readyForData;
    BOOL _hasBufferedData;
    BOOL _readSourceClosed;
    NSData *_dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_uniqueWriteErrors;
    NSInteger _writeSourceState;
}


@property (readonly, retain, nonatomic) NSFileHandle *fileHandleForReading; // ivar: _fileHandleForReading
@property (readonly, retain, nonatomic) NSFileHandle *fileHandleForWriting; // ivar: _fileHandleForWriting


+(id)pipe;
-(id)init;
-(void)_createBufferFiles;
-(void)_inputReadyForReading:(NSUInteger)arg0 ;
-(void)_outputReadyForWriting:(NSUInteger)arg0 ;
-(void)_writeBufferedData;


@end


#endif