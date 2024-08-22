// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBISSUEREADINGHISTORYITEM_H
#define NTPBISSUEREADINGHISTORYITEM_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasIssueID;
@property (readonly, nonatomic) BOOL hasLastBadgedPBDate;
@property (readonly, nonatomic) BOOL hasLastEngagedPBDate;
@property (readonly, nonatomic) BOOL hasLastRemovedFromMyMagazinesPBDate;
@property (readonly, nonatomic) BOOL hasLastSeenPBDate;
@property (readonly, nonatomic) BOOL hasLastVisitedArticleID;
@property (readonly, nonatomic) BOOL hasLastVisitedPBDate;
@property (readonly, nonatomic) BOOL hasLastVisitedPageID;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *issueID; // ivar: _issueID
@property (retain, nonatomic) NTPBDate *lastBadgedPBDate; // ivar: _lastBadgedPBDate
@property (retain, nonatomic) NTPBDate *lastEngagedPBDate; // ivar: _lastEngagedPBDate
@property (retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate; // ivar: _lastRemovedFromMyMagazinesPBDate
@property (retain, nonatomic) NTPBDate *lastSeenPBDate; // ivar: _lastSeenPBDate
@property (retain, nonatomic) NSString *lastVisitedArticleID; // ivar: _lastVisitedArticleID
@property (retain, nonatomic) NTPBDate *lastVisitedPBDate; // ivar: _lastVisitedPBDate
@property (retain, nonatomic) NSString *lastVisitedPageID; // ivar: _lastVisitedPageID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif