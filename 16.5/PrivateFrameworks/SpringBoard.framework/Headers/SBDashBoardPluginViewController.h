// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDPLUGINVIEWCONTROLLER_H
#define SBDASHBOARDPLUGINVIEWCONTROLLER_H

@class CSCoverSheetViewControllerBase, NSString;
@protocol SBLockScreenPluginDelegate;


#import "SBLockScreenPlugin.h"

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBLockScreenPlugin *plugin; // ivar: _plugin
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)handleEvent:(id)arg0 ;
-(NSInteger)_presentationPriority;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationTransition;
-(NSInteger)presentationType;
-(id)_newDisplayLayoutElement;
-(id)coverSheetIdentifier;
-(id)initWithLockScreenPlugin:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(id)view;
-(void)_updateLegibility;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)performCustomTransitionToVisible:(BOOL)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)pluginAppearanceDidChange:(id)arg0 ;
-(void)updateForPresentation:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToPresented:(BOOL)arg0 ;


@end


#endif