// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSKEYCHAINEDITINGCONTEXT_H
#define VSKEYCHAINEDITINGCONTEXT_H

@class NSSet, NSMutableSet, NSUndoManager;

#import <Foundation/Foundation.h>

#import "VSKeychainStore.h"

@interface VSKeychainEditingContext : NSObject

@property (readonly, nonatomic) NSSet *deletedItems;
@property (readonly, nonatomic) NSSet *insertedItems;
@property (retain, nonatomic) NSMutableSet *items; // ivar: _items
@property (retain, nonatomic) VSKeychainStore *keychainStore; // ivar: _keychainStore
@property (readonly, nonatomic) NSSet *registeredItems;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) NSSet *updatedItems;


-(BOOL)save:(*id)arg0 ;
-(id)_findOrCreateItemForCommittedValues:(id)arg0 withItemKind:(id)arg1 ;
-(id)_queryForItemValues:(id)arg0 withItemKind:(id)arg1 ;
-(id)_subsetOfRegisteredItemsWithKeyPath:(id)arg0 ;
-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_populateErrors:(id)arg0 withError:(id)arg1 affectingItem:(id)arg2 ;
-(void)_populateQuery:(struct __CFDictionary *)arg0 usingPredicate:(id)arg1 withItemKind:(id)arg2 ;
-(void)_populateResult:(id)arg0 forRequest:(id)arg1 fromMatch:(id)arg2 ;
-(void)deleteItem:(id)arg0 ;
-(void)fulfillFault:(id)arg0 ;
-(void)insertItem:(id)arg0 ;


@end


#endif