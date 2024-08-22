// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOGENERICSTRINGDATA_H
#define GEOGENERICSTRINGDATA_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOGenericStringData : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_tokenSubstitute;
    int _privacyFilterType;
    int _stringSubstituteType;
    unsigned int _waypointIndex;
    ? _flags;
}


@property (nonatomic) BOOL hasPrivacyFilterType;
@property (nonatomic) BOOL hasStringSubstituteType;
@property (readonly, nonatomic) BOOL hasTokenSubstitute;
@property (nonatomic) BOOL hasWaypointIndex;
@property (nonatomic) int privacyFilterType;
@property (nonatomic) int stringSubstituteType;
@property (retain, nonatomic) NSString *tokenSubstitute;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int waypointIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)privacyFilterTypeAsString:(int)arg0 ;
-(id)stringSubstituteTypeAsString:(int)arg0 ;
-(int)StringAsPrivacyFilterType:(id)arg0 ;
-(int)StringAsStringSubstituteType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif