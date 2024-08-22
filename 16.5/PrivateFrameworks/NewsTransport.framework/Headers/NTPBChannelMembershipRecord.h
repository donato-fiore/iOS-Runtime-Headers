// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBCHANNELMEMBERSHIPRECORD_H
#define NTPBCHANNELMEMBERSHIPRECORD_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (nonatomic) BOOL canAccessDrafts; // ivar: _canAccessDrafts
@property (retain, nonatomic) NSString *channelID; // ivar: _channelID
@property (retain, nonatomic) NSString *draftArticleListID; // ivar: _draftArticleListID
@property (retain, nonatomic) NSString *draftIssueListID; // ivar: _draftIssueListID
@property (readonly, nonatomic) BOOL hasBase;
@property (nonatomic) BOOL hasCanAccessDrafts;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (readonly, nonatomic) BOOL hasDraftArticleListID;
@property (readonly, nonatomic) BOOL hasDraftIssueListID;


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