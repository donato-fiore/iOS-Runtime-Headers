// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBPERSONALIZATIONCHANGEGROUP_H
#define NTPBPERSONALIZATIONCHANGEGROUP_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger changeNumber; // ivar: _changeNumber
@property (retain, nonatomic) NSMutableArray *deltas; // ivar: _deltas
@property (nonatomic) BOOL hasChangeNumber;
@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier; // ivar: _instanceIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltasAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDeltas:(id)arg0 ;
-(void)clearDeltas;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif