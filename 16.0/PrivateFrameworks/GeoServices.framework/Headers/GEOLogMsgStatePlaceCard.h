// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATEPLACECARD_H
#define GEOLOGMSGSTATEPLACECARD_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPlaceActionDetails.h"

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _containedChildrenPois;
    ? _possibleActions;
    ? _unactionableUiElements;
    NSMutableArray *_commingledRichProviderIds;
    NSMutableArray *_modules;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_placecardCategory;
    NSMutableArray *_revealedModules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _placecardType;
    BOOL _transitAdvisoryBanner;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *commingledRichProviderIds;
@property (readonly, nonatomic) *NSUInteger containedChildrenPois;
@property (readonly, nonatomic) NSUInteger containedChildrenPoisCount;
@property (readonly, nonatomic) BOOL hasPlaceActionDetails;
@property (readonly, nonatomic) BOOL hasPlacecardCategory;
@property (nonatomic) BOOL hasPlacecardType;
@property (nonatomic) BOOL hasTransitAdvisoryBanner;
@property (retain, nonatomic) NSMutableArray *modules;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property (retain, nonatomic) NSString *placecardCategory;
@property (nonatomic) int placecardType;
@property (readonly, nonatomic) *int possibleActions;
@property (readonly, nonatomic) NSUInteger possibleActionsCount;
@property (retain, nonatomic) NSMutableArray *revealedModules;
@property (nonatomic) BOOL transitAdvisoryBanner;
@property (readonly, nonatomic) *int unactionableUiElements;
@property (readonly, nonatomic) NSUInteger unactionableUiElementsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)containedChildrenPoisAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)commingledRichProviderIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)modulesAtIndex:(NSUInteger)arg0 ;
-(id)placecardTypeAsString:(int)arg0 ;
-(id)possibleActionsAsString:(int)arg0 ;
-(id)revealedModulesAtIndex:(NSUInteger)arg0 ;
-(id)unactionableUiElementsAsString:(int)arg0 ;
-(int)StringAsPlacecardType:(id)arg0 ;
-(int)StringAsPossibleActions:(id)arg0 ;
-(int)StringAsUnactionableUiElements:(id)arg0 ;
-(int)possibleActionAtIndex:(NSUInteger)arg0 ;
-(int)unactionableUiElementAtIndex:(NSUInteger)arg0 ;
-(void)addCommingledRichProviderIds:(id)arg0 ;
-(void)addContainedChildrenPois:(NSUInteger)arg0 ;
-(void)addModules:(id)arg0 ;
-(void)addPossibleAction:(int)arg0 ;
-(void)addRevealedModules:(id)arg0 ;
-(void)addUnactionableUiElement:(int)arg0 ;
-(void)clearCommingledRichProviderIds;
-(void)clearContainedChildrenPois;
-(void)clearModules;
-(void)clearPossibleActions;
-(void)clearRevealedModules;
-(void)clearUnactionableUiElements;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif