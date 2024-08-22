// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBUPDATEALARMINTENTRESPONSE_H
#define _INPBUPDATEALARMINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBUpdateAlarmIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBAlarm.h"

@interface _INPBUpdateAlarmIntentResponse : PBCodable <_INPBUpdateAlarmIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *conflictAlarms; // ivar: _conflictAlarms
@property (readonly, nonatomic) NSUInteger conflictAlarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUpdatedAlarm;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBAlarm *updatedAlarm; // ivar: _updatedAlarm


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)conflictAlarmsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addConflictAlarms:(id)arg0 ;
-(void)clearConflictAlarms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif