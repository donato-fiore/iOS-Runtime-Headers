// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDIFFABLEDATASOURCESECTIONCONTROLLERINTERNAL_H
#define _UIDIFFABLEDATASOURCESECTIONCONTROLLERINTERNAL_H

@class UIDiffableDataSourceSectionController, NSSet, NSArray;



@interface _UIDiffableDataSourceSectionControllerInternal : UIDiffableDataSourceSectionController

@property (readonly, nonatomic) NSSet *associatedSectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemRenderers;


-(id)collectionViewDiffableDataSourceSectionController;
-(id)initWithItemRenderers:(id)arg0 ;
-(id)initWithItemRenderers:(id)arg0 associatedSectionIdentifiers:(id)arg1 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(id)arg3 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 customAnimationsProvider:(id)arg2 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(id)arg3 ;


@end


#endif