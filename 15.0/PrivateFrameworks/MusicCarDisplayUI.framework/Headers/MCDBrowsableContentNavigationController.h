// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDBROWSABLECONTENTNAVIGATIONCONTROLLER_H
#define MCDBROWSABLECONTENTNAVIGATIONCONTROLLER_H

@class UITabBarController, NSString, CPUINowPlayingButtonWrapperView;
@protocol UITabBarControllerDelegate, MCDPCContainerDelegate, OS_dispatch_queue;


#import "MCDPCContainer.h"
#import "MCDPCModel.h"

@interface MCDBrowsableContentNavigationController : UITabBarController <UITabBarControllerDelegate, MCDPCContainerDelegate>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) MCDPCContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishInitialLoad; // ivar: _didFinishInitialLoad
@property (nonatomic) BOOL didFinishInitialViewAppear; // ivar: _didFinishInitialViewAppear
@property (nonatomic) BOOL hasCarScreen; // ivar: _hasCarScreen
@property (nonatomic) BOOL hasInvalidatedDummyTabs; // ivar: _hasInvalidatedDummyTabs
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCDPCModel *model; // ivar: _model
@property (retain, nonatomic) CPUINowPlayingButtonWrapperView *nowPlayingButtonView; // ivar: _nowPlayingButtonView
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) UITabBarController *tabBarController; // ivar: _tabBarController
@property (nonatomic) BOOL visible; // ivar: _visible


-(id)_hostTabAtIndex:(NSUInteger)arg0 dummyTab:(BOOL)arg1 ;
-(id)_tabBarItemForViewController:(id)arg0 fromItem:(id)arg1 ;
-(id)initWithBundleID:(id)arg0 model:(id)arg1 ;
-(void)_appRegisteredForContent:(id)arg0 ;
-(void)_loadAllHostTabs;
-(void)_nowPlayingButtonTapped:(id)arg0 ;
-(void)_nowPlayingDidChange:(id)arg0 ;
-(void)_updateNowPlayingButtonVisibility;
-(void)container:(id)arg0 didInvalidateIndicies:(id)arg1 ;
-(void)invalidateAndReloadTabsWithCompletion:(id)arg0 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTitleAndTabBarItemsAtIndexes:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif