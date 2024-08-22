// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEMOTILINGCONTROLLERWIDGET_H
#define PXDEMOTILINGCONTROLLERWIDGET_H

@class NSMutableSet, NSString;
@protocol PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetsDataSourceManager.h"
#import "PXPhotoKitUIMediaProvider.h"
#import "PXUIAssetsScene.h"
#import "PXBasicUIViewTileAnimator.h"
#import "PXTilingController.h"
#import "PXAssetActionManager.h"
#import "PXPhotosDetailsContext.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget>



@property (readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager; // ivar: __dataSourceManager
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (readonly, nonatomic) PXUIAssetsScene *_scene; // ivar: __scene
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (readonly, nonatomic) PXTilingController *_tilingController; // ivar: __tilingController
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
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
@property (retain, nonatomic, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(id)_demoTilingLayoutForDataSource:(id)arg0 ;
-(id)assetsScene:(id)arg0 layoutForDataSource:(id)arg1 ;
-(id)init;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(void)_loadTilingController;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)userDidSelectSubtitle;


@end


#endif