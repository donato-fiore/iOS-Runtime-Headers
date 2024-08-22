// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCECHANGESETBUILDER_H
#define CKTRANSACTIONALCOMPONENTDATASOURCECHANGESETBUILDER_H

@class NSDictionary, NSSet, NSIndexSet;

#import <Foundation/Foundation.h>


@interface CKTransactionalComponentDataSourceChangesetBuilder : NSObject {
    NSDictionary *_updatedItems;
    NSSet *_removedItems;
    NSIndexSet *_removedSections;
    NSDictionary *_movedItems;
    NSIndexSet *_insertedSections;
    NSDictionary *_insertedItems;
}




+(id)transactionalComponentDataSourceChangeset;
-(id)build;
-(id)withInsertedItems:(id)arg0 ;
-(id)withInsertedSections:(id)arg0 ;
-(id)withMovedItems:(id)arg0 ;
-(id)withRemovedItems:(id)arg0 ;
-(id)withRemovedSections:(id)arg0 ;
-(id)withUpdatedItems:(id)arg0 ;


@end


#endif