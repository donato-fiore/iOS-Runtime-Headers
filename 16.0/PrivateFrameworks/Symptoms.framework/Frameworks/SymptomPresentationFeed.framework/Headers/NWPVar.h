// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWPVAR_H
#define NWPVAR_H

@class NSDictionary, NSUUID, NSString, NSArray;
@protocol NSSecureCoding, NSCopying, NSSecureCoding><NSCopying;

#import <Foundation/Foundation.h>


@interface NWPVar : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *allState; // ivar: _allState
@property (retain, nonatomic) NSUUID *durableId; // ivar: _durableId
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *expectingRewardOn; // ivar: _expectingRewardOn
@property (copy, nonatomic) NSString *exportLabel; // ivar: _exportLabel
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *firstValue; // ivar: _firstValue
@property (retain, nonatomic) NSDictionary *hyperParams; // ivar: _hyperParams
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger logicalClock; // ivar: _logicalClock
@property (nonatomic) NSUInteger model; // ivar: _model
@property (nonatomic) NSUInteger pullCount; // ivar: _pullCount
@property (retain, nonatomic) NSArray *referenceValues; // ivar: _referenceValues
@property (nonatomic) BOOL useScalarRange; // ivar: _useScalarRange


+(BOOL)supportsSecureCoding;
+(id)_backgroundQueue;
+(id)_defaultBackingStore;
+(id)_fetchCheckpoint:(id)arg0 isPrefix:(BOOL)arg1 ;
+(id)_serviceQueue;
+(void)_setCustomBackingStore:(id)arg0 ;
+(void)setBackingStore:(id)arg0 ;
-(BOOL)selectModel:(NSUInteger)arg0 ;
-(BOOL)setInitialValue:(id)arg0 ;
-(BOOL)setReward:(float)arg0 onValue:(id)arg1 forPredictionGenerationId:(id)arg2 ;
-(NSInteger)_pruneOldCheckpoints;
-(id)_initToCopy;
-(id)checkpoint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initFromCheckpoint:(id)arg0 forLabel:(id)arg1 ;
-(id)initFromLastCheckpointForLabel:(id)arg0 ;
-(id)initInValueSpace:(id)arg0 withLabel:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)migrateToValueSpace:(id)arg0 ;
-(id)predictValueGivenContext:(id)arg0 generationId:(*id)arg1 ;
-(void)_mirrorFrom:(id)arg0 ;
-(void)_setToCleanSlate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif