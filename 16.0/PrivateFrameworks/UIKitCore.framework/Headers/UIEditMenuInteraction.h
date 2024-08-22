// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIEDITMENUINTERACTION_H
#define UIEDITMENUINTERACTION_H

@class NSString;
@protocol UIContextMenuInteractionDelegate_ForWebKitOnly, UIContextMenuInteractionDelegate_Private, _UIContextMenuInteractionDelegateInternal, UIDeferredMenuElementDelegate, _UIEditMenuPresentationDelegate, UIInteraction_Internal, UIInteraction, UIEditMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UIEditMenuPresentation.h"
#import "UIEditMenuConfiguration.h"
#import "UIContextMenuInteraction.h"
#import "UIView.h"

@interface UIEditMenuInteraction : NSObject <UIContextMenuInteractionDelegate_ForWebKitOnly, UIContextMenuInteractionDelegate_Private, _UIContextMenuInteractionDelegateInternal, UIDeferredMenuElementDelegate, _UIEditMenuPresentationDelegate, UIInteraction_Internal, UIInteraction>

 {
    ? _delegateImplements;
    CGFloat _lastDismissalTime;
    BOOL _dismissedByMenuAction;
    BOOL _presentedFromPresentEditMenu;
}


@property (readonly, nonatomic) BOOL _dismissedByActionSelection;
@property (readonly, nonatomic) BOOL _dismissedRecently;
@property (nonatomic, setter=_setEnforcesMenuControllerLifecycle:) BOOL _enforcesMenuControllerLifecycle; // ivar: __enforcesMenuControllerLifecycle
@property (nonatomic) BOOL _includeMenuControllerItems; // ivar: __includeMenuControllerItems
@property (readonly, nonatomic) _UIEditMenuPresentation *_outgoingPresentation; // ivar: __outgoingPresentation
@property (weak, nonatomic, setter=_setProxySender:) id *_proxySender; // ivar: __proxySender
@property (nonatomic, setter=_setUseSenderAsResponderSender:) BOOL _useSenderAsResponderSender; // ivar: __useSenderAsResponderSender
@property (retain, nonatomic) UIEditMenuConfiguration *activeConfiguration; // ivar: _activeConfiguration
@property (readonly, nonatomic) _UIEditMenuPresentation *activeEditMenuPresentation; // ivar: _activeEditMenuPresentation
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIEditMenuInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayingMenu) BOOL displayingMenu; // ivar: _displayingMenu
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIEditMenuConfiguration *pendingConfiguration; // ivar: _pendingConfiguration
@property (nonatomic) BOOL presentsContextMenuAsSecondaryAction; // ivar: _presentsContextMenuAsSecondaryAction
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_shouldEnforceMenuControllerLifecycleForEditMenuPresentation:(id)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_defaultSuggestedActionsAtLocation:(struct CGPoint )arg0 configuration:(id)arg1 ;
-(id)_editMenuPresentation:(id)arg0 preparedMenuForDisplay:(id)arg1 ;
-(id)_editMenuPresentation:(id)arg0 titleViewForMenu:(id)arg1 configuration:(id)arg2 ;
-(id)_menuForSuggestedActions:(id)arg0 configuration:(id)arg1 ;
-(id)_menuPreparationContextForConfiguration:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)firstResponderTargetForConfiguration:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGRect )_editMenuPresentation:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(struct CGRect )_targetRectForConfiguration:(id)arg0 ;
-(struct CGRect )menuFrameInCoordinateSpace:(id)arg0 ;
-(void)_contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_dismissMenuWithPresentationType:(NSInteger)arg0 ;
-(void)_editMenuPresentation:(id)arg0 didSelectMenuLeaf:(id)arg1 ;
-(void)_editMenuPresentation:(id)arg0 didTransitionMenuForConfiguration:(id)arg1 ;
-(void)_editMenuPresentation:(id)arg0 willDismissMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)_editMenuPresentation:(id)arg0 willPresentMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)_prepareMenuAtLocation:(struct CGPoint )arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateContextMenuInteractionDrivers;
-(void)_updateVisibleMenuWithReason:(NSInteger)arg0 updateBlock:(id)arg1 ;
-(void)_viewTraitCollectionDidChange:(id)arg0 ;
-(void)_willDismissMenuForConfiguration:(id)arg0 animator:(id)arg1 ;
-(void)_willPresentMenuForConfiguration:(id)arg0 animator:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)deferredMenuElementWasFulfilled:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)dismissMenu;
-(void)presentEditMenuWithConfiguration:(id)arg0 ;
-(void)reloadVisibleMenu;
-(void)updateVisibleMenuPositionAnimated:(BOOL)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif