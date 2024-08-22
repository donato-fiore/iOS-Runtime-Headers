// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEVERIFIABLECLINICALRECORDSUBJECT_H
#define HDCODABLEVERIFIABLECLINICALRECORDSUBJECT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableDateComponents.h"

@interface HDCodableVerifiableClinicalRecordSubject : PBCodable <NSCopying>



@property (retain, nonatomic) HDCodableDateComponents *dateOfBirthComponents; // ivar: _dateOfBirthComponents
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) BOOL hasDateOfBirthComponents;
@property (readonly, nonatomic) BOOL hasFullName;


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