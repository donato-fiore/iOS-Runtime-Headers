// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLAYOUTELEMENTVIEWCONTROLLER_H
#define SBLAYOUTELEMENTVIEWCONTROLLER_H

@class UIViewController, SBOrientationTransformWrapperView, FBDisplayLayoutElement, UIView, NSString, FBSDisplayIdentity;
@protocol SBAppPlatterDragSourceViewProviding;


#import "SBLayoutElement.h"
#import "SBLayoutState.h"

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding>

 {
    SBOrientationTransformWrapperView *_contentWrapperView;
    FBDisplayLayoutElement *_displayLayoutElement;
    BOOL _isViewVisible;
    BOOL _isTransitioningVisibility;
}


@property (readonly, nonatomic) UIView *_contentContainerView; // ivar: _contentContainerView
@property (readonly, nonatomic) BOOL _shouldDisplayLayoutElementBecomeActive;
@property (nonatomic) NSInteger contentWrapperInterfaceOrientation; // ivar: _contentWrapperInterfaceOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (nonatomic, getter=isDragging) BOOL dragging; // ivar: _dragging
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBLayoutElement *layoutElement; // ivar: _layoutElement
@property (readonly, nonatomic) SBLayoutState *layoutState; // ivar: _layoutState
@property (readonly, nonatomic) CGRect referenceFrame; // ivar: _referenceFrame
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedContentInterfaceOrientations; // ivar: _supportedContentInterfaceOrientations
@property (readonly, nonatomic) BOOL supportsReuse;


-(id)_newDisplayLayoutElementForEntity:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)containerViewForBlurContentView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initialCornerRadiusConfiguration;
-(id)initialDiffuseShadowFilters;
-(id)initialRimShadowFilters;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(id)sourceView;
-(struct SBDragPreviewShadowParameters )initialDiffuseShadowParameters;
-(struct SBDragPreviewShadowParameters )initialRimShadowParameters;
-(void)_updateDisplayLayoutElementVisibility;
-(void)_updateDisplayLayoutElementWithBuilder:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 forLayoutElement:(id)arg1 layoutState:(id)arg2 referenceFrame:(struct CGRect )arg3 ;
-(void)dealloc;
-(void)didEndTransitionToVisible:(BOOL)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)prepareForReuse;
-(void)willBeginTransitionToVisible:(BOOL)arg0 ;


@end


#endif