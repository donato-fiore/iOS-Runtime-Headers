// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI36GAMECENTERSIGNINACTIONIMPLEMENTATION_H
#define _TTC12GAMECENTERUI36GAMECENTERSIGNINACTIONIMPLEMENTATION_H

@protocol AAUISignInControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12GameCenterUI36GameCenterSignInActionImplementation : NSObject <AAUISignInControllerDelegate>

 {
    ? viewController;
    ? signInViewController;
    ? currentActionOutcome;
}




-(id)init;
-(void)signInController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signInControllerDidCancel:(id)arg0 ;


@end


#endif