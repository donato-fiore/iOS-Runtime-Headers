// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBFINDEVENTSINTENTRESPONSE_H
#define _INPBFINDEVENTSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBFindEventsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBFindEventsIntentResponse : PBCodable <_INPBFindEventsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) NSUInteger eventsCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif