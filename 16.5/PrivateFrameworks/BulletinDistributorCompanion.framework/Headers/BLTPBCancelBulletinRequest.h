// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBCANCELBULLETINREQUEST_H
#define BLTPBCANCELBULLETINREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) unsigned int feed; // ivar: _feed
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasFeed;
@property (readonly, nonatomic) BOOL hasPublisherMatchID;
@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (retain, nonatomic) NSString *publisherMatchID; // ivar: _publisherMatchID
@property (retain, nonatomic) NSString *universalSectionID; // ivar: _universalSectionID


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