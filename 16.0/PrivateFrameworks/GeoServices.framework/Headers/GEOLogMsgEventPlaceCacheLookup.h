// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTPLACECACHELOOKUP_H
#define GEOLOGMSGEVENTPLACECACHELOOKUP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventPlaceCacheLookup : PBCodable <NSCopying>

 {
    NSUInteger _businessId;
    NSString *_requestAppIdentifier;
    unsigned int _bytes;
    int _localSearchProviderID;
    int _lookupResult;
    ? _flags;
}


@property (nonatomic) NSUInteger businessId;
@property (nonatomic) unsigned int bytes;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) BOOL hasLookupResult;
@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int lookupResult;
@property (retain, nonatomic) NSString *requestAppIdentifier;


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
-(id)lookupResultAsString:(int)arg0 ;
-(int)StringAsLookupResult:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif