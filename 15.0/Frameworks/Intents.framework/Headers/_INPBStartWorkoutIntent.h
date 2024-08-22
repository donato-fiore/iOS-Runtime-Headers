// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSTARTWORKOUTINTENT_H
#define _INPBSTARTWORKOUTINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBStartWorkoutIntent, NSSecureCoding, NSCopying;


#import "_INPBWorkoutCustomization.h"
#import "_INPBDouble.h"
#import "_INPBIntentMetadata.h"
#import "_INPBDataString.h"

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *associatedItems; // ivar: _associatedItems
@property (readonly, nonatomic) NSUInteger associatedItemsCount;
@property (retain, nonatomic) _INPBWorkoutCustomization *customization; // ivar: _customization
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDouble *goalValue; // ivar: _goalValue
@property (readonly, nonatomic) BOOL hasCustomization;
@property (readonly, nonatomic) BOOL hasGoalValue;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsBuiltInWorkoutType;
@property (nonatomic) BOOL hasIsOpenEnded;
@property (nonatomic) BOOL hasIsVoiceOnly;
@property (nonatomic) BOOL hasSequenceLabel;
@property (nonatomic) BOOL hasWorkoutGoalUnitType;
@property (nonatomic) BOOL hasWorkoutLocationType;
@property (readonly, nonatomic) BOOL hasWorkoutName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) BOOL isBuiltInWorkoutType; // ivar: _isBuiltInWorkoutType
@property (nonatomic) BOOL isOpenEnded; // ivar: _isOpenEnded
@property (nonatomic) BOOL isVoiceOnly; // ivar: _isVoiceOnly
@property (nonatomic) int sequenceLabel; // ivar: _sequenceLabel
@property (readonly) Class superclass;
@property (nonatomic) int workoutGoalUnitType; // ivar: _workoutGoalUnitType
@property (nonatomic) int workoutLocationType; // ivar: _workoutLocationType
@property (retain, nonatomic) _INPBDataString *workoutName; // ivar: _workoutName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)associatedItemsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)sequenceLabelAsString:(int)arg0 ;
-(id)workoutGoalUnitTypeAsString:(int)arg0 ;
-(id)workoutLocationTypeAsString:(int)arg0 ;
-(int)StringAsSequenceLabel:(id)arg0 ;
-(int)StringAsWorkoutGoalUnitType:(id)arg0 ;
-(int)StringAsWorkoutLocationType:(id)arg0 ;
-(void)addAssociatedItems:(id)arg0 ;
-(void)clearAssociatedItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif