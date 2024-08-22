// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBCHANGEALARMSTATUSINTENTRESPONSE_H
#define _INPBCHANGEALARMSTATUSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBChangeAlarmStatusIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBChangeAlarmStatusIntentResponse : PBCodable <_INPBChangeAlarmStatusIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *modifiedAlarms; // ivar: _modifiedAlarms
@property (readonly, nonatomic) NSUInteger modifiedAlarmsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)modifiedAlarmsAtIndex:(NSUInteger)arg0 ;
-(void)addModifiedAlarms:(id)arg0 ;
-(void)clearModifiedAlarms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif