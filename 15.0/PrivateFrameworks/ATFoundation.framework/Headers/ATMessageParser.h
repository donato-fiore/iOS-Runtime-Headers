// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATMESSAGEPARSER_H
#define ATMESSAGEPARSER_H

@class NSMutableData, NSError;

#import <Foundation/Foundation.h>


@interface ATMessageParser : NSObject {
    NSMutableData *_parserData;
    NSUInteger _curObjectLength;
    *void _objectDataBuffer;
    NSUInteger _objectDataLen;
    char _varIntBuf;
    NSUInteger _varIntDataLen;
}


@property (readonly, nonatomic) Class messageClass; // ivar: _messageClass
@property (copy, nonatomic) id *objectParsedBlock; // ivar: _objectParsedBlock
@property (readonly, nonatomic) NSError *parserError; // ivar: _parserError


-(BOOL)_parseObjectFromData:(id)arg0 ;
-(BOOL)_parseObjectLength:(char *)arg0 length:(NSUInteger)arg1 bytesConsumed:(*NSUInteger)arg2 ;
-(BOOL)processData:(char *)arg0 length:(NSInteger)arg1 ;
-(id)initWithMessageClass:(Class)arg0 ;
-(void)dealloc;


@end


#endif