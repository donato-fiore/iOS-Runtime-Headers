// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSLINEREADER_H
#define BCSLINEREADER_H

@class NSURL, NSString, NSInputStream, NSMutableData;
@protocol BCSLineReading;

#import <Foundation/Foundation.h>


@interface BCSLineReader : NSObject <BCSLineReading>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) char * beginLine; // ivar: _beginLine
@property (readonly, nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) char * endBuffer; // ivar: _endBuffer
@property (nonatomic) char * endLine; // ivar: _endLine
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) NSMutableData *lineBuffer; // ivar: _lineBuffer
@property (readonly, nonatomic) NSUInteger maxLineSize; // ivar: _maxLineSize
@property (retain, nonatomic) NSMutableData *readBuffer; // ivar: _readBuffer
@property (readonly) Class superclass;


-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 bufferSize:(NSUInteger)arg1 maxLineSize:(NSUInteger)arg2 ;
-(id)readLine;
-(void)dealloc;
-(void)refillReadBuffer;


@end


#endif