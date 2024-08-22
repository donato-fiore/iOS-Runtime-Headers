// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBULLETINSPOKENOBSERVERGATEWAY_H
#define SBBULLETINSPOKENOBSERVERGATEWAY_H

@class BBObserver, DNDEventBehaviorResolutionService, AFSiriAnnouncementRequestCapabilityManager, NSString;
@protocol BBObserverDelegate, AFSiriAnnouncementRequestCapabilityObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBBulletinSpokenObserverGateway : NSObject <BBObserverDelegate, AFSiriAnnouncementRequestCapabilityObserving>

 {
    BBObserver *_bbObserver;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    AFSiriAnnouncementRequestCapabilityManager *_announcementRequestCapabilityManager;
    BOOL _canAnnounceNotifications;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)availableAnnouncementRequestTypesChanged:(NSUInteger)arg0 onPlatform:(NSInteger)arg1 ;
-(void)eligibleAnnouncementRequestTypesChanged:(NSUInteger)arg0 onPlatform:(NSInteger)arg1 ;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 withReply:(id)arg4 ;


@end


#endif