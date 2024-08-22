// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDETECTEDFACEGROUP_H
#define PLDETECTEDFACEGROUP_H

@class NSSet, NSString;


#import "PLManagedObject.h"
#import "PLPerson.h"
#import "PLDetectedFace.h"

@interface PLDetectedFaceGroup : PLManagedObject

@property (retain, nonatomic) PLPerson *associatedPerson;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (retain, nonatomic) PLDetectedFace *keyFace;
@property (nonatomic) int personBuilderState;
@property (nonatomic) int unnamedFaceCount;
@property (retain, nonatomic) NSString *uuid;


+(id)detectedFaceGroupWithUUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg0 predicate:(id)arg1 library:(id)arg2 completion:(id)arg3 ;
-(id)mutableDetectedFaces;
-(void)awakeFromInsert;
-(void)willSave;


@end


#endif