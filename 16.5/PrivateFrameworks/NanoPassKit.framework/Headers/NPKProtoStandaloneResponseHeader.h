// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONERESPONSEHEADER_H
#define NPKPROTOSTANDALONERESPONSEHEADER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NPKProtoStandaloneResponseHeader : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)protocolVersionAsString:(int)arg0 ;
-(int)StringAsProtocolVersion:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif