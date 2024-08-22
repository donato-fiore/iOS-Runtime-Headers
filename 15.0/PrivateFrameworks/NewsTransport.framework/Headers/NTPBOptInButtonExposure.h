// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBOPTINBUTTONEXPOSURE_H
#define NTPBOPTINBUTTONEXPOSURE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface NTPBOptInButtonExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasOptInButtonLocation;
@property (readonly, nonatomic) BOOL hasOptInButtonLocationId;
@property (nonatomic) BOOL hasOptInButtonType;
@property (nonatomic) int optInButtonLocation; // ivar: _optInButtonLocation
@property (retain, nonatomic) NSString *optInButtonLocationId; // ivar: _optInButtonLocationId
@property (nonatomic) int optInButtonType; // ivar: _optInButtonType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif