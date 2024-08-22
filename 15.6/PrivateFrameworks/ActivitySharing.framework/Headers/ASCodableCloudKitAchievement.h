// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCODABLECLOUDKITACHIEVEMENT_H
#define ASCODABLECLOUDKITACHIEVEMENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ASCodableCloudKitSample.h"

@interface ASCodableCloudKitAchievement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat completedDate; // ivar: _completedDate
@property (retain, nonatomic) NSString *definitionIdentifier; // ivar: _definitionIdentifier
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasCompletedDate;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) NSInteger intValue; // ivar: _intValue
@property (retain, nonatomic) ASCodableCloudKitSample *sample; // ivar: _sample
@property (retain, nonatomic) NSString *templateUniqueName; // ivar: _templateUniqueName
@property (nonatomic) NSInteger workoutActivityType; // ivar: _workoutActivityType


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