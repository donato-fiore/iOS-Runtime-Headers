// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKCONTACTSPRIVACYMAINTAINER_H
#define _DKCONTACTSPRIVACYMAINTAINER_H

@class NSUserDefaults, _PASSimpleCoalescingTimer;
@protocol _DKKnowledgeQuerying, NSObject;

#import <Foundation/Foundation.h>

#import "_CDSpotlightItemRecorder.h"

@interface _DKContactsPrivacyMaintainer : NSObject {
    id<_DKKnowledgeQuerying> *_knowledgeStore;
    _CDSpotlightItemRecorder *_spotlightRecorder;
    NSUserDefaults *_userDefaults;
    int _notifyToken;
    id<NSObject> *_notificationCenterToken;
    _PASSimpleCoalescingTimer *_coalescingContactChangeTimer;
}




-(id)initWithKnowledgeStore:(id)arg0 spotlightRecorder:(id)arg1 ;
-(void)_deleteIntentsRelatedToContactIdentifiers:(id)arg0 ;
-(void)_unregisterContactDeletionNotifications;
-(void)cleanupPendingDeletedContacts;
-(void)dealloc;
-(void)handleContactDeletionNotification;
-(void)handleRecentlyDeletedContactsWithLimit:(NSUInteger)arg0 ;
-(void)registerContactDeletionNotifications;
-(void)scheduleIntentsPruningXPCActivity;


@end


#endif