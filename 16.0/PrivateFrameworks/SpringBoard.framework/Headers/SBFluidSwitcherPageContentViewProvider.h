// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERPAGECONTENTVIEWPROVIDER_H
#define SBFLUIDSWITCHERPAGECONTENTVIEWPROVIDER_H

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol SBAppSwitcherTransientOverlayPageContentViewDelegate, SBFluidSwitcherPageContentViewProviderDelegate;

#import <Foundation/Foundation.h>

#import "SBAppSwitcherSnapshotImageCache.h"
#import "SBAppSwitcherSnapshotLockoutViewControllerProvider.h"

@interface SBFluidSwitcherPageContentViewProvider : NSObject <SBAppSwitcherTransientOverlayPageContentViewDelegate>

 {
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    NSMapTable *_pageContentViewToTransientOverlayViewController;
    NSMutableArray *_transientOverlayPageContentViews;
    NSMutableDictionary *_switcherServiceViewControllerMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFluidSwitcherPageContentViewProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isSuitableForRecycledItemContainer:(id)arg0 ;
-(NSInteger)_interfaceOrientation;
-(NSInteger)_preferredContentInterfaceOrientationForViewController:(id)arg0 preferredInterfaceOrientation:(NSInteger)arg1 ;
-(id)_containerViewController;
-(id)_snapshotViewDelegate;
-(id)_snapshotViewForAppLayout:(id)arg0 setActive:(BOOL)arg1 ;
-(id)_viewForService:(id)arg0 appLayout:(id)arg1 ;
-(id)existingTransientOverlayViewControllerForAppLayout:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 snapshotCache:(id)arg1 lockoutViewProvider:(id)arg2 ;
-(id)pageContentViewForAppLayout:(id)arg0 setActive:(BOOL)arg1 ;
-(struct CGSize )_pageViewSizeForAppLayout:(id)arg0 ;
-(void)_applyTransientOverlayViewController:(id)arg0 toPageContentView:(id)arg1 ;
-(void)_relinquishTransientOverlayViewController:(id)arg0 forPageContentView:(id)arg1 ;
-(void)acquiredViewController:(id)arg0 forTransientOverlayAppLayout:(id)arg1 ;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)arg0 ;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)arg0 ;
-(void)purgePageContentViewForAppLayout:(id)arg0 ;
-(void)relinquishTransientOverlayViewController:(id)arg0 ;


@end


#endif