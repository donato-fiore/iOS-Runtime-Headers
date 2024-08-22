// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBEVENT_H
#define _INPBEVENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBEvent, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBEvent : PBCodable <_INPBEvent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *eventDescriptors; // ivar: _eventDescriptors
@property (readonly, nonatomic) NSUInteger eventDescriptorsCount;
@property (retain, nonatomic) _INPBString *eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasEventType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventDescriptorsAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEventDescriptors:(id)arg0 ;
-(void)clearEventDescriptors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif