// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHGEODECORATION_H
#define GEOPDSEARCHGEODECORATION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOPDSearchGeoDecoration : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_canonicalForm;
    NSString *_cardinalWord;
    NSString *_ordinalWord;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isArticle;
    BOOL _isCardinal;
    BOOL _isDirection;
    BOOL _isDropped;
    BOOL _isMultiTokenDirection;
    BOOL _isMultiTokenTitle;
    BOOL _isMultiTokenType;
    BOOL _isOrdinal;
    BOOL _isPersonalName;
    BOOL _isStopWord;
    BOOL _isTitle;
    BOOL _isType;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif