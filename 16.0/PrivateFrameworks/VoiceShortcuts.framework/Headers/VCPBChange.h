// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPBCHANGE_H
#define VCPBCHANGE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface VCPBChange : PBCodable <NSCopying>



@property (nonatomic) int changeType; // ivar: _changeType
@property (retain, nonatomic) NSData *message; // ivar: _message
@property (nonatomic) int messageType; // ivar: _messageType
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageTypeAsString:(int)arg0 ;
-(int)StringAsChangeType:(id)arg0 ;
-(int)StringAsMessageType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif