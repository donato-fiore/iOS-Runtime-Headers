// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTCPPETINTERACTION_H
#define FTCPPETINTERACTION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface FTCPPETInteraction : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *duration; // ivar: _duration
@property (nonatomic) BOOL isInbound; // ivar: _isInbound
@property (retain, nonatomic) NSString *mechanism; // ivar: _mechanism
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif