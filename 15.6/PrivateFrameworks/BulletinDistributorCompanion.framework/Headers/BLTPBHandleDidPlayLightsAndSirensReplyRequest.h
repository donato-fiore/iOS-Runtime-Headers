// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPBHANDLEDIDPLAYLIGHTSANDSIRENSREPLYREQUEST_H
#define BLTPBHANDLEDIDPLAYLIGHTSANDSIRENSREPLYREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) BOOL didPlayLightsAndSirens; // ivar: _didPlayLightsAndSirens
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasDidPlayLightsAndSirens;
@property (readonly, nonatomic) BOOL hasPhoneSectionID;
@property (readonly, nonatomic) BOOL hasPublisherMatchID;
@property (readonly, nonatomic) BOOL hasReplyToken;
@property (retain, nonatomic) NSString *phoneSectionID; // ivar: _phoneSectionID
@property (retain, nonatomic) NSString *publisherMatchID; // ivar: _publisherMatchID
@property (retain, nonatomic) NSString *replyToken; // ivar: _replyToken


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