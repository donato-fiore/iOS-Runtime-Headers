// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMPBBLENDINGLAYOUTSELECTIONTRACKER_H
#define ATXMPBBLENDINGLAYOUTSELECTIONTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingLayoutSelectionTracker : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSString *execuableTypeOfHighestRankingSuggestion; // ivar: _execuableTypeOfHighestRankingSuggestion
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasExecuableTypeOfHighestRankingSuggestion;
@property (readonly, nonatomic) BOOL hasHighestConfidenceCategory;
@property (readonly, nonatomic) BOOL hasHighestRankingClientModelABGroup;
@property (readonly, nonatomic) BOOL hasHighestRankingClientModelId;
@property (readonly, nonatomic) BOOL hasLayoutType;
@property (retain, nonatomic) NSString *highestConfidenceCategory; // ivar: _highestConfidenceCategory
@property (retain, nonatomic) NSString *highestRankingClientModelABGroup; // ivar: _highestRankingClientModelABGroup
@property (retain, nonatomic) NSString *highestRankingClientModelId; // ivar: _highestRankingClientModelId
@property (retain, nonatomic) NSString *layoutType; // ivar: _layoutType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif