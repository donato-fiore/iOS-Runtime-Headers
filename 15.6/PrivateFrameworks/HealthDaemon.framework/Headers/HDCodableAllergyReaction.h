// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEALLERGYREACTION_H
#define HDCODABLEALLERGYREACTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HDCodableMedicalDate.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableAllergyReaction : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (readonly, nonatomic) BOOL hasSeverityCoding;
@property (retain, nonatomic) NSMutableArray *manifestationCodings; // ivar: _manifestationCodings
@property (retain, nonatomic) HDCodableMedicalDate *onsetDate; // ivar: _onsetDate
@property (retain, nonatomic) HDCodableMedicalCoding *severityCoding; // ivar: _severityCoding


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)manifestationCodingsAtIndex:(NSUInteger)arg0 ;
-(void)addManifestationCodings:(id)arg0 ;
-(void)clearManifestationCodings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif