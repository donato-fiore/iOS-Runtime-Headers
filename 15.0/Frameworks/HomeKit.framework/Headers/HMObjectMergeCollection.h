// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMOBJECTMERGECOLLECTION_H
#define HMOBJECTMERGECOLLECTION_H

@class NSArray, NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>

#import "HMObjectMergeOperations.h"

@interface HMObjectMergeCollection : NSObject

@property (readonly, nonatomic) NSArray *addedObjects;
@property (retain, nonatomic) NSMapTable *commonObjectsMaps; // ivar: _commonObjectsMaps
@property (retain, nonatomic) NSMutableArray *currentAddedObjects; // ivar: _currentAddedObjects
@property (retain, nonatomic) NSMutableArray *currentExistingObjects; // ivar: _currentExistingObjects
@property (retain, nonatomic) NSMutableArray *currentModifiedObjects; // ivar: _currentModifiedObjects
@property (weak, nonatomic) HMObjectMergeOperations *currentOperations; // ivar: _currentOperations
@property (retain, nonatomic) NSMutableArray *currentRemovedObjects; // ivar: _currentRemovedObjects
@property (readonly, nonatomic) NSArray *existingObjects;
@property (readonly, nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) NSUInteger modifiedCount;
@property (readonly, nonatomic) NSArray *modifiedObjects;
@property (readonly, nonatomic) NSArray *removedObjects;


-(id)init;
-(id)initWithExistingObjects:(id)arg0 newObjects:(id)arg1 operations:(id)arg2 ;
-(void)_enumerateObjectAdditionWithBlock:(id)arg0 ;
-(void)_enumerateObjectRemoveWithBlock:(id)arg0 ;
-(void)_mergeCommonObjects;
-(void)_replaceAddedObjectsWithObjectsFromArray:(id)arg0 ;
-(void)mergeCommonObjectsNoMergeCount;


@end


#endif