// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSTEXTFILE_H
#define DSTEXTFILE_H

@class NSFileHandle, NSData, NSMutableArray;
@protocol DSTextFileEnumeratorControl;

#import <Foundation/Foundation.h>


@interface DSTextFile : NSObject <DSTextFileEnumeratorControl>



@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (nonatomic) BOOL cancelEnumeration; // ivar: _cancelEnumeration
@property (nonatomic) NSUInteger currentLineIndex; // ivar: _currentLineIndex
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (nonatomic) BOOL isEnumerating; // ivar: _isEnumerating
@property (retain, nonatomic) NSData *lineBreak; // ivar: _lineBreak
@property (retain, nonatomic) NSMutableArray *linePositions; // ivar: _linePositions
@property (nonatomic) NSInteger skipCount; // ivar: _skipCount


+(id)textFileWithPath:(id)arg0 ;
-(BOOL)advanceToNextLine:(*id)arg0 ;
-(BOOL)searchForNextLineFromCurrentPosition:(*id)arg0 ;
-(NSUInteger)currentOffset;
-(NSUInteger)getOffsetAtLineIndex:(NSUInteger)arg0 ;
-(id)extractLine:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFilePath:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 withBufferSize:(NSUInteger)arg1 ;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(void)end;
-(void)enumerateUsingBlock:(id)arg0 ;
-(void)resetEnumerator;
-(void)seekToBeginning;
-(void)seekToOffset:(NSUInteger)arg0 ;
-(void)skipWithLines:(NSInteger)arg0 ;


@end


#endif