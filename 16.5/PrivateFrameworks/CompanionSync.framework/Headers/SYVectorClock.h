// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYVECTORCLOCK_H
#define SYVECTORCLOCK_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SYVectorClock : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *clocks; // ivar: _clocks


+(void)initialize;
-(BOOL)_setTheory_isEqual:(id)arg0 ;
-(BOOL)hasClockForPeer:(id)arg0 ;
-(BOOL)hasClockForPeerID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)clockValueForPeer:(id)arg0 ;
-(NSUInteger)clockValueForPeerID:(id)arg0 ;
-(NSUInteger)hash;
-(id)clockForPeer:(id)arg0 ;
-(id)clockForPeerID:(id)arg0 ;
-(id)clocksAtIndex:(NSUInteger)arg0 ;
-(id)compactDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithJSONRepresentation:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addClocks:(id)arg0 ;
-(void)clearClocks;
-(void)copyTo:(id)arg0 ;
-(void)increaseClockForPeer:(id)arg0 by:(NSUInteger)arg1 ;
-(void)increaseClockForPeerID:(id)arg0 by:(NSUInteger)arg1 ;
-(void)incrementClockForPeer:(id)arg0 ;
-(void)incrementClockForPeerID:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setClockValue:(NSUInteger)arg0 forPeer:(id)arg1 ;
-(void)setClockValue:(NSUInteger)arg0 forPeerID:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif