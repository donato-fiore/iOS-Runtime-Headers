// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPBSETNOTIFICATIONSSOUNDREQUEST_H
#define BLTPBSETNOTIFICATIONSSOUNDREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface BLTPBSetNotificationsSoundRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) BOOL hasSound;
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (nonatomic) int sound; // ivar: _sound


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)soundAsString:(int)arg0 ;
-(int)StringAsSound:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif