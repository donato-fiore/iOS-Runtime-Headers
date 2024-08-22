// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI20FRIENDSFEEDPRESENTER_H
#define _TTC12GAMECENTERUI20FRIENDSFEEDPRESENTER_H

@class TtC12GameCenterUI13BasePresenter;



@interface _TtC12GameCenterUI20FriendsFeedPresenter : TtC12GameCenterUI13BasePresenter {
    ? sections;
    ? requiredData;
    ? game;
    ? requiredDataPresenter;
}




-(id)initWithGame:(id)arg0 ;
-(id)initWithPlayerId:(id)arg0 ;
-(void)loadMoreActivityFeedWithContinuationToken:(id)arg0 ;
-(void)updateSnapshot;


@end


#endif