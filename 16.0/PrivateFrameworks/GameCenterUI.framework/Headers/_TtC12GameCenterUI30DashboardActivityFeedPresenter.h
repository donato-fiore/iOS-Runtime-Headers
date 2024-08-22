// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI30DASHBOARDACTIVITYFEEDPRESENTER_H
#define _TTC12GAMECENTERUI30DASHBOARDACTIVITYFEEDPRESENTER_H

@class TtC12GameCenterUI13BasePresenter, NSString;



@interface _TtC12GameCenterUI30DashboardActivityFeedPresenter : TtC12GameCenterUI13BasePresenter {
    ? sections;
    ? requiredData;
    ? dashboardDisplayMode;
    ? requiredDataPresenter;
}


@property (nonatomic, readonly) NSString *title;


-(id)initWithPlayerId:(id)arg0 ;
-(void)loadMoreActivityFeedWithContinuationToken:(id)arg0 ;
-(void)updateSnapshot;


@end


#endif