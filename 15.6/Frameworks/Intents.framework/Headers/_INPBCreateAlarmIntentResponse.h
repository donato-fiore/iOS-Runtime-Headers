// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCREATEALARMINTENTRESPONSE_H
#define _INPBCREATEALARMINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBCreateAlarmIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBAlarm.h"

@interface _INPBCreateAlarmIntentResponse : PBCodable <_INPBCreateAlarmIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAlarm *createdAlarm; // ivar: _createdAlarm
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCreatedAlarm;
@property (nonatomic) BOOL hasSuccessCode;
@property (readonly) NSUInteger hash;
@property (nonatomic) int successCode; // ivar: _successCode
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)successCodeAsString:(int)arg0 ;
-(int)StringAsSuccessCode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif