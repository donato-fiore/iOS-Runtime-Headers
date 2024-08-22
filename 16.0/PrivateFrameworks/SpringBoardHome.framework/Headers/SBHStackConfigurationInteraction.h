// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHSTACKCONFIGURATIONINTERACTION_H
#define SBHSTACKCONFIGURATIONINTERACTION_H

@class UIViewController, NSString;
@protocol SBHStackConfigurationViewControllerDelegate, SBHViewControllerTransitionDelegate, SBIconViewObserver, SBHIconViewConfigurationInteraction, SBHStackConfigurationViewControllerAppearanceDelegate, SBLeafIconDataSource, SBHIconViewConfigurationInteractionDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBHWidgetSheetViewControllerPresenter, SBHStackConfigurationInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBHStackConfiguration.h"
#import "SBHStackConfigurationViewController.h"
#import "SBIconView.h"
#import "SBHViewControllerTransition.h"
#import "SBHWidgetSettings.h"

@interface SBHStackConfigurationInteraction : NSObject <SBHStackConfigurationViewControllerDelegate, SBHViewControllerTransitionDelegate, SBIconViewObserver, SBHIconViewConfigurationInteraction>



@property (weak, nonatomic) NSObject<SBHStackConfigurationViewControllerAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (copy, nonatomic) SBHStackConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) SBHStackConfigurationViewController *configurationViewController; // ivar: _configurationViewController
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *configuredDataSource; // ivar: _configuredDataSource
@property (retain, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHIconViewConfigurationInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (weak, nonatomic) NSObject<SBHWidgetSheetViewControllerPresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) BOOL showsAddButton; // ivar: _showsAddButton
@property (readonly, nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (weak, nonatomic) NSObject<SBHStackConfigurationInteractionDelegate> *stackConfigurationDelegate; // ivar: _stackConfigurationDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBHViewControllerTransition *transition; // ivar: _transition
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings


-(CGFloat)_padApertureOutsetFromWidgetWithGridSize:(NSUInteger)arg0 ;
-(id)animatorForTransition:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 iconView:(id)arg1 iconViewProvider:(id)arg2 listLayoutProvider:(id)arg3 showsAddButton:(BOOL)arg4 showsDoneButton:(BOOL)arg5 ;
-(id)stackConfigurationViewController:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)stackConfigurationViewController:(id)arg0 draggedIconForIdentifier:(id)arg1 ;
-(id)stackConfigurationViewController:(id)arg0 promoteSuggestedWidget:(id)arg1 withinStack:(id)arg2 ;
-(id)windowForIconDragPreviewsForStackConfigurationViewController:(id)arg0 forWindowScene:(id)arg1 ;
-(struct CGRect )_contentBoundingFrame;
-(struct CGRect )_sourceContentFrame;
-(void)_endConfigurationAnimated:(BOOL)arg0 ;
-(void)_folderExpansionAnimationWillBegin:(id)arg0 ;
-(void)_handleTransitionWillProgressToEndState:(BOOL)arg0 ;
-(void)beginConfiguration;
-(void)endConfiguration;
-(void)endConfigurationImmediately;
-(void)iconViewDidBecomeWindowless:(id)arg0 ;
-(void)iconViewSizeDidChange:(id)arg0 ;
-(void)iconViewWasDiscarded:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;
-(void)popConfiguration;
-(void)prepareTransition:(id)arg0 ;
-(void)stackConfigurationViewController:(id)arg0 didCommitStackConfiguration:(id)arg1 ;
-(void)stackConfigurationViewController:(id)arg0 didRemoveSuggestedWidgetIcon:(id)arg1 ;
-(void)stackConfigurationViewController:(id)arg0 isConsumingDropSession:(id)arg1 ;
-(void)stackConfigurationViewControllerRequestsDismissal:(id)arg0 ;
-(void)stackConfigurationViewControllerRequestsPresentAddWidgetSheet:(id)arg0 ;
-(void)stackConfigurationViewControllerWillAnimateWidgetInsertion:(id)arg0 ;
-(void)transitionDidProgressToEndState:(id)arg0 ;
-(void)transitionDidReturnToBeginningState:(id)arg0 ;
-(void)transitionWillProgressToEndState:(id)arg0 ;
-(void)transitionWillReturnToBeginningState:(id)arg0 ;


@end


#endif