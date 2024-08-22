// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBARBUTTONITEMCOLLECTION_H
#define PUBARBUTTONITEMCOLLECTION_H

@class NSMutableDictionary, NSCache, UIBarButtonItem, NSIndexSet, NSArray, NSDictionary;
@protocol PUBarButtonItemCollectionDataSource;

#import <Foundation/Foundation.h>


@interface PUBarButtonItemCollection : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_barButtonItems; // ivar: __barButtonItems
@property (readonly, nonatomic) NSCache *_configurationsCache; // ivar: __configurationsCache
@property (readonly, nonatomic) UIBarButtonItem *_flexibleSpaceBarButtonItem; // ivar: __flexibleSpaceBarButtonItem
@property (readonly, nonatomic) NSUInteger _options; // ivar: __options
@property (readonly, nonatomic) UIBarButtonItem *_placeholderBarButtonItem; // ivar: __placeholderBarButtonItem
@property (copy, nonatomic, setter=_setPreviousRequestedSet:) NSIndexSet *_previousRequestedSet; // ivar: __previousRequestedSet
@property (retain, nonatomic, setter=_setPreviousResult:) NSArray *_previousResult; // ivar: __previousResult
@property (readonly, nonatomic) NSDictionary *barButtonItems;
@property (retain, nonatomic) NSIndexSet *centeredItemIdentifiers; // ivar: _centeredItemIdentifiers
@property (weak, nonatomic) NSObject<PUBarButtonItemCollectionDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSArray *identifiersOrder; // ivar: _identifiersOrder


-(NSInteger)identifierForBarButtonItem:(id)arg0 ;
-(NSInteger)identifierForCustomButton:(id)arg0 ;
-(id)_arrangedBarButtonItems:(id)arg0 identifiers:(id)arg1 ;
-(id)_newEntryForIdentifiers:(id)arg0 ;
-(id)barButtonItemForIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)orderedBarButtonsItemsForIdentifiers:(id)arg0 ;
-(void)_centersButtonsIfNeeded:(id)arg0 identifiers:(id)arg1 ;
-(void)_resetSet;


@end


#endif