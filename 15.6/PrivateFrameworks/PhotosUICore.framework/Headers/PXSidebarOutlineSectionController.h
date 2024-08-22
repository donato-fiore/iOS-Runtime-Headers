// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSIDEBAROUTLINESECTIONCONTROLLER_H
#define PXSIDEBAROUTLINESECTIONCONTROLLER_H

@class UICollectionViewDiffableDataSource, NSString;
@protocol PXSidebarDataSourceControllerDelegate, PXSidebarOutlineSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXSidebarDataController.h"

@interface PXSidebarOutlineSectionController : NSObject <PXSidebarDataSourceControllerDelegate>



@property (nonatomic) BOOL animateDataSourceUpdates; // ivar: _animateDataSourceUpdates
@property (readonly, nonatomic) PXSidebarDataController *dataController; // ivar: _dataController
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSidebarOutlineSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_appendChildrenForParentIfNeeded:(id)arg0 inSnapshot:(id)arg1 ;
-(id)_applyChangeDetails:(id)arg0 forItem:(id)arg1 toSnapshot:(id)arg2 outChangedItemsBeforeChange:(*id)arg3 outChangedItemsAfterChange:(*id)arg4 ;
-(id)_newSnapshotFromDataControllerWithRestoredExpansionState:(BOOL)arg0 ;
-(id)currentSectionSnapshot;
-(id)expandItemsToRevealFirstEditableItemIfNeededAnimated:(BOOL)arg0 ;
-(id)initWithSidebarDataController:(id)arg0 dataSource:(id)arg1 ;
-(void)_configureInitialSnapshotAnimated:(BOOL)arg0 expandSubItems:(BOOL)arg1 applyOnQueue:(id)arg2 ;
-(void)_expandItem:(id)arg0 inSnapshot:(id)arg1 ;
-(void)_expandItemIfNeeded:(id)arg0 inSnapshot:(id)arg1 ;
-(void)_transferStateOfItem:(id)arg0 oldSnapshot:(id)arg1 toNewItem:(id)arg2 newSnapshot:(id)arg3 ;
-(void)appendChildrenForParentIfNeeded:(id)arg0 ;
-(void)expandItemsForIdentifiersIfNeeded:(id)arg0 animated:(BOOL)arg1 ;
-(void)loadRootItems;
-(void)reloadFromDataControllerApplyAnimated:(BOOL)arg0 onQueue:(id)arg1 ;
-(void)sectionControllerWillCollapseItem:(id)arg0 ;
-(void)sectionControllerWillExpandItem:(id)arg0 ;
-(void)sidebarDataSourceController:(id)arg0 didChangeChildrenOfItem:(id)arg1 changeDetails:(id)arg2 ;


@end


#endif