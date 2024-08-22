// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCECHANGESET_H
#define CKTRANSACTIONALCOMPONENTDATASOURCECHANGESET_H

@class NSDictionary, NSIndexSet, NSSet;

#import <Foundation/Foundation.h>


@interface CKTransactionalComponentDataSourceChangeset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *insertedItems; // ivar: _insertedItems
@property (readonly, copy, nonatomic) NSIndexSet *insertedSections; // ivar: _insertedSections
@property (readonly, copy, nonatomic) NSDictionary *movedItems; // ivar: _movedItems
@property (readonly, copy, nonatomic) NSSet *removedItems; // ivar: _removedItems
@property (readonly, copy, nonatomic) NSIndexSet *removedSections; // ivar: _removedSections
@property (readonly, copy, nonatomic) NSDictionary *updatedItems; // ivar: _updatedItems
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithUpdatedItems:(id)arg0 removedItems:(id)arg1 removedSections:(id)arg2 movedItems:(id)arg3 insertedSections:(id)arg4 insertedItems:(id)arg5 ;


@end


#endif