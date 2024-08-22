// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUSERNOTIFICATIONANNOUNCEMENTSPEAKINGSTATEOBSERVER_H
#define AFUSERNOTIFICATIONANNOUNCEMENTSPEAKINGSTATEOBSERVER_H

@class NSMutableSet, NSXPCConnection, NSString;
@protocol AFUserNotificationAnnouncementSpeakingStateServiceDelegate, AFInvalidating, OS_dispatch_queue, AFUserNotificationAnnouncementSpeakingStateDelegate;

#import <Foundation/Foundation.h>


@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFUserNotificationAnnouncementSpeakingStateServiceDelegate, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFUserNotificationAnnouncementSpeakingStateDelegate> *_delegate;
    NSMutableSet *_observingNotifications;
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)_currentConnection;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_cleanUpConnection;
-(void)_notifyObserverOfFailureForAllObservingNotifications;
-(void)_removeObserverForNotificationRequestIdentifier:(id)arg0 ;
-(void)_speakingStateDidChange:(NSInteger)arg0 forIdentifiers:(id)arg1 ;
-(void)_startObservingNotificationWithRequestIdentifier:(id)arg0 ;
-(void)_tearDown;
-(void)cleanUpConnection;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)invalidate;
-(void)speakingStateDidChange:(NSInteger)arg0 forIdentifiers:(id)arg1 ;
-(void)startObservingNotificationWithRequestIdentifier:(id)arg0 ;
-(void)stopObservingNotificationWithRequestIdentifier:(id)arg0 ;


@end


#endif