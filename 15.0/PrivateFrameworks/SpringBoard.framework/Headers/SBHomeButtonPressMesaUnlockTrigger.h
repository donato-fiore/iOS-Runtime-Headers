// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEBUTTONPRESSMESAUNLOCKTRIGGER_H
#define SBHOMEBUTTONPRESSMESAUNLOCKTRIGGER_H



#import "SBMesaUnlockTrigger.h"

@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _menuButtonDown;
    BOOL _primed;
}




-(BOOL)bioUnlock;
-(id)description;
-(id)succinctDescriptionBuilder;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)screenOff;
-(void)significantUserInteractionOccurred;


@end


#endif