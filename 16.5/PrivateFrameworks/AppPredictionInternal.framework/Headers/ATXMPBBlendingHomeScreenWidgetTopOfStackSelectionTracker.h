// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBBLENDINGHOMESCREENWIDGETTOPOFSTACKSELECTIONTRACKER_H
#define ATXMPBBLENDINGHOMESCREENWIDGETTOPOFSTACKSELECTIONTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingHomeScreenWidgetTopOfStackSelectionTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *clientModelABGroup; // ivar: _clientModelABGroup
@property (retain, nonatomic) NSString *clientModelIdOfHighestRankingSuggestion; // ivar: _clientModelIdOfHighestRankingSuggestion
@property (retain, nonatomic) NSString *execuableTypeOfHighestRankingSuggestion; // ivar: _execuableTypeOfHighestRankingSuggestion
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (readonly, nonatomic) BOOL hasClientModelIdOfHighestRankingSuggestion;
@property (readonly, nonatomic) BOOL hasExecuableTypeOfHighestRankingSuggestion;
@property (readonly, nonatomic) BOOL hasHighestConfidenceCategory;
@property (readonly, nonatomic) BOOL hasLayoutType;
@property (nonatomic) BOOL hasSelectionType;
@property (nonatomic) BOOL hasWidgetsInStack;
@property (retain, nonatomic) NSString *highestConfidenceCategory; // ivar: _highestConfidenceCategory
@property (retain, nonatomic) NSString *layoutType; // ivar: _layoutType
@property (nonatomic) int selectionType; // ivar: _selectionType
@property (nonatomic) unsigned int widgetsInStack; // ivar: _widgetsInStack


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)selectionTypeAsString:(int)arg0 ;
-(int)StringAsSelectionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif