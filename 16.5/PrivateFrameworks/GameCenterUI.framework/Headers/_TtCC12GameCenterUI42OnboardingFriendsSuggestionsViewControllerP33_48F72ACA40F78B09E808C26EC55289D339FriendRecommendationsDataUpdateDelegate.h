// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC12GAMECENTERUI42ONBOARDINGFRIENDSSUGGESTIONSVIEWCONTROLLERP33_48F72ACA40F78B09E808C26EC55289D339FRIENDRECOMMENDATIONSDATAUPDATEDELEGATE_H
#define _TTCC12GAMECENTERUI42ONBOARDINGFRIENDSSUGGESTIONSVIEWCONTROLLERP33_48F72ACA40F78B09E808C26EC55289D339FRIENDRECOMMENDATIONSDATAUPDATEDELEGATE_H

@protocol GKDaemonProxyDataUpdateDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC12GameCenterUI42OnboardingFriendsSuggestionsViewControllerP33_48F72ACA40F78B09E808C26EC55289D339FriendRecommendationsDataUpdateDelegate : NSObject <GKDaemonProxyDataUpdateDelegate>

 {
    ? updateBlock;
}




-(id)init;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;


@end


#endif