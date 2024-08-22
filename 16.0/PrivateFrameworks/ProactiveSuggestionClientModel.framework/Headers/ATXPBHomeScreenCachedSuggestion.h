// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBHOMESCREENCACHEDSUGGESTION_H
#define ATXPBHOMESCREENCACHEDSUGGESTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelIds; // ivar: _cachedAppPredictionPanelIds
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelLayouts; // ivar: _cachedAppPredictionPanelLayouts
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutListKeys; // ivar: _cachedSuggestedWidgetLayoutListKeys
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutLists; // ivar: _cachedSuggestedWidgetLayoutLists
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetIds; // ivar: _cachedSuggestionWidgetIds
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetLayouts; // ivar: _cachedSuggestionWidgetLayouts
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayoutKeys; // ivar: _cachedTopOfStackLayoutKeys
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayouts; // ivar: _cachedTopOfStackLayouts
@property (retain, nonatomic) NSMutableArray *fallbackSuggestions; // ivar: _fallbackSuggestions
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cachedAppPredictionPanelIdsAtIndex:(NSUInteger)arg0 ;
-(id)cachedAppPredictionPanelLayoutsAtIndex:(NSUInteger)arg0 ;
-(id)cachedSuggestedWidgetLayoutListKeysAtIndex:(NSUInteger)arg0 ;
-(id)cachedSuggestedWidgetLayoutListsAtIndex:(NSUInteger)arg0 ;
-(id)cachedSuggestionWidgetIdsAtIndex:(NSUInteger)arg0 ;
-(id)cachedSuggestionWidgetLayoutsAtIndex:(NSUInteger)arg0 ;
-(id)cachedTopOfStackLayoutKeysAtIndex:(NSUInteger)arg0 ;
-(id)cachedTopOfStackLayoutsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fallbackSuggestionsAtIndex:(NSUInteger)arg0 ;
-(void)addCachedAppPredictionPanelIds:(id)arg0 ;
-(void)addCachedAppPredictionPanelLayouts:(id)arg0 ;
-(void)addCachedSuggestedWidgetLayoutListKeys:(id)arg0 ;
-(void)addCachedSuggestedWidgetLayoutLists:(id)arg0 ;
-(void)addCachedSuggestionWidgetIds:(id)arg0 ;
-(void)addCachedSuggestionWidgetLayouts:(id)arg0 ;
-(void)addCachedTopOfStackLayoutKeys:(id)arg0 ;
-(void)addCachedTopOfStackLayouts:(id)arg0 ;
-(void)addFallbackSuggestions:(id)arg0 ;
-(void)clearCachedAppPredictionPanelIds;
-(void)clearCachedAppPredictionPanelLayouts;
-(void)clearCachedSuggestedWidgetLayoutListKeys;
-(void)clearCachedSuggestedWidgetLayoutLists;
-(void)clearCachedSuggestionWidgetIds;
-(void)clearCachedSuggestionWidgetLayouts;
-(void)clearCachedTopOfStackLayoutKeys;
-(void)clearCachedTopOfStackLayouts;
-(void)clearFallbackSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif