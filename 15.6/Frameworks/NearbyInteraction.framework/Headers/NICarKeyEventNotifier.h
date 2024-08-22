// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NICARKEYEVENTNOTIFIER_H
#define NICARKEYEVENTNOTIFIER_H


#import <Foundation/Foundation.h>

#import "NISession.h"

@interface NICarKeyEventNotifier : NSObject {
    NISession *parentSession;
}




-(id)initWithParentSession:(id)arg0 ;
-(void)notifyRangingIntentSentToVehicleWithReason:(NSInteger)arg0 ;
-(void)notifyVehicleLockedWithReason:(NSInteger)arg0 ;
-(void)notifyVehicleReadyToDriveWithReason:(NSInteger)arg0 ;
-(void)notifyVehicleTerminatedRangingSession;
-(void)notifyVehicleUnlockedWithReason:(NSInteger)arg0 ;


@end


#endif