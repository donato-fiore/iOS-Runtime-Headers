// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STTESTSYNCABLEOBJECT_H
#define STTESTSYNCABLEOBJECT_H

@class NSString, NSSet;
@protocol STSerializableMappedObject, STUniquelySerializableManagedObject;


#import "STUniquedManagedObject.h"

@interface STTestSyncableObject : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *subobjects;
@property (readonly) Class superclass;


+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)serializableClassName;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif