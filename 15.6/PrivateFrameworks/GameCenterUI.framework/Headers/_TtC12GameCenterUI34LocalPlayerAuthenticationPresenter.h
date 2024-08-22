// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI34LOCALPLAYERAUTHENTICATIONPRESENTER_H
#define _TTC12GAMECENTERUI34LOCALPLAYERAUTHENTICATIONPRESENTER_H

@protocol GKLocalPlayerAuthenticationUIPersonality;

#import <Foundation/Foundation.h>


@interface _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter : NSObject <GKLocalPlayerAuthenticationUIPersonality>

 {
    ? localPlayer;
    ? isUpdating;
    ? onUpdatePhaseChange;
    ? onAuthenticatedPlayerDidChange;
    ? onUIRequired;
}




-(id)init;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg0 dismiss:(id)arg1 ;


@end


#endif