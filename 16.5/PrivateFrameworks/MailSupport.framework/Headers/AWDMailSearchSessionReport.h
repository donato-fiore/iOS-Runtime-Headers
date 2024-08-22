// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDMAILSEARCHSESSIONREPORT_H
#define AWDMAILSEARCHSESSIONREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDMailSearchSessionReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int emailProvider; // ivar: _emailProvider
@property (retain, nonatomic) NSMutableArray *engagements; // ivar: _engagements
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) BOOL hasMessagesLeftToIndex;
@property (nonatomic) BOOL hasPercentOfMessagesIndexed;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger messagesLeftToIndex; // ivar: _messagesLeftToIndex
@property (nonatomic) NSUInteger percentOfMessagesIndexed; // ivar: _percentOfMessagesIndexed
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailProviderAsString:(int)arg0 ;
-(id)engagementsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEmailProvider:(id)arg0 ;
-(void)addEngagements:(id)arg0 ;
-(void)clearEngagements;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif