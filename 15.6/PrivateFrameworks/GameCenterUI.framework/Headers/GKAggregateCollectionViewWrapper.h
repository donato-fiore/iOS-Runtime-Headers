// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKAGGREGATECOLLECTIONVIEWWRAPPER_H
#define GKAGGREGATECOLLECTIONVIEWWRAPPER_H

@class UICollectionView;

#import <Foundation/Foundation.h>

#import "GKAggregateMapping.h"

@interface GKAggregateCollectionViewWrapper : NSObject

@property (retain, nonatomic) GKAggregateMapping *mapping; // ivar: _mapping
@property (retain, nonatomic) UICollectionView *wrappedView; // ivar: _wrappedView


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)wrapperForView:(id)arg0 mapping:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(id)_gkDequeueCellForClass:(Class)arg0 forIndexPath:(id)arg1 ;
-(id)_gkDequeueSupplementaryViewForClass:(Class)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForItemAtIndexPath:(id)arg0 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndexPath:(id)arg1 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg0 withReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)indexPathForCell:(id)arg0 ;
-(id)indexPathForItemAtPoint:(struct CGPoint )arg0 ;
-(id)indexPathsForSelectedItems;
-(id)indexPathsForVisibleItems;
-(id)initWithView:(id)arg0 mapping:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_gkPerformWithoutViewReuse:(id)arg0 ;
-(void)_gkRegisterCellClass:(Class)arg0 ;
-(void)_gkRegisterClass:(Class)arg0 forSupplementaryViewOfKind:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg0 ;
-(void)deleteSections:(id)arg0 ;
-(void)deselectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg0 ;
-(void)insertSections:(id)arg0 ;
-(void)moveItemAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)moveSection:(NSInteger)arg0 toSection:(NSInteger)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif