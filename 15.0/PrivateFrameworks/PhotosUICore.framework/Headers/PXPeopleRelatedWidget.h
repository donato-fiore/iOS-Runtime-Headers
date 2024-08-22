// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLERELATEDWIDGET_H
#define PXPEOPLERELATEDWIDGET_H

@class NSString;
@protocol PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, UIGestureRecognizerDelegate, PXWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXUITapGestureRecognizer.h"
#import "PXAssetActionManager.h"
#import "PXPeopleStripCollectionViewController.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXPeopleWidgetDataSource.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXPeopleRelatedWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, UIGestureRecognizerDelegate, PXWidget>

 {
    PXUITapGestureRecognizer *_tapGestureRecognizer;
    PXUITapGestureRecognizer *_pressGestureRecognizer;
}


@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (nonatomic) CGFloat cellMinInteritemSpacing; // ivar: _cellMinInteritemSpacing
@property (nonatomic) CGFloat cellMinLineSpacing; // ivar: _cellMinLineSpacing
@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (retain, nonatomic) PXPeopleStripCollectionViewController *collectionViewController; // ivar: _collectionViewController
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType; // ivar: _contentViewAnchoringType
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (retain, nonatomic) PXPeopleWidgetDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // ivar: _hasLoadedContentData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL isSummaryMode; // ivar: _isSummaryMode
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) BOOL showFooter; // ivar: _showFooter
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (nonatomic, getter=hasStartedLoadingDataSource) BOOL startedLoadingDataSource; // ivar: _startedLoadingDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic) CGFloat targetPrefetchWidth; // ivar: _targetPrefetchWidth
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (nonatomic) NSUInteger viewType; // ivar: _viewType
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate; // ivar: _widgetUnlockDelegate


-(BOOL)_calculateLayoutInfosForWidth:(CGFloat)arg0 cellSize:(struct CGSize *)arg1 interitemSpacing:(*CGFloat)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)minimumInteritemSpacing;
-(CGFloat)minimumLineSpacing;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)_numberOfVisibleFacesForWidth:(CGFloat)arg0 ;
-(id)initWithViewType:(NSUInteger)arg0 ;
-(id)traitCollection;
-(struct CGSize )_sizeForItemWithWidth:(CGFloat)arg0 withInterItemSpacing:(CGFloat)arg1 ;
-(struct CGSize )sizeForItem;
-(struct UIEdgeInsets )_realContentInset;
-(struct UIEdgeInsets )sectionInset;
-(void)_handleTap:(id)arg0 ;
-(void)_loadContainerView;
-(void)_prepareDataSource;
-(void)_resetControllerLayoutInfosForWidth:(CGFloat)arg0 ;
-(void)contentSizeCategoryChanged:(id)arg0 ;
-(void)loadContentData;
-(void)memberTappedAtIndexPath:(id)arg0 atPoint:(struct CGPoint )arg1 forPeopleStripController:(id)arg2 ;
-(void)peopleDataSource:(id)arg0 didAddMembersAtIndexPaths:(id)arg1 ;
-(void)peopleDataSource:(id)arg0 didApplyIncrementalChanges:(id)arg1 ;
-(void)peopleDataSource:(id)arg0 didRemoveMembersAtIndexPaths:(id)arg1 ;
-(void)peopleDataSource:(id)arg0 didUpdateMembersAtIndexPaths:(id)arg1 ;
-(void)peopleDataSourceMembersChanged:(id)arg0 ;
-(void)unloadContentData;


@end


#endif