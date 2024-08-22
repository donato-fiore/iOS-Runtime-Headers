// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEMEDICATIONDOSAGE_H
#define HDCODABLEMEDICATIONDOSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableMedicalCoding.h"
#import "HDCodableMedicalDateInterval.h"

@interface HDCodableMedicationDosage : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasInstruction;
@property (readonly, nonatomic) BOOL hasMethodCoding;
@property (readonly, nonatomic) BOOL hasRouteCoding;
@property (readonly, nonatomic) BOOL hasSiteCoding;
@property (readonly, nonatomic) BOOL hasTimingPeriod;
@property (retain, nonatomic) NSString *instruction; // ivar: _instruction
@property (retain, nonatomic) HDCodableMedicalCoding *methodCoding; // ivar: _methodCoding
@property (retain, nonatomic) HDCodableMedicalCoding *routeCoding; // ivar: _routeCoding
@property (retain, nonatomic) HDCodableMedicalCoding *siteCoding; // ivar: _siteCoding
@property (retain, nonatomic) HDCodableMedicalDateInterval *timingPeriod; // ivar: _timingPeriod


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif