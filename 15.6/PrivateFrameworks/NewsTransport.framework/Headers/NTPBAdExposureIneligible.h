// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBADEXPOSUREINELIGIBLE_H
#define NTPBADEXPOSUREINELIGIBLE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBAdExposureIneligible : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int exposureIneligibleLocationType; // ivar: _exposureIneligibleLocationType
@property (retain, nonatomic) NSString *exposureIneligibleLocationTypeId; // ivar: _exposureIneligibleLocationTypeId
@property (nonatomic) int exposureIneligibleReason; // ivar: _exposureIneligibleReason
@property (nonatomic) int feedType; // ivar: _feedType
@property (nonatomic) BOOL hasExposureIneligibleLocationType;
@property (readonly, nonatomic) BOOL hasExposureIneligibleLocationTypeId;
@property (nonatomic) BOOL hasExposureIneligibleReason;
@property (nonatomic) BOOL hasFeedType;


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