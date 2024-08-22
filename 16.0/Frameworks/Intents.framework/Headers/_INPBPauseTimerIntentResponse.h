// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBPAUSETIMERINTENTRESPONSE_H
#define _INPBPAUSETIMERINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPauseTimerIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBPauseTimerIntentResponse : PBCodable <_INPBPauseTimerIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *pausedTimers; // ivar: _pausedTimers
@property (readonly, nonatomic) NSUInteger pausedTimersCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)pausedTimersAtIndex:(NSUInteger)arg0 ;
-(void)addPausedTimers:(id)arg0 ;
-(void)clearPausedTimers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif