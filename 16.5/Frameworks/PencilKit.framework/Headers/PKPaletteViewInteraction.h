// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEVIEWINTERACTION_H
#define PKPALETTEVIEWINTERACTION_H

@class UIScene, NSString, NSLayoutConstraint, UIView, UIWindowScene;
@protocol UIEditingOverlayInteractionWithView, PKPaletteHostingWindowScene, UIKeyboardSceneDelegateVisibilityObserver, _UISceneComponentProviding, PKPaletteTapToRadarCommandDelegate, UIInteraction, PKPaletteViewInteractionDelegate;

#import <Foundation/Foundation.h>

#import "PKPaletteHostView.h"
#import "PKDrawingPaletteView.h"

@interface PKPaletteViewInteraction : NSObject <UIEditingOverlayInteractionWithView, PKPaletteHostingWindowScene, UIKeyboardSceneDelegateVisibilityObserver, _UISceneComponentProviding, PKPaletteTapToRadarCommandDelegate, UIInteraction>

 {
    UIScene *_scene;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteViewInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaletteHostView *paletteHostView; // ivar: _paletteHostView
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewHeightConstraint; // ivar: _paletteHostViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewLeftConstraint; // ivar: _paletteHostViewLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewTopConstraint; // ivar: _paletteHostViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteHostViewWidthConstraint; // ivar: _paletteHostViewWidthConstraint
@property (readonly, nonatomic) CGRect paletteHostingWindowSceneBounds;
@property (retain, nonatomic) PKDrawingPaletteView *paletteView; // ivar: _paletteView
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (nonatomic) CGRect sceneBounds; // ivar: _sceneBounds
@property (readonly) Class superclass;
@property (nonatomic) CGRect textEffectsWindowFrame; // ivar: _textEffectsWindowFrame
@property (weak, nonatomic) UIView *view; // ivar: _view
@property (weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


+(BOOL)isHostedWindow:(id)arg0 ;
+(id)existingPaletteViewInteractionForWindowScene:(id)arg0 ;
+(id)paletteViewInteractionForCanvas:(id)arg0 ;
+(id)paletteViewInteractionForWindow:(id)arg0 windowScene:(id)arg1 ;
-(BOOL)_isCompactHostedWindow;
-(BOOL)_shouldDeferPaletteVisibilityUpdate;
-(id)_traitCollectionForHostingWindow;
-(id)hostingWindow;
-(id)initWithScene:(id)arg0 ;
-(id)initWithWindowSize:(struct CGSize )arg0 ;
-(id)paletteTapToRadarCommandConfiguration:(id)arg0 ;
-(struct CGRect )_sceneBoundsForUpdateWithFollowsHostingWindowOut:(*BOOL)arg0 ;
-(void)_sceneDidActivateNotification:(id)arg0 ;
-(void)_sceneWillEnterForegroundNotification:(id)arg0 ;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_updateForRotation:(id)arg0 ;
-(void)_updateForWillRotate:(id)arg0 ;
-(void)_updatePaletteTraitCollection:(id)arg0 ;
-(void)_updatePaletteUserInterfaceStyle:(NSInteger)arg0 ;
-(void)_updateSceneBounds;
-(void)_updateUIWithSceneBounds:(struct CGRect )arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)hidePaletteViewAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)keyboardSceneDelegate:(id)arg0 inputViewSetVisibilityDidChange:(BOOL)arg1 includedReset:(BOOL)arg2 ;
-(void)showPaletteViewAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif