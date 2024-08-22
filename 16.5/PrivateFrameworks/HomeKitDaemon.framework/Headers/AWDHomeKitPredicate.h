// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITPREDICATE_H
#define AWDHOMEKITPREDICATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitPredicate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL containsCalendarTime; // ivar: _containsCalendarTime
@property (nonatomic) BOOL containsCharacteristicValue; // ivar: _containsCharacteristicValue
@property (nonatomic) BOOL containsSignificantTime; // ivar: _containsSignificantTime
@property (nonatomic) BOOL containsSignificantTimeOffset; // ivar: _containsSignificantTimeOffset
@property (nonatomic) BOOL hasContainsCalendarTime;
@property (nonatomic) BOOL hasContainsCharacteristicValue;
@property (nonatomic) BOOL hasContainsSignificantTime;
@property (nonatomic) BOOL hasContainsSignificantTimeOffset;
@property (retain, nonatomic) NSMutableArray *presenceEvents; // ivar: _presenceEvents


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)presenceEventsAtIndex:(NSUInteger)arg0 ;
-(void)addPresenceEvents:(id)arg0 ;
-(void)clearPresenceEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif