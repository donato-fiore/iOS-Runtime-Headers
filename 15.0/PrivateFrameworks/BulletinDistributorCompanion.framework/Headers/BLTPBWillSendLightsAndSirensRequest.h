// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPBWILLSENDLIGHTSANDSIRENSREQUEST_H
#define BLTPBWILLSENDLIGHTSANDSIRENSREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface BLTPBWillSendLightsAndSirensRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) BOOL hasSystemApp;
@property (retain, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (nonatomic) BOOL systemApp; // ivar: _systemApp


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