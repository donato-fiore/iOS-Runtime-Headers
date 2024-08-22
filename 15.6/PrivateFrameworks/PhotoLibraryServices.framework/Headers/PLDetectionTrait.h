// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDETECTIONTRAIT_H
#define PLDETECTIONTRAIT_H



#import "PLManagedObject.h"
#import "PLDetectedFace.h"

@interface PLDetectionTrait : PLManagedObject

@property (retain, nonatomic) PLDetectedFace *detection;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat score;
@property (nonatomic) CGFloat startTime;
@property (nonatomic) short type;
@property (nonatomic) short value;


+(id)entityName;
+(id)fetchDetectionTraitByFaceUUIDWithFaceUUIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
+(id)insertIntoManagedObjectContext:(id)arg0 type:(short)arg1 value:(short)arg2 score:(CGFloat)arg3 startTime:(CGFloat)arg4 duration:(CGFloat)arg5 ;
-(id)debugLogDescription;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(void)_touchPersonForPersistenceIfNeeded;
-(void)willSave;


@end


#endif