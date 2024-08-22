// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLPBSCHEDULESETTINGS_H
#define SCLPBSCHEDULESETTINGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SCLPBScheduleSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (retain, nonatomic) NSMutableArray *recurrences; // ivar: _recurrences
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recurrencesAtIndex:(NSUInteger)arg0 ;
-(void)addRecurrences:(id)arg0 ;
-(void)clearRecurrences;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif