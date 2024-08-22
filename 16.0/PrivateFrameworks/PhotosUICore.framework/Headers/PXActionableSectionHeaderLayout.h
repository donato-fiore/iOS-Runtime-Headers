// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXACTIONABLESECTIONHEADERLAYOUT_H
#define PXACTIONABLESECTIONHEADERLAYOUT_H

@class NSString;
@protocol PXActionableSectionHeaderViewDelegate, PXPhotosSectionedLayoutHeader, PXActionableSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutViewProvider;


#import "PXGSingleViewLayout.h"
#import "PXAssetsDataSource.h"
#import "PXSelectionSnapshot.h"
#import "PXPhotosLayoutSpec.h"

@interface PXActionableSectionHeaderLayout : PXGSingleViewLayout <PXActionableSectionHeaderViewDelegate, PXPhotosSectionedLayoutHeader>



@property (nonatomic) BOOL alwaysWantsBackground; // ivar: _alwaysWantsBackground
@property (readonly, nonatomic) BOOL areAllItemsSelected; // ivar: _areAllItemsSelected
@property (retain) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActionableSectionHeaderLayoutInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (readonly, nonatomic) BOOL isTopHeader;
@property (nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (retain, nonatomic) PXPhotosLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutViewProvider> *viewProvider; // ivar: _viewProvider
@property (readonly, nonatomic) BOOL wantsBackground; // ivar: _wantsBackground


-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(void)floatingOffsetDidChange;
-(void)headerViewDidPressActionButton:(id)arg0 inHeaderView:(id)arg1 ;
-(void)scrollSpeedRegimeDidChange;


@end


#endif