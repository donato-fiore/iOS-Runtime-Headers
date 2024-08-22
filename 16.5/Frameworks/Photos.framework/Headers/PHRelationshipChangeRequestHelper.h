// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHRELATIONSHIPCHANGEREQUESTHELPER_H
#define PHRELATIONSHIPCHANGEREQUESTHELPER_H

@class NSString, NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PHChangeRequestHelper.h"

@interface PHRelationshipChangeRequestHelper : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsInsert; // ivar: _allowsInsert
@property (nonatomic) BOOL allowsMove; // ivar: _allowsMove
@property (nonatomic) BOOL allowsRemove; // ivar: _allowsRemove
@property (retain, nonatomic) PHChangeRequestHelper *changeRequestHelper; // ivar: _changeRequestHelper
@property (retain, nonatomic) NSString *destinationEntityName; // ivar: _destinationEntityName
@property (retain, nonatomic) NSString *destinationUUIDKeyPath; // ivar: _destinationUUIDKeyPath
@property (copy, nonatomic) id *isDestinationObjectValid; // ivar: _isDestinationObjectValid
@property (retain, nonatomic) NSMutableArray *mutableObjectIDsAndUUIDs; // ivar: _mutableObjectIDsAndUUIDs
@property (retain, nonatomic) NSArray *originalObjectIDs; // ivar: _originalObjectIDs
@property (readonly, nonatomic) NSString *relationshipName; // ivar: _relationshipName


+(BOOL)supportsSecureCoding;
+(id)_offsetsFromSourceOIDs:(id)arg0 toManagedObjects:(id)arg1 ;
+(id)existentObjectIDsUsingQuery:(id)arg0 ;
+(id)objectIDsOrUUIDsFromPHObjects:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 orderedMutableChildren:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 unorderedMutableChildren:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 unorderedMutableChildren:(id)arg1 inserts:(*id)arg2 deletes:(*id)arg3 error:(*id)arg4 ;
-(BOOL)applyMutationsToManagedObjectToOneRelationship:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRelationshipName:(id)arg0 changeRequestHelper:(id)arg1 ;
-(id)initWithRelationshipName:(id)arg0 xpcDict:(id)arg1 changeRequestHelper:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareIfNeededWithExistentObjectIDs:(id)arg0 ;


@end


#endif