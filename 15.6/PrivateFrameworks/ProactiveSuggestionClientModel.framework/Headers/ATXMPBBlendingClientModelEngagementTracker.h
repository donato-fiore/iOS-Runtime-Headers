// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMPBBLENDINGCLIENTMODELENGAGEMENTTRACKER_H
#define ATXMPBBLENDINGCLIENTMODELENGAGEMENTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingClientModelEngagementTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *clientModelABGroup; // ivar: _clientModelABGroup
@property (nonatomic) unsigned int clientModelCacheAge; // ivar: _clientModelCacheAge
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (nonatomic) unsigned int consumerSubTypeCacheAge; // ivar: _consumerSubTypeCacheAge
@property (nonatomic) int engagementType; // ivar: _engagementType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (nonatomic) BOOL hasClientModelCacheAge;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasConsumerSubTypeCacheAge;
@property (nonatomic) BOOL hasEngagementType;
@property (readonly, nonatomic) BOOL hasLayoutType;
@property (nonatomic) BOOL hasNumSuggestionsForClientModelInLayout;
@property (nonatomic) BOOL hasPositionInClientModelCacheOfEngagedSuggestion;
@property (retain, nonatomic) NSString *layoutType; // ivar: _layoutType
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout; // ivar: _numSuggestionsForClientModelInLayout
@property (nonatomic) unsigned int positionInClientModelCacheOfEngagedSuggestion; // ivar: _positionInClientModelCacheOfEngagedSuggestion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementTypeAsString:(int)arg0 ;
-(int)StringAsEngagementType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif