// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEMULTIPARTREADER_H
#define DEMULTIPARTREADER_H

@class NSData, NSMutableData;
@protocol DEReader;

#import <Foundation/Foundation.h>

#import "DERewindableReader.h"

@interface DEMultipartReader : NSObject <DEReader>



@property (nonatomic) BOOL endOfMessage; // ivar: _endOfMessage
@property (retain, nonatomic) NSData *endOfMessageData; // ivar: _endOfMessageData
@property (nonatomic) BOOL endOfPart; // ivar: _endOfPart
@property (retain, nonatomic) NSData *endOfPartData; // ivar: _endOfPartData
@property (nonatomic) NSUInteger maxEndSize; // ivar: _maxEndSize
@property (retain, nonatomic) NSData *nextPartData; // ivar: _nextPartData
@property (retain, nonatomic) DERewindableReader *reader; // ivar: _reader
@property (retain, nonatomic) NSMutableData *searchBuffer; // ivar: _searchBuffer


+(id)getEndOfMessageData;
+(id)getEndOfPartData;
-(BOOL)nextPart;
-(NSUInteger)getAvailableLength;
-(id)init;
-(id)initWithReader:(id)arg0 ;
-(id)internalReadDataOfLength:(NSUInteger)arg0 ;
-(id)readData;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(void)close;
-(void)dealloc;
-(void)searchForEnd;


@end


#endif