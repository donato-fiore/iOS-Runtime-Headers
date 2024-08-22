// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLECONDENSEDWORKOUT_H
#define HKCODABLECONDENSEDWORKOUT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HKCodableCondensedWorkout : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat condenserDate; // ivar: _condenserDate
@property (nonatomic) NSInteger condenserVersion; // ivar: _condenserVersion
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasCondenserDate;
@property (nonatomic) BOOL hasCondenserVersion;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasPersistentID;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


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