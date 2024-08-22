// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBISSUEDATA_H
#define NTPBISSUEDATA_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBIssueData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsBundlePaid;
@property (readonly, nonatomic) BOOL hasIssueId;
@property (nonatomic) BOOL hasIssueType;
@property (nonatomic) BOOL isBundlePaid; // ivar: _isBundlePaid
@property (retain, nonatomic) NSString *issueId; // ivar: _issueId
@property (nonatomic) int issueType; // ivar: _issueType
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)issueTypeAsString:(int)arg0 ;
-(id)topicIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsIssueType:(id)arg0 ;
-(void)addTopicIds:(id)arg0 ;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif