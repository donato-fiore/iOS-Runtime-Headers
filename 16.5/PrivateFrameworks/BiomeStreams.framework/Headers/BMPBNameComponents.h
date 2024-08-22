// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBNAMECOMPONENTS_H
#define BMPBNAMECOMPONENTS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBNameComponents : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (retain, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, nonatomic) BOOL hasFamilyName;
@property (readonly, nonatomic) BOOL hasGivenName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (readonly, nonatomic) BOOL hasNickname;
@property (readonly, nonatomic) BOOL hasPreviousFamilyName;
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (retain, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (retain, nonatomic) NSString *previousFamilyName; // ivar: _previousFamilyName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif