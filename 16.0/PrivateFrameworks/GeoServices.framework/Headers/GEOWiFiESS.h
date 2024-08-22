// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWIFIESS_H
#define GEOWIFIESS_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOWiFiESS : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _attributes;
    ? _authTraits;
    NSMutableArray *_bss;
    NSString *_identifier;
    NSString *_name;
    NSMutableArray *_ownerIdentifiers;
    NSMutableArray *_qualities;
    NSInteger _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _networkType;
    int _venueGroup;
    unsigned int _venueType;
    ? _flags;
}


@property (readonly, nonatomic) *int attributes;
@property (readonly, nonatomic) NSUInteger attributesCount;
@property (readonly, nonatomic) *int authTraits;
@property (readonly, nonatomic) NSUInteger authTraitsCount;
@property (retain, nonatomic) NSMutableArray *bss;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL hasVenueGroup;
@property (nonatomic) BOOL hasVenueType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int networkType;
@property (retain, nonatomic) NSMutableArray *ownerIdentifiers;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) NSInteger uniqueIdentifier;
@property (nonatomic) int venueGroup;
@property (nonatomic) unsigned int venueType;


+(BOOL)isValid:(id)arg0 ;
+(Class)ownerIdentifierType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesAsString:(int)arg0 ;
-(id)authTraitsAsString:(int)arg0 ;
-(id)bssAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(id)ownerIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)qualitiesAtIndex:(NSUInteger)arg0 ;
-(id)venueGroupAsString:(int)arg0 ;
-(int)StringAsAttributes:(id)arg0 ;
-(int)StringAsAuthTraits:(id)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(int)StringAsVenueGroup:(id)arg0 ;
-(int)attributesAtIndex:(NSUInteger)arg0 ;
-(int)authTraitsAtIndex:(NSUInteger)arg0 ;
-(void)addAttributes:(int)arg0 ;
-(void)addAuthTraits:(int)arg0 ;
-(void)addBss:(id)arg0 ;
-(void)addOwnerIdentifier:(id)arg0 ;
-(void)addQualities:(id)arg0 ;
-(void)clearAttributes;
-(void)clearAuthTraits;
-(void)clearBss;
-(void)clearOwnerIdentifiers;
-(void)clearQualities;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif