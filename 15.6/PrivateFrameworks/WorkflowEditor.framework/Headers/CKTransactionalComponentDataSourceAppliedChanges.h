// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCEAPPLIEDCHANGES_H
#define CKTRANSACTIONALCOMPONENTDATASOURCEAPPLIEDCHANGES_H

@class NSSet, NSIndexSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKTransactionalComponentDataSourceAppliedChanges : NSObject

@property (readonly, copy, nonatomic) NSSet *insertedIndexPaths; // ivar: _insertedIndexPaths
@property (readonly, copy, nonatomic) NSIndexSet *insertedSections; // ivar: _insertedSections
@property (readonly, copy, nonatomic) NSDictionary *movedIndexPaths; // ivar: _movedIndexPaths
@property (readonly, copy, nonatomic) NSSet *removedIndexPaths; // ivar: _removedIndexPaths
@property (readonly, copy, nonatomic) NSIndexSet *removedSections; // ivar: _removedSections
@property (readonly, copy, nonatomic) NSSet *updatedIndexPaths; // ivar: _updatedIndexPaths
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithUpdatedIndexPaths:(id)arg0 removedIndexPaths:(id)arg1 removedSections:(id)arg2 movedIndexPaths:(id)arg3 insertedSections:(id)arg4 insertedIndexPaths:(id)arg5 userInfo:(id)arg6 ;
-(id)newIndexPathForPreviousIndexPath:(id)arg0 ;


@end


#endif