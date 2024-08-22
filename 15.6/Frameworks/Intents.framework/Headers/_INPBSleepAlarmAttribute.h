// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSLEEPALARMATTRIBUTE_H
#define _INPBSLEEPALARMATTRIBUTE_H

@class PBCodable, NSString;
@protocol _INPBSleepAlarmAttribute, NSSecureCoding, NSCopying;


#import "_INPBDateTime.h"

@interface _INPBSleepAlarmAttribute : PBCodable <_INPBSleepAlarmAttribute, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTime *bedtime; // ivar: _bedtime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBedtime;
@property (nonatomic) BOOL hasOverride;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL override; // ivar: _override
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif