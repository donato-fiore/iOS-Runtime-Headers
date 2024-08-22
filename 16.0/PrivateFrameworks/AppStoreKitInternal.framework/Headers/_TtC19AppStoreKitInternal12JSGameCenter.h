// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL12JSGAMECENTER_H
#define _TTC19APPSTOREKITINTERNAL12JSGAMECENTER_H

@protocol _TtP19AppStoreKitInternalP33_7B7F80098AC69273DB70D2D7451E823519JSGameCenterExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal12JSGameCenter : NSObject <_TtP19AppStoreKitInternalP33_7B7F80098AC69273DB70D2D7451E823519JSGameCenterExports_>

 {
    ? dataProvider;
}




-(id)fetchAchievementSummaryForGame:(id)arg0 ;
-(id)fetchFriendsThatPlayGame:(id)arg0 ;
-(id)fetchGamesPopularWithFriends:(id)arg0 ;
-(id)fetchRecentlyPlayedGamesWithinSeconds:(id)arg0 ;
-(id)fetchRengagementDataForLocalPlayer;
-(id)fetchSuggestedFriends:(NSInteger)arg0 ;
-(id)init;


@end


#endif