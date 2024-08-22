// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMITEMSBINDINGSTRATEGY_H
#define IKDOMITEMSBINDINGSTRATEGY_H

@class NSIndexSet, NSDictionary;


#import "IKDOMBindingStrategy.h"
#import "IKChangeSet.h"

@interface IKDOMItemsBindingStrategy : IKDOMBindingStrategy

@property (copy, nonatomic) NSIndexSet *autoHighlightedIndexes; // ivar: _autoHighlightedIndexes
@property (retain, nonatomic) IKChangeSet *itemsChangeSet; // ivar: _itemsChangeSet
@property (retain, nonatomic) NSDictionary *usedAppPrototypesByIdentifier; // ivar: _usedAppPrototypesByIdentifier


-(id)_appDataItemFromDataItem:(id)arg0 binding:(id)arg1 prototypeIdentifier:(id)arg2 autoHighlighted:(*BOOL)arg3 ;
-(id)initWithDOMBindingController:(id)arg0 ;
-(struct _NSRange )visibleItemsRange;
-(void)_reevaluateVisibleIndexRange;
-(void)_updateChildDOMElements;
-(void)didResolveKeys:(id)arg0 ;
-(void)willUpdateWithItems:(id)arg0 indexTitles:(id)arg1 usedPrototypesByIdentifier:(id)arg2 changeSet:(id)arg3 ;


@end


#endif