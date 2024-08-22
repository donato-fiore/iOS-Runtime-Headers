// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBTODAYSECTIONSMAPPING_H
#define NTPBTODAYSECTIONSMAPPING_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBTodaySectionsMapping : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)identifiersAtIndex:(NSUInteger)arg0 ;
-(void)addIdentifiers:(id)arg0 ;
-(void)clearIdentifiers;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif