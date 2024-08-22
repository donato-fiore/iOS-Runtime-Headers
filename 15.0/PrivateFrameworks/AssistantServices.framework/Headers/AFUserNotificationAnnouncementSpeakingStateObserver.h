// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUSERNOTIFICATIONANNOUNCEMENTSPEAKINGSTATEOBSERVER_H
#define AFUSERNOTIFICATIONANNOUNCEMENTSPEAKINGSTATEOBSERVER_H

@class NSMutableSet, NSString;
@protocol AFInvalidating, OS_dispatch_queue, AFUserNotificationAnnouncementSpeakingStateDelegate;

#import <Foundation/Foundation.h>


@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFUserNotificationAnnouncementSpeakingStateDelegate> *_delegate;
    NSMutableSet *_observingNotifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_receivedNotificationForSpeakingStateChange:(id)arg0 ;
-(void)_removeObserverForNotificationRequestIdentifier:(id)arg0 ;
-(void)_startObservingNotificationWithRequestIdentifier:(id)arg0 ;
-(void)_tearDown;
-(void)dealloc;
-(void)invalidate;
-(void)receivedNotificationForSpeakingStateChange:(id)arg0 ;
-(void)startObservingNotificationWithRequestIdentifier:(id)arg0 ;
-(void)stopObservingNotificationWithRequestIdentifier:(id)arg0 ;


@end


#endif