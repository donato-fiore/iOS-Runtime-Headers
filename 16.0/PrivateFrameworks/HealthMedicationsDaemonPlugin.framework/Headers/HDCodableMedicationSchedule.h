// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEMEDICATIONSCHEDULE_H
#define HDCODABLEMEDICATIONSCHEDULE_H

@class PBCodable, NSString, HDCodableDateComponents, NSMutableArray, NSData;
@protocol NSCopying;



@interface HDCodableMedicationSchedule : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *createdTimeZone; // ivar: _createdTimeZone
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (retain, nonatomic) HDCodableDateComponents *cycleStartDateComponents; // ivar: _cycleStartDateComponents
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) CGFloat endDateTime; // ivar: _endDateTime
@property (nonatomic) CGFloat frequencyType; // ivar: _frequencyType
@property (readonly, nonatomic) BOOL hasCreatedTimeZone;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasCycleStartDateComponents;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasEndDateTime;
@property (nonatomic) BOOL hasFrequencyType;
@property (readonly, nonatomic) BOOL hasMedicationIdentifier;
@property (readonly, nonatomic) BOOL hasMedicationUUID;
@property (readonly, nonatomic) BOOL hasNote;
@property (nonatomic) BOOL hasStartDateTime;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSMutableArray *intervalDatas; // ivar: _intervalDatas
@property (retain, nonatomic) NSString *medicationIdentifier; // ivar: _medicationIdentifier
@property (retain, nonatomic) NSData *medicationUUID; // ivar: _medicationUUID
@property (retain, nonatomic) NSString *note; // ivar: _note
@property (nonatomic) CGFloat startDateTime; // ivar: _startDateTime
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


+(Class)intervalDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedMedicationUUID;
-(id)decodedUUID;
-(id)description;
-(id)dictionaryRepresentation;
-(id)intervalDataAtIndex:(NSUInteger)arg0 ;
-(void)addIntervalData:(id)arg0 ;
-(void)clearIntervalDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif