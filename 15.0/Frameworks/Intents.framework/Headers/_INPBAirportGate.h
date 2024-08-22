// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBAIRPORTGATE_H
#define _INPBAIRPORTGATE_H

@class PBCodable, NSString;
@protocol _INPBAirportGate, NSSecureCoding, NSCopying;


#import "_INPBAirport.h"

@interface _INPBAirportGate : PBCodable <_INPBAirportGate, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAirport *airport; // ivar: _airport
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *gate; // ivar: _gate
@property (readonly, nonatomic) BOOL hasAirport;
@property (readonly, nonatomic) BOOL hasGate;
@property (readonly, nonatomic) BOOL hasTerminal;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *terminal; // ivar: _terminal


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