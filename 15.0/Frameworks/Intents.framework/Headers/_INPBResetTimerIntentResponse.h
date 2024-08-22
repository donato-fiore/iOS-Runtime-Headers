// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRESETTIMERINTENTRESPONSE_H
#define _INPBRESETTIMERINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBResetTimerIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBResetTimerIntentResponse : PBCodable <_INPBResetTimerIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *resetTimers; // ivar: _resetTimers
@property (readonly, nonatomic) NSUInteger resetTimersCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)resetTimersAtIndex:(NSUInteger)arg0 ;
-(void)addResetTimers:(id)arg0 ;
-(void)clearResetTimers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif