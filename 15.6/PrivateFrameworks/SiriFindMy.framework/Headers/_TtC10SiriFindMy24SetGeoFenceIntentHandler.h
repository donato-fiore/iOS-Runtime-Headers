// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10SIRIFINDMY24SETGEOFENCEINTENTHANDLER_H
#define _TTC10SIRIFINDMY24SETGEOFENCEINTENTHANDLER_H

@protocol SetGeoFenceIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC10SiriFindMy24SetGeoFenceIntentHandler : NSObject <SetGeoFenceIntentHandling>

 {
    ? deviceState;
    ? sessionManager;
}




-(id)init;
-(void)confirmSetGeoFence:(id)arg0 completion:(id)arg1 ;
-(void)handleSetGeoFence:(id)arg0 completion:(id)arg1 ;
-(void)resolveFriendForSetGeoFence:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLocationForSetGeoFence:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif