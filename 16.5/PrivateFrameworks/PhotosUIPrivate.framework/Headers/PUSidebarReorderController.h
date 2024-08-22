// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSIDEBARREORDERCONTROLLER_H
#define PUSIDEBARREORDERCONTROLLER_H

@class UICollectionViewDiffableDataSource, PXSidebarOutlineSectionController;
@protocol PXNavigationListItem;

#import <Foundation/Foundation.h>


@interface PUSidebarReorderController : NSObject

@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSObject<PXNavigationListItem> *itemToReorder; // ivar: _itemToReorder
@property (readonly, nonatomic) PXSidebarOutlineSectionController *sidebarOutlineSectionController; // ivar: _sidebarOutlineSectionController


-(BOOL)canReorderItem:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 outlineSectionController:(id)arg1 ;
-(id)targetIndexPathForMoveFromItemAtIndexPath:(id)arg0 toProposedIndexPath:(id)arg1 ;
-(void)performReorderWithTransaction:(id)arg0 ;


@end


#endif