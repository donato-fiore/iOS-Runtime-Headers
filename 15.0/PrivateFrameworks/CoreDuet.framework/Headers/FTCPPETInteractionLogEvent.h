// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTCPPETINTERACTIONLOGEVENT_H
#define FTCPPETINTERACTIONLOGEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface FTCPPETInteractionLogEvent : PBCodable <NSCopying>



@property (nonatomic) NSUInteger hashedUserId; // ivar: _hashedUserId
@property (retain, nonatomic) NSMutableArray *interactions; // ivar: _interactions
@property (nonatomic) NSUInteger snapshotTimestamp; // ivar: _snapshotTimestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interactionsAtIndex:(NSUInteger)arg0 ;
-(void)addInteractions:(id)arg0 ;
-(void)clearInteractions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif