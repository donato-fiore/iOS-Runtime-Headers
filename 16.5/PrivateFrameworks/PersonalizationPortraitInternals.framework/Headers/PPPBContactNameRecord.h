// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPPBCONTACTNAMERECORD_H
#define PPPBCONTACTNAMERECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface PPPBContactNameRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned char changeType; // ivar: _changeType
@property (retain, nonatomic) NSMutableArray *cityNames; // ivar: _cityNames
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) BOOL hasChangeType;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasJobTitle;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (readonly, nonatomic) BOOL hasNickname;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *phoneticFirstName; // ivar: _phoneticFirstName
@property (retain, nonatomic) NSString *phoneticLastName; // ivar: _phoneticLastName
@property (retain, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (retain, nonatomic) NSMutableArray *relatedNames; // ivar: _relatedNames
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) unsigned char source; // ivar: _source
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (retain, nonatomic) NSMutableArray *streetNames; // ivar: _streetNames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(unsigned char)arg0 ;
-(id)cityNamesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)relatedNamesAtIndex:(NSUInteger)arg0 ;
-(id)sourceAsString:(unsigned char)arg0 ;
-(id)streetNamesAtIndex:(NSUInteger)arg0 ;
-(unsigned char)StringAsChangeType:(id)arg0 ;
-(unsigned char)StringAsSource:(id)arg0 ;
-(void)addCityNames:(id)arg0 ;
-(void)addRelatedNames:(id)arg0 ;
-(void)addStreetNames:(id)arg0 ;
-(void)clearCityNames;
-(void)clearRelatedNames;
-(void)clearStreetNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif