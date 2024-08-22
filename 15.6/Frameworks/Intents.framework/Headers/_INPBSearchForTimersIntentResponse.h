// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSEARCHFORTIMERSINTENTRESPONSE_H
#define _INPBSEARCHFORTIMERSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForTimersIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchForTimersIntentResponse : PBCodable <_INPBSearchForTimersIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *matchedTimers; // ivar: _matchedTimers
@property (readonly, nonatomic) NSUInteger matchedTimersCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *timers; // ivar: _timers
@property (readonly, nonatomic) NSUInteger timersCount;
@property (copy, nonatomic) NSArray *unmatchedTimers; // ivar: _unmatchedTimers
@property (readonly, nonatomic) NSUInteger unmatchedTimersCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)matchedTimersAtIndex:(NSUInteger)arg0 ;
-(id)timersAtIndex:(NSUInteger)arg0 ;
-(id)unmatchedTimersAtIndex:(NSUInteger)arg0 ;
-(void)addMatchedTimers:(id)arg0 ;
-(void)addTimers:(id)arg0 ;
-(void)addUnmatchedTimers:(id)arg0 ;
-(void)clearMatchedTimers;
-(void)clearTimers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif