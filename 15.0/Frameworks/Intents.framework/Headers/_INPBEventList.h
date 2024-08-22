// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBEVENTLIST_H
#define _INPBEVENTLIST_H

@class PBCodable, NSString, NSArray;
@protocol _INPBEventList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBEventList : PBCodable <_INPBEventList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) NSUInteger eventsCount;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)eventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEvent:(id)arg0 ;
-(void)clearEvents;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif