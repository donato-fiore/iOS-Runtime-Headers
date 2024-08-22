// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10SIRIFINDMY23FINDFRIENDINTENTHANDLER_H
#define _TTC10SIRIFINDMY23FINDFRIENDINTENTHANDLER_H

@protocol FindFriendIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC10SiriFindMy23FindFriendIntentHandler : NSObject <FindFriendIntentHandling>

 {
    ? deviceState;
    ? sessionManager;
    ? siriEnvironment;
}




-(id)init;
-(void)confirmFindFriend:(id)arg0 completion:(id)arg1 ;
-(void)handleFindFriend:(id)arg0 completion:(id)arg1 ;
-(void)resolveFriendForFindFriend:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif