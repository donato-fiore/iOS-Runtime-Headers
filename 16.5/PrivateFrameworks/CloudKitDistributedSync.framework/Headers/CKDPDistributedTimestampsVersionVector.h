// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPDISTRIBUTEDTIMESTAMPSVERSIONVECTOR_H
#define CKDPDISTRIBUTEDTIMESTAMPSVERSIONVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface CKDPDistributedTimestampsVersionVector : PBCodable <NSCopying>

 {
    ? _clockValueLengths;
    ? _clockValues;
    ? _stateValueLengths;
    ? _stateValues;
}


@property (readonly, nonatomic) *NSUInteger clockValueLengths;
@property (readonly, nonatomic) NSUInteger clockValueLengthsCount;
@property (readonly, nonatomic) *NSUInteger clockValues;
@property (readonly, nonatomic) NSUInteger clockValuesCount;
@property (readonly, nonatomic) *unsigned int stateValueLengths;
@property (readonly, nonatomic) NSUInteger stateValueLengthsCount;
@property (readonly, nonatomic) *int stateValues;
@property (readonly, nonatomic) NSUInteger stateValuesCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)clockValueLengthsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)clockValuesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stateValuesAsString:(int)arg0 ;
-(int)StringAsStateValues:(id)arg0 ;
-(int)stateValuesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)stateValueLengthsAtIndex:(NSUInteger)arg0 ;
-(void)addClockValueLengths:(NSUInteger)arg0 ;
-(void)addClockValues:(NSUInteger)arg0 ;
-(void)addStateValueLengths:(unsigned int)arg0 ;
-(void)addStateValues:(int)arg0 ;
-(void)clearClockValueLengths;
-(void)clearClockValues;
-(void)clearStateValueLengths;
-(void)clearStateValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif