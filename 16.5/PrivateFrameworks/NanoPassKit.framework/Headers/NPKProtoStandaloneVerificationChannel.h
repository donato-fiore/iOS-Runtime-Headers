// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEVERIFICATIONCHANNEL_H
#define NPKPROTOSTANDALONEVERIFICATIONCHANNEL_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NPKProtoStandaloneVerificationChannel : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contactPoint; // ivar: _contactPoint
@property (readonly, nonatomic) BOOL hasContactPoint;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (nonatomic) BOOL hasRequiresUserInteraction;
@property (readonly, nonatomic) BOOL hasSourceAddress;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasTypeDescription;
@property (readonly, nonatomic) BOOL hasTypeDescriptionUnlocalized;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (nonatomic) BOOL requiresUserInteraction; // ivar: _requiresUserInteraction
@property (retain, nonatomic) NSString *sourceAddress; // ivar: _sourceAddress
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *typeDescription; // ivar: _typeDescription
@property (retain, nonatomic) NSString *typeDescriptionUnlocalized; // ivar: _typeDescriptionUnlocalized


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif