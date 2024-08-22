// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBDELETETIMERINTENTRESPONSE_H
#define _INPBDELETETIMERINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBDeleteTimerIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBDeleteTimerIntentResponse : PBCodable <_INPBDeleteTimerIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *deletedTimers; // ivar: _deletedTimers
@property (readonly, nonatomic) NSUInteger deletedTimersCount;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletedTimersAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addDeletedTimers:(id)arg0 ;
-(void)clearDeletedTimers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif