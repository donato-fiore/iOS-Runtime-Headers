// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCCMESSAGE_H
#define VCCCMESSAGE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface VCCCMessage : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (retain, nonatomic) NSString *topic; // ivar: _topic
@property (nonatomic) NSUInteger transactionID; // ivar: _transactionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif