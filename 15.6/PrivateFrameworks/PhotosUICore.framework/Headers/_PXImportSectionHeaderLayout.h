// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXIMPORTSECTIONHEADERLAYOUT_H
#define _PXIMPORTSECTIONHEADERLAYOUT_H

@class NSString;
@protocol PXPhotosSectionedLayoutHeader, PXImportHistorySectionHeaderViewDelegate, _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutViewProvider;


#import "PXGSingleViewLayout.h"
#import "PXAssetsDataSource.h"
#import "PXSelectionSnapshot.h"
#import "PXPhotosLayoutSpec.h"

@interface _PXImportSectionHeaderLayout : PXGSingleViewLayout <PXPhotosSectionedLayoutHeader, PXImportHistorySectionHeaderViewDelegate>



@property (readonly, nonatomic) BOOL areAllItemsSelected; // ivar: _areAllItemsSelected
@property (retain, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_PXImportSectionHeaderLayoutInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (retain, nonatomic) PXPhotosLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderLayoutViewProvider> *viewProvider; // ivar: _viewProvider
@property (readonly, nonatomic) BOOL wantsBackground; // ivar: _wantsBackground


-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(void)floatingOffsetDidChange;
-(void)headerViewDidPressActionButton:(id)arg0 ;


@end


#endif