// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBSETNOTIFICATIONSGROUPINGREQUEST_H
#define BLTPBSETNOTIFICATIONSGROUPINGREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int grouping; // ivar: _grouping
@property (nonatomic) BOOL hasGrouping;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupingAsString:(int)arg0 ;
-(int)StringAsGrouping:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif