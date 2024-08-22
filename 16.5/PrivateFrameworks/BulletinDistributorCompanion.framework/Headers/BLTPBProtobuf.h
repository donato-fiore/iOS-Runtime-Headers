// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBPROTOBUF_H
#define BLTPBPROTOBUF_H

@class IDSProtobuf, PBCodable;



@interface BLTPBProtobuf : IDSProtobuf

@property (retain, nonatomic) IDSProtobuf *idsProtobuf; // ivar: _idsProtobuf
@property (retain, nonatomic) PBCodable *protobuf; // ivar: _protobuf
@property (readonly, nonatomic) NSInteger sequenceNumberError; // ivar: _sequenceNumberError
@property (readonly, nonatomic) NSUInteger sessionState; // ivar: _sessionState


-(id)initWithIDSProtobuf:(id)arg0 sequenceNumberManager:(id)arg1 ;
-(id)initWithProtobuf:(id)arg0 type:(unsigned short)arg1 isResponse:(BOOL)arg2 sequenceNumberManager:(id)arg3 ;


@end


#endif