// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDACTIVITYAWDACTIVITYCOMPANIONINVITATIONEVENT_H
#define HDACTIVITYAWDACTIVITYCOMPANIONINVITATIONEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (nonatomic) int failureReason; // ivar: _failureReason
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) BOOL hasRetryExpected;
@property (nonatomic) BOOL hasStage;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL retryExpected; // ivar: _retryExpected
@property (nonatomic) int stage; // ivar: _stage
@property (nonatomic) BOOL success; // ivar: _success
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)failureReasonAsString:(int)arg0 ;
-(id)stageAsString:(int)arg0 ;
-(int)StringAsAction:(id)arg0 ;
-(int)StringAsFailureReason:(id)arg0 ;
-(int)StringAsStage:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif