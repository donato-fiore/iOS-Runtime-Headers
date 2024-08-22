// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGM2FOUNDINAPPSICS_H
#define SGM2FOUNDINAPPSICS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2FoundInAppsICS : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int datetime; // ivar: _datetime
@property (nonatomic) BOOL hasDatetime;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int timezone; // ivar: _timezone


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)datetimeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)timezoneAsString:(int)arg0 ;
-(int)StringAsDatetime:(id)arg0 ;
-(int)StringAsTimezone:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif