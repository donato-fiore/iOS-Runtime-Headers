// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMBINDINGSTRATEGY_H
#define IKDOMBINDINGSTRATEGY_H

@class NSString, NSArray, NSMutableSet;
@protocol IKDOMBindingStrategy;

#import <Foundation/Foundation.h>

#import "IKJSDataSourceView.h"
#import "IKDOMBindingController.h"
#import "IKChangeSet.h"

@interface IKDOMBindingStrategy : NSObject <IKDOMBindingStrategy>



@property (retain, nonatomic) IKJSDataSourceView *dataSourceView; // ivar: _dataSourceView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) IKDOMBindingController *domBindingController; // ivar: _domBindingController
@property (retain, nonatomic) IKChangeSet *filteredChangeSet; // ivar: _filteredChangeSet
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *itemsBindingKey; // ivar: _itemsBindingKey
@property (retain, nonatomic) IKChangeSet *sourceItemsChangeSet; // ivar: _sourceItemsChangeSet
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *updatedItemIDs; // ivar: _updatedItemIDs


-(BOOL)applyValue:(id)arg0 forKey:(id)arg1 ;
-(id)_adjustedIndexTitlesFromDataSource:(id)arg0 filteredItems:(id)arg1 filteredChangeSet:(id)arg2 ;
-(id)initWithDOMBindingController:(id)arg0 itemsBindingKey:(id)arg1 ;
-(id)keysAffectingChildren;
-(id)prototypeDependentKeys;
-(struct _NSRange )visibleItemsRange;
-(void)_applyItemsValueWithDataSource:(id)arg0 ;
-(void)didResolveKeys:(id)arg0 ;
-(void)valueDidChangeForKey:(id)arg0 propertyPath:(id)arg1 extraInfo:(id)arg2 ;


@end


#endif