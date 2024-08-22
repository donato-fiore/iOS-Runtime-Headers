// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOREVEALEDPLACECARDMODULE_H
#define GEOREVEALEDPLACECARDMODULE_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORevealedPlaceCardModuleTypeHours.h"
#import "GEORevealedPlaceCardModuleTypeInfos.h"
#import "GEORevealedPlaceCardModuleTypePhotos.h"
#import "GEORevealedPlaceCardModuleTypeShowcase.h"
#import "GEORevealedPlaceCardModuleTypeTitle.h"
#import "GEORevealedPlaceCardModuleTypeUnifiedActionRow.h"

@interface GEORevealedPlaceCardModule : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORevealedPlaceCardModuleTypeHours *_hours;
    GEORevealedPlaceCardModuleTypeInfos *_infos;
    GEORevealedPlaceCardModuleTypePhotos *_photos;
    GEORevealedPlaceCardModuleTypeShowcase *_showcase;
    GEORevealedPlaceCardModuleTypeTitle *_title;
    GEORevealedPlaceCardModuleTypeUnifiedActionRow *_unifiedActionRow;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasHours;
@property (readonly, nonatomic) BOOL hasInfos;
@property (readonly, nonatomic) BOOL hasPhotos;
@property (readonly, nonatomic) BOOL hasShowcase;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUnifiedActionRow;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeHours *hours;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeInfos *infos;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypePhotos *photos;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeShowcase *showcase;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeTitle *title;
@property (nonatomic) int type;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeUnifiedActionRow *unifiedActionRow;


+(BOOL)isValid:(id)arg0 ;
+(id)moduleWithType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif