// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEFITNESSFRIENDACHIEVEMENT_H
#define HDCODABLEFITNESSFRIENDACHIEVEMENT_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat completedDate; // ivar: _completedDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (retain, nonatomic) NSData *friendUUID; // ivar: _friendUUID
@property (nonatomic) BOOL hasCompletedDate;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger intValue; // ivar: _intValue
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *templateUniqueName; // ivar: _templateUniqueName


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif