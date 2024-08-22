// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITEVENTTRIGGEREXECUTIONSESSION_H
#define AWDHOMEKITEVENTTRIGGEREXECUTIONSESSION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface AWDHomeKitEventTriggerExecutionSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *endEvents; // ivar: _endEvents
@property (nonatomic) int executionState; // ivar: _executionState
@property (nonatomic) BOOL hasExecutionState;
@property (nonatomic) BOOL hasResultErrorCode;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int resultErrorCode; // ivar: _resultErrorCode
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSMutableArray *triggerEvents; // ivar: _triggerEvents


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endEventsAtIndex:(NSUInteger)arg0 ;
-(id)executionStateAsString:(int)arg0 ;
-(id)triggerEventsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsExecutionState:(id)arg0 ;
-(void)addEndEvents:(id)arg0 ;
-(void)addTriggerEvents:(id)arg0 ;
-(void)clearEndEvents;
-(void)clearTriggerEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif