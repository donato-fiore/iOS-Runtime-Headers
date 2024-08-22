// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPTRANSITSTORAGESHIELD_H
#define MSPTRANSITSTORAGESHIELD_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOTransitShieldDataSource, NSCopying;



@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasShieldColorString;
@property (readonly, nonatomic) BOOL hasShieldText;
@property (nonatomic) BOOL hasShieldType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (retain, nonatomic) NSString *shieldColorString; // ivar: _shieldColorString
@property (readonly, nonatomic) NSString *shieldText;
@property (retain, nonatomic) NSString *shieldText; // ivar: _shieldText
@property (readonly, nonatomic) NSInteger shieldType;
@property (nonatomic) NSInteger shieldType; // ivar: _shieldType
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithShield:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif