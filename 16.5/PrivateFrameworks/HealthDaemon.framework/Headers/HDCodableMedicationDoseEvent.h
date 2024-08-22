// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEMEDICATIONDOSEEVENT_H
#define HDCODABLEMEDICATIONDOSEEVENT_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableMedicationDoseEvent : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat doseQuantity; // ivar: _doseQuantity
@property (nonatomic) BOOL hasDoseQuantity;
@property (nonatomic) BOOL hasLogOrigin;
@property (readonly, nonatomic) BOOL hasMedicationIdentifier;
@property (readonly, nonatomic) BOOL hasMedicationUuid;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasScheduleItemIdentifier;
@property (nonatomic) BOOL hasScheduledDate;
@property (nonatomic) BOOL hasScheduledDoseQuantity;
@property (nonatomic) BOOL hasStatus;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger logOrigin; // ivar: _logOrigin
@property (retain, nonatomic) NSString *medicationIdentifier; // ivar: _medicationIdentifier
@property (retain, nonatomic) NSData *medicationUuid; // ivar: _medicationUuid
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (retain, nonatomic) NSString *scheduleItemIdentifier; // ivar: _scheduleItemIdentifier
@property (nonatomic) CGFloat scheduledDate; // ivar: _scheduledDate
@property (nonatomic) CGFloat scheduledDoseQuantity; // ivar: _scheduledDoseQuantity
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)applyToObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif