// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EACELLBROADCASTMESSAGELISTENER_H
#define EACELLBROADCASTMESSAGELISTENER_H


#import <Foundation/Foundation.h>

#import "EAEmergencyAlertCenter.h"

@interface EACellBroadcastMessageListener : NSObject {
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}




+(id)sharedInstance;
-(id)init;
-(void)_cellBroadcastMessageReceived:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif