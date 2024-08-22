// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDEMOVIEWWIDGET_H
#define PXDEMOVIEWWIDGET_H

@class UIView, NSString;
@protocol PXWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetActionManager.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXDemoViewWidget : NSObject <PXWidget>

 {
    BOOL _isExpanded;
    CGFloat _height;
}


@property (nonatomic, setter=_setAnimationCount:) NSInteger _animationCount; // ivar: __animationCount
@property (readonly, nonatomic) UIView *_containerView; // ivar: __containerView
@property (nonatomic, setter=_setContentSize:) CGSize _contentSize; // ivar: __contentSize
@property (readonly, nonatomic) UIView *_contentView; // ivar: __contentView
@property (nonatomic, setter=_setDidLoadContent:) BOOL _didLoadContent; // ivar: __didLoadContent
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, setter=_setContentViewAnchoringType:) NSInteger contentViewAnchoringType; // ivar: _contentViewAnchoringType
@property (retain, nonatomic) PXPhotosDetailsContext *context;
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
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(id)init;
-(struct CGRect )_contentViewFrameForSize:(struct CGSize )arg0 ;
-(void)_handleLongPressGestureRecognizer:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_loadViews;
-(void)_updateContentViewColor;
-(void)contentViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)loadContentData;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)userDidSelectDisclosureControl;


@end


#endif