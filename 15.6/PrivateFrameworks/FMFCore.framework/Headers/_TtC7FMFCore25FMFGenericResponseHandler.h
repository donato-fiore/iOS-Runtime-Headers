// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7FMFCORE25FMFGENERICRESPONSEHANDLER_H
#define _TTC7FMFCORE25FMFGENERICRESPONSEHANDLER_H


#import <Foundation/Foundation.h>


@interface _TtC7FMFCore25FMFGenericResponseHandler : NSObject {
    ? identifier;
    ? delegate;
    ? fmfSession;
    ? fences;
    ? isSnapshotMode;
    ? locationShifter;
    ? updateQueue;
    ? locationAlertsOnMeByMe;
    ? locationAlertsOnMeByFriends;
    ? locationAlertsOnFriendsByMe;
    ? locationAlertsOnFriendsByFriends;
    ? dataManager;
    ? secureLocationManager;
}




-(id)init;
-(void)dealloc;


@end


#endif