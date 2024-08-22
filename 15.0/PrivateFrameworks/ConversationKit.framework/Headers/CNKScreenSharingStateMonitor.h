// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNKSCREENSHARINGSTATEMONITOR_H
#define CNKSCREENSHARINGSTATEMONITOR_H

@class TUCall;

#import <Foundation/Foundation.h>


@interface CNKScreenSharingStateMonitor : NSObject {
    ? conversationController;
    ? observations;
    ? currentlySharingParticipant;
}


@property (nonatomic, retain) TUCall *call; // ivar: call
@property (nonatomic) BOOL isBroadcastingScreenSharing; // ivar: isBroadcastingScreenSharing


+(id)sharedMonitor;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif