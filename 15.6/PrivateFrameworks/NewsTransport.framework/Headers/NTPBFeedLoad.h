// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBFEEDLOAD_H
#define NTPBFEEDLOAD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBFeedLoad : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSString *feedViewExposureId; // ivar: _feedViewExposureId
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif