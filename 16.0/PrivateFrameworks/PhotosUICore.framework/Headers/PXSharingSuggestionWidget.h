// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHARINGSUGGESTIONWIDGET_H
#define PXSHARINGSUGGESTIONWIDGET_H

@class NSString;
@protocol PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, PXWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetActionManager.h"
#import "PXPeopleStripCollectionViewController.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXSharingSuggestionDataSource.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXSharingSuggestionWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, PXWidget>



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
@property (retain, nonatomic) PXSharingSuggestionDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) NSUInteger sharingStream; // ivar: _sharingStream
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic) CGFloat targetPrefetchWidth; // ivar: _targetPrefetchWidth
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate; // ivar: _widgetUnlockDelegate


-(BOOL)_calculateLayoutInfosForWidth:(CGFloat)arg0 cellSize:(struct CGSize *)arg1 interitemSpacing:(*CGFloat)arg2 ;
-(CGFloat)minimumInteritemSpacing;
-(CGFloat)minimumLineSpacing;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)_numberOfVisibleFacesForWidth:(CGFloat)arg0 ;
-(id)initWithSharingStream:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)traitCollection;
-(struct CGSize )_sizeForItemWithWidth:(CGFloat)arg0 withInterItemSpacing:(CGFloat)arg1 ;
-(struct CGSize )sizeForItem;
-(struct UIEdgeInsets )_realContentInset;
-(struct UIEdgeInsets )sectionInset;
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