// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBTIMER_H
#define _INPBTIMER_H

@class PBCodable, NSString;
@protocol _INPBTimer, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"

@interface _INPBTimer : PBCodable <_INPBTimer, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBDataString *label; // ivar: _label
@property (nonatomic) CGFloat remainingTime; // ivar: _remainingTime
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif