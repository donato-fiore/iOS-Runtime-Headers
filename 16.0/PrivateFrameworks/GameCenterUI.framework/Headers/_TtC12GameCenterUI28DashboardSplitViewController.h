// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI28DASHBOARDSPLITVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI28DASHBOARDSPLITVIEWCONTROLLER_H

@class TtC12GameCenterUI35BaseDoubleColumnSplitViewController;



@interface _TtC12GameCenterUI28DashboardSplitViewController : TtC12GameCenterUI35BaseDoubleColumnSplitViewController {
    ? $__lazy_storage_$_dismissHandler;
    ? launchContext;
    ? request;
    ? $__lazy_storage_$_sidebarViewController;
    ? $__lazy_storage_$_primaryNavigationController;
    ? cacheSecondaryNavigationControllers;
}




-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(NSInteger)splitViewController:(id)arg0 topColumnForCollapsingToProposedTopColumn:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)splitViewController:(id)arg0 willChangeToDisplayMode:(NSInteger)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif