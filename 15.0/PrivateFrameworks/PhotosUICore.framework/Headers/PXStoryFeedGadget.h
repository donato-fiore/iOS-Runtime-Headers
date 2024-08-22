// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFEEDGADGET_H
#define PXSTORYFEEDGADGET_H

@class NSString, UINavigationController;
@protocol PXProgrammaticNavigationParticipant, PXStoryFeedGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXStoryFeedConfiguration.h"
#import "PXStoryFeedViewController.h"
#import "PXGadgetSpec.h"
#import "PXProgrammaticNavigationDestination.h"
#import "PXStoryFeedViewLayoutSpecManager.h"

@interface PXStoryFeedGadget : NSObject <PXProgrammaticNavigationParticipant, PXStoryFeedGadget>

 {
    BOOL _didLoadNavigationParticipant;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, nonatomic) PXStoryFeedConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryFeedViewController *feedViewController; // ivar: _feedViewController
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) NSObject<PXProgrammaticNavigationParticipant> *navigationParticipant; // ivar: _navigationParticipant
@property (nonatomic) NSInteger priority;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;


-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)contentViewController;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_loadFeedViewControllerIfNeeded;
-(void)_loadSpecManagerIfNeeded;
-(void)_navigateToFullFeedAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)userDidSelectAccessoryButton:(id)arg0 ;


@end


#endif