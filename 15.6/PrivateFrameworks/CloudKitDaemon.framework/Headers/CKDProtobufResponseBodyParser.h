// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPROTOBUFRESPONSEBODYPARSER_H
#define CKDPROTOBUFRESPONSEBODYPARSER_H

@class NSMutableData;


#import "CKDResponseBodyParser.h"

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

@property (nonatomic) NSUInteger curObjectLength; // ivar: _curObjectLength
@property (nonatomic) BOOL isParsing; // ivar: _isParsing
@property (retain, nonatomic) Class messageClass; // ivar: _messageClass
@property (nonatomic) BOOL parsingStandaloneMessage; // ivar: _parsingStandaloneMessage
@property (retain, nonatomic) NSMutableData *tailParserData; // ivar: _tailParserData


-(BOOL)_parseObjectFromData:(id)arg0 rawData:(id)arg1 ;
-(BOOL)_parseObjects:(BOOL)arg0 ;
-(id)initWithQoS:(NSInteger)arg0 ;
-(void)finishWithCompletion:(id)arg0 ;
-(void)processData:(id)arg0 ;


@end


#endif