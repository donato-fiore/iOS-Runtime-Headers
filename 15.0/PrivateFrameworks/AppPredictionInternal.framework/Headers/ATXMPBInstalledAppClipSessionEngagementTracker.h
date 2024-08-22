// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMPBINSTALLEDAPPCLIPSESSIONENGAGEMENTTRACKER_H
#define ATXMPBINSTALLEDAPPCLIPSESSIONENGAGEMENTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBInstalledAppClipSessionEngagementTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (nonatomic) int engagementType; // ivar: _engagementType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) BOOL hasNumSuggestionsShown;
@property (nonatomic) unsigned int numSuggestionsShown; // ivar: _numSuggestionsShown


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