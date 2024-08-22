// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PUSETTINGSCONTROLLER_H
#define _PUSETTINGSCONTROLLER_H

@class PTUISettingsController, UINavigationController, PXSettings, PTSettings;



@interface _PUSettingsController : PTUISettingsController

@property (readonly, nonatomic) UINavigationController *configurationsNavigationController; // ivar: _configurationsNavigationController
@property (readonly, nonatomic) PXSettings *currentSettings;
@property (copy, nonatomic) id *dismissButtonFactory; // ivar: _dismissButtonFactory
@property (copy, nonatomic) id *ellipsisBarButtonItemFactory; // ivar: _ellipsisBarButtonItemFactory
@property (nonatomic) BOOL hasWarnedForOverrides; // ivar: _hasWarnedForOverrides
@property (copy, nonatomic) id *onViewDidDisappearBlock; // ivar: _onViewDidDisappearBlock
@property (readonly, nonatomic) PTSettings *rootSettings; // ivar: _rootSettings
@property (readonly, nonatomic) UINavigationController *searchNavigationController; // ivar: _searchNavigationController


-(id)initWithRootSettings:(id)arg0 ;
-(void)_clearSettingsOverride;
-(void)_invalidateNavigationItems;
-(void)_updateNavigationItemOfViewController:(id)arg0 ;
-(void)_warnForSettingsOverride;
-(void)callOnViewDidDisappearBlock;
-(void)handleEllipsisBarButtonItem:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif