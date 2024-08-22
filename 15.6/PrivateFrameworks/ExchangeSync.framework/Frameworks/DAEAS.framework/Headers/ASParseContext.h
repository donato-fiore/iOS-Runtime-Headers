// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPARSECONTEXT_H
#define ASPARSECONTEXT_H

@class NSMutableArray, NSFileHandle, NSString;

#import <Foundation/Foundation.h>

#import "ASTrafficLogger.h"

@interface ASParseContext : NSObject

@property (retain, nonatomic) NSMutableArray *bypassedDataBuffers; // ivar: _bypassedDataBuffers
@property (nonatomic) int codePage; // ivar: _codePage
@property (nonatomic) NSInteger curOffset; // ivar: _curOffset
@property (nonatomic) NSInteger currentBytesReceivedCount; // ivar: _currentBytesReceivedCount
@property (retain, nonatomic) NSMutableArray *dataBuffers; // ivar: _dataBuffers
@property (nonatomic) int dataGeneration; // ivar: _dataGeneration
@property (nonatomic) NSInteger expectedTotalBytesCount; // ivar: _expectedTotalBytesCount
@property (nonatomic) BOOL keepPreviousData; // ivar: _keepPreviousData
@property (nonatomic) unsigned int lastFoundBufferWithoutLineEnding; // ivar: _lastFoundBufferWithoutLineEnding
@property (nonatomic) BOOL lastLookedAtBufferHadStringEndPrefix; // ivar: _lastLookedAtBufferHadStringEndPrefix
@property (retain, nonatomic) NSFileHandle *logFileHandle; // ivar: _logFileHandle
@property (retain, nonatomic) NSString *logFilePath; // ivar: _logFilePath
@property (nonatomic) BOOL moreDataExpected; // ivar: _moreDataExpected
@property (nonatomic) unsigned int numTokensInBuffersWithoutLineEndings; // ivar: _numTokensInBuffersWithoutLineEndings
@property (nonatomic) NSUInteger offsetIntoFirstData; // ivar: _offsetIntoFirstData
@property (retain, nonatomic) NSString *parseErrorReason; // ivar: _parseErrorReason
@property (nonatomic) int streamingState; // ivar: _streamingState
@property (retain, nonatomic) ASTrafficLogger *trafficLogger; // ivar: _trafficLogger


-(BOOL)advanceOffsetByAmount:(unsigned int)arg0 ;
-(BOOL)advanceOffsetByAmount:(unsigned int)arg0 retainLastToken:(BOOL)arg1 ;
-(BOOL)hasNumberOfTokensRemaining:(unsigned int)arg0 ;
-(NSInteger)goodSizeForBuffer;
-(char *)bufferForLength:(unsigned int)arg0 shouldFree:(*BOOL)arg1 ;
-(id)bufferWithAllData;
-(id)init;
-(int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)arg0 ;
-(int)numTokensForNextOpaqueData;
-(int)numTokensForNextString;
-(int)numTokensStreamableForNextStringSizeOfTerminator:(*int)arg0 ;
-(int)numberOfBytesUntilStringEnd:(char *)arg0 searchStringLength:(int)arg1 acceptingBufferBits:(BOOL)arg2 ;
-(unsigned char)byteAtOffsetFromCurrentByte:(unsigned int)arg0 ;
-(unsigned char)currentByte;
-(unsigned char)nextByte;
-(void)addData:(id)arg0 ;
-(void)dealloc;
-(void)flushLogs;
-(void)invalidateBuffers;
-(void)resetToZeroOffset;
-(void)setShouldLog:(BOOL)arg0 ;


@end


#endif