// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDGADGET_H
#define PXFEEDGADGET_H

@class NSString, UINavigationController;
@protocol PXProgrammaticNavigationParticipant, PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXFeedConfiguration.h"
#import "PXFeedViewController.h"
#import "PXGadgetSpec.h"
#import "PXProgrammaticNavigationDestination.h"
#import "PXFeedViewLayoutSpecManager.h"

@interface PXFeedGadget : NSObject <PXProgrammaticNavigationParticipant, PXGadget>

 {
    BOOL _didLoadNavigationParticipant;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, nonatomic) PXFeedConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXFeedViewController *feedViewController; // ivar: _feedViewController
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (nonatomic) BOOL isContentActive; // ivar: _isContentActive
@property (nonatomic) BOOL isContentVisible; // ivar: _isContentVisible
@property (nonatomic) BOOL isGadgetControllerActive; // ivar: _isGadgetControllerActive
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) NSObject<PXProgrammaticNavigationParticipant> *navigationParticipant; // ivar: _navigationParticipant
@property (nonatomic) NSInteger priority;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly, nonatomic) PXFeedViewLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)contentViewController;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_loadFeedViewControllerIfNeeded;
-(void)_loadSpecManagerIfNeeded;
-(void)_navigateToFullFeedAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updateIsContentActive;
-(void)contentViewDidDisappear;
-(void)contentViewWillAppear;
-(void)gadgetControllerHasAppeared;
-(void)gadgetWasDismissed;
-(void)invalidatePreferredContentHeight;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)userDidSelectAccessoryButton:(id)arg0 ;


@end


#endif