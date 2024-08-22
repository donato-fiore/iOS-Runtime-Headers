// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBBIOMEPROACTIVESUGGESTIONUIFEEDBACKRESULT_H
#define ATXPBBIOMEPROACTIVESUGGESTIONUIFEEDBACKRESULT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ATXPBBiomeProactiveSuggestionUIFeedbackResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *blendingUICacheUpdateUUID; // ivar: _blendingUICacheUpdateUUID
@property (nonatomic) CGFloat clientModelCacheCreationDate; // ivar: _clientModelCacheCreationDate
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSMutableArray *engagedSuggestions; // ivar: _engagedSuggestions
@property (readonly, nonatomic) BOOL hasBlendingUICacheUpdateUUID;
@property (nonatomic) BOOL hasClientModelCacheCreationDate;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasSessionEndDate;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSessionStartDate;
@property (retain, nonatomic) NSMutableArray *rejectedSuggestions; // ivar: _rejectedSuggestions
@property (nonatomic) CGFloat sessionEndDate; // ivar: _sessionEndDate
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) CGFloat sessionStartDate; // ivar: _sessionStartDate
@property (retain, nonatomic) NSMutableArray *shownSuggestions; // ivar: _shownSuggestions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagedSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)rejectedSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)shownSuggestionsAtIndex:(NSUInteger)arg0 ;
-(void)addEngagedSuggestions:(id)arg0 ;
-(void)addRejectedSuggestions:(id)arg0 ;
-(void)addShownSuggestions:(id)arg0 ;
-(void)clearEngagedSuggestions;
-(void)clearRejectedSuggestions;
-(void)clearShownSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif