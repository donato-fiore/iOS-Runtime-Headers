// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI25DASHBOARDSIDEBARPRESENTER_H
#define _TTC12GAMECENTERUI25DASHBOARDSIDEBARPRESENTER_H

@class TtC12GameCenterUI13BasePresenter, NSString;


#import "GKDashboardRequest.h"

@interface _TtC12GameCenterUI25DashboardSidebarPresenter : TtC12GameCenterUI13BasePresenter {
    ? launchContext;
    ? onSelectedItem;
    ? onRequiredDataChanged;
    ? selectedItem;
    ? intentOnFirstLoad;
    ? sections;
    ? requiredData;
    ? requiredDataPresenter;
    ? dashboardDisplayMode;
}


@property (nonatomic, readonly) GKDashboardRequest *request; // ivar: request
@property (nonatomic, readonly) NSString *title;


-(id)initWithPlayerId:(id)arg0 ;
-(void)handleViewDidLoad;


@end


#endif