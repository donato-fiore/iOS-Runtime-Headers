// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPBALARM_H
#define MTPBALARM_H

@class PBCodable;
@protocol NSCopying;


#import "MTPBAlarmProperties.h"

@interface MTPBAlarm : PBCodable <NSCopying>



@property (retain, nonatomic) MTPBAlarmProperties *alarmProperties; // ivar: _alarmProperties


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