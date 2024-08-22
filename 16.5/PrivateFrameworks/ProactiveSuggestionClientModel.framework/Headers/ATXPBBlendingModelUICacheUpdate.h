// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBBLENDINGMODELUICACHEUPDATE_H
#define ATXPBBLENDINGMODELUICACHEUPDATE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ATXPBHomeScreenCachedSuggestion.h"
#import "ATXPBSpotlightSuggestionLayout.h"
#import "ATXPBSuggestionLayout.h"

@interface ATXPBBlendingModelUICacheUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat cacheCreationDate; // ivar: _cacheCreationDate
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdateUUIDStrings; // ivar: _clientModelCacheUpdateUUIDStrings
@property (retain, nonatomic) NSMutableArray *clientModelIds; // ivar: _clientModelIds
@property (retain, nonatomic) NSString *consumerSubTypeString; // ivar: _consumerSubTypeString
@property (nonatomic) BOOL hasCacheCreationDate;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (readonly, nonatomic) BOOL hasHomeScreenCachedSuggestion;
@property (readonly, nonatomic) BOOL hasSpotlightSuggestionLayout;
@property (readonly, nonatomic) BOOL hasSuggestionLayout;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) ATXPBHomeScreenCachedSuggestion *homeScreenCachedSuggestion; // ivar: _homeScreenCachedSuggestion
@property (retain, nonatomic) ATXPBSpotlightSuggestionLayout *spotlightSuggestionLayout; // ivar: _spotlightSuggestionLayout
@property (retain, nonatomic) ATXPBSuggestionLayout *suggestionLayout; // ivar: _suggestionLayout
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientModelCacheUpdateUUIDStringsAtIndex:(NSUInteger)arg0 ;
-(id)clientModelIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addClientModelCacheUpdateUUIDStrings:(id)arg0 ;
-(void)addClientModelIds:(id)arg0 ;
-(void)clearClientModelCacheUpdateUUIDStrings;
-(void)clearClientModelIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif