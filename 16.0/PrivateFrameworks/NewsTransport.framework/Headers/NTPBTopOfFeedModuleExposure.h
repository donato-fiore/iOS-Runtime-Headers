// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTOPOFFEEDMODULEEXPOSURE_H
#define NTPBTOPOFFEEDMODULEEXPOSURE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBTopOfFeedModuleExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasModuleEventType;
@property (readonly, nonatomic) BOOL hasModuleExposureId;
@property (nonatomic) BOOL hasModuleItemCount;
@property (nonatomic) BOOL hasModuleLocation;
@property (nonatomic) int moduleEventType; // ivar: _moduleEventType
@property (retain, nonatomic) NSData *moduleExposureId; // ivar: _moduleExposureId
@property (nonatomic) int moduleItemCount; // ivar: _moduleItemCount
@property (nonatomic) int moduleLocation; // ivar: _moduleLocation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)moduleEventTypeAsString:(int)arg0 ;
-(id)moduleLocationAsString:(int)arg0 ;
-(int)StringAsModuleEventType:(id)arg0 ;
-(int)StringAsModuleLocation:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif