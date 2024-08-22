// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPACTIVITYSESSIONMANAGER_H
#define CPACTIVITYSESSIONMANAGER_H

@class NSSet, NSUUID;
@protocol CPActivitySessionManager, CPActivitySessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CPActivitySessionManager : NSObject <CPActivitySessionManager>

 {
    ? id;
    ? groupUUID;
    ? queue;
    ? featureFlags;
    ? systemStateObserver;
    ? serverBag;
    ? _activitySessions;
    ? applicationController;
    ? applicationLauncher;
    ? _activitySessionCreation;
    ? $__lazy_storage_$_protectedStorage;
    ? topicsObserver;
    ? _topicsObserverGenerator;
}


@property (nonatomic, readonly) NSSet *activitySessions;
@property (nonatomic, weak) NSObject<CPActivitySessionManagerDelegate> *delegate; // ivar: delegate
@property (nonatomic) BOOL handedOff; // ivar: handedOff
@property (nonatomic, readonly) NSUUID *identifier;


+(BOOL)supportsMultipleActivitySessions;
-(id)createActivitySessionWithTuActivitySession:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 groupUUID:(id)arg1 activities:(id)arg2 applicationController:(id)arg3 delegate:(id)arg4 queue:(id)arg5 systemStateObserver:(id)arg6 ;
-(void)leaveActivitySessionWithUUID:(id)arg0 ;
-(void)refreshDataCryptors;
-(void)removeActivitySessionWithUUID:(id)arg0 usingHandle:(id)arg1 ;
-(void)resetSessions;
-(void)updateActivitySessionWithUUID:(id)arg0 activity:(id)arg1 ;
-(void)updateVirtualParticipantIdentifier:(NSUInteger)arg0 ;


@end


#endif