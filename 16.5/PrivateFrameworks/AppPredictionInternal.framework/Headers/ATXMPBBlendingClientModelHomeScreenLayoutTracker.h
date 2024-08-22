// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBBLENDINGCLIENTMODELHOMESCREENLAYOUTTRACKER_H
#define ATXMPBBLENDINGCLIENTMODELHOMESCREENLAYOUTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingClientModelHomeScreenLayoutTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *clientModelABGroup; // ivar: _clientModelABGroup
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasLayoutType;
@property (nonatomic) BOOL hasNumSuggestionsForClientModelInLayout;
@property (retain, nonatomic) NSString *layoutType; // ivar: _layoutType
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout; // ivar: _numSuggestionsForClientModelInLayout


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