// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONFERENCEMANAGER_H
#define SBCONFERENCEMANAGER_H

@class TUCallCenter;

#import <Foundation/Foundation.h>


@interface SBConferenceManager : NSObject {
    BOOL _hasFaceTimeCapability;
    *MGNotificationTokenStruct _faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}




+(id)sharedInstance;
+(void)initialize;
-(BOOL)activeFaceTimeCallExists;
-(BOOL)canStartFaceTime;
-(BOOL)faceTimeInvitationExists;
-(BOOL)faceTimeIsAvailable;
-(BOOL)hasFaceTimeCapability;
-(BOOL)inFaceTime;
-(BOOL)inFaceTimeVideo;
-(id)activeFaceTimeCall;
-(id)currentFaceTimeCall;
-(id)incomingFaceTimeCall;
-(id)init;
-(void)_faceTimeStateChanged:(id)arg0 ;
-(void)dealloc;
-(void)endFaceTime;


@end


#endif