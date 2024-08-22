// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSANALYTICSSAFARISHAREDPASSWORDEVENT_H
#define WBSANALYTICSSAFARISHAREDPASSWORDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariSharedPasswordEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInitiatedSharePasswordOutcome;
@property (nonatomic) BOOL hasPasswordSharingMechanism;
@property (nonatomic) BOOL hasReceivedSharedPasswordOutcome;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int initiatedSharePasswordOutcome; // ivar: _initiatedSharePasswordOutcome
@property (nonatomic) int passwordSharingMechanism; // ivar: _passwordSharingMechanism
@property (nonatomic) int receivedSharedPasswordOutcome; // ivar: _receivedSharedPasswordOutcome
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initiatedSharePasswordOutcomeAsString:(int)arg0 ;
-(id)passwordSharingMechanismAsString:(int)arg0 ;
-(id)receivedSharedPasswordOutcomeAsString:(int)arg0 ;
-(int)StringAsInitiatedSharePasswordOutcome:(id)arg0 ;
-(int)StringAsPasswordSharingMechanism:(id)arg0 ;
-(int)StringAsReceivedSharedPasswordOutcome:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif