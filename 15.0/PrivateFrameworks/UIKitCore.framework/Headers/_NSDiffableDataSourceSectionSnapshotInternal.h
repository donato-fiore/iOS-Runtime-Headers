// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSDIFFABLEDATASOURCESECTIONSNAPSHOTINTERNAL_H
#define _NSDIFFABLEDATASOURCESECTIONSNAPSHOTINTERNAL_H



#import "NSDiffableDataSourceSectionSnapshot.h"

@interface _NSDiffableDataSourceSectionSnapshotInternal : NSDiffableDataSourceSectionSnapshot



-(BOOL)containsItem:(id)arg0 ;
-(BOOL)isExpanded:(id)arg0 ;
-(id)childrenOfParent:(id)arg0 ;
-(id)childrenOfParent:(id)arg0 recursive:(BOOL)arg1 ;
-(id)items;
-(id)parentOfChild:(id)arg0 ;
-(id)visibleItems;
-(void)appendItems:(id)arg0 ;
-(void)appendItems:(id)arg0 intoParent:(id)arg1 ;
-(void)collapseItems:(id)arg0 ;
-(void)deleteItems:(id)arg0 ;
-(void)expandItems:(id)arg0 ;
-(void)insertItems:(id)arg0 afterItem:(id)arg1 ;
-(void)insertItems:(id)arg0 beforeItem:(id)arg1 ;


@end


#endif