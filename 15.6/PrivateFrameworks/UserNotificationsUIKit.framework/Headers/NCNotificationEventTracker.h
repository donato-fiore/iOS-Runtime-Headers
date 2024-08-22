// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONEVENTTRACKER_H
#define NCNOTIFICATIONEVENTTRACKER_H

@class PETScalarEventTracker, ATXNotificationsLoggingClient;

#import <Foundation/Foundation.h>


@interface NCNotificationEventTracker : NSObject {
    PETScalarEventTracker *_shortLookDefaultActionTracker;
    PETScalarEventTracker *_shortLookDismissTracker;
    PETScalarEventTracker *_shortLookClearTracker;
    PETScalarEventTracker *_notificationCenterClearDayTracker;
    PETScalarEventTracker *_notificationCenterClearAllTracker;
    PETScalarEventTracker *_longLookPresentationTracker;
    PETScalarEventTracker *_longLookDefaultActionTracker;
    PETScalarEventTracker *_longLookCustomActionTracker;
    PETScalarEventTracker *_longLookDismissTracker;
    PETScalarEventTracker *_longLookReparkTracker;
    ATXNotificationsLoggingClient *_logger;
}




+(id)createATXNotificationInterfaceFromRequest:(id)arg0 ;
+(id)sharedInstance;
-(NSUInteger)primaryAttachmentTypeForRequest:(id)arg0 ;
-(id)_attachmentCountProperty;
-(id)_customActionsCountProperty;
-(id)_customExtensionProperty;
-(id)_destinationProperty;
-(id)_firstPartyAppProperty;
-(id)_longLookCustomActionTracker;
-(id)_longLookDefaultActionTracker;
-(id)_longLookDismissTracker;
-(id)_longLookPresentationTracker;
-(id)_longLookReparkTracker;
-(id)_notificationCenterClearAllTracker;
-(id)_notificationCenterClearDayTracker;
-(id)_primaryAttachmentTypeProperty;
-(id)_shortLookClearTracker;
-(id)_shortLookDefaultActionTracker;
-(id)_shortLookDismissTracker;
-(id)_textInputProperty;
-(id)_triggerPropertyForEvent:(id)arg0 ;
-(id)init;
-(id)notificationDestinationForState:(id)arg0 ;
-(void)_displayedNotificationRequests:(id)arg0 inUILocation:(NSInteger)arg1 ;
-(void)digestAppeared:(id)arg0 ;
-(void)digestDismissed:(id)arg0 ;
-(void)digestExpanded:(id)arg0 ;
-(void)digestExpired:(id)arg0 ;
-(void)dismissedSectionType:(NSUInteger)arg0 withUUID:(id)arg1 ;
-(void)executedActionWithIdentifier:(id)arg0 forNotificationRequest:(id)arg1 ;
-(void)expandedSectionType:(NSUInteger)arg0 withUUID:(id)arg1 ;
-(void)hideNotificationRequest:(id)arg0 ;
-(void)insertedNotificationRequest:(id)arg0 toSectionType:(NSUInteger)arg1 ;
-(void)longLookCustomAction:(id)arg0 forNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)longLookDefaultActionInvokedWithTrigger:(NSInteger)arg0 forNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)longLookDismissInvokedWithTrigger:(NSInteger)arg0 forNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)longLookPresentedForNotificationRequest:(id)arg0 ;
-(void)longLookReparkInvokedWithTrigger:(NSInteger)arg0 forNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)missedBundleAppeared:(id)arg0 ;
-(void)missedBundleDismissed:(id)arg0 ;
-(void)missedBundleExpanded:(id)arg0 ;
-(void)missedBundleExpired:(id)arg0 ;
-(void)modifiedNotificationRequest:(id)arg0 ;
-(void)notificationCenterAppeared;
-(void)notificationCenterClearAll;
-(void)notificationCenterDisappeared;
-(void)presentedNotificationRequestAsBanner:(id)arg0 ;
-(void)realTimeTuningOutcome:(NSInteger)arg0 withBundleId:(id)arg1 ;
-(void)realTimeTuningTrigger:(NSInteger)arg0 ;
-(void)receivedNotification:(id)arg0 withProminence:(BOOL)arg1 sectionSettings:(id)arg2 ;
-(void)removedNotificationRequest:(id)arg0 ;
-(void)shortLookClearedForNotificationRequest:(id)arg0 withState:(id)arg1 ;
-(void)shortLookDefaultActionInvokedWithTrigger:(NSInteger)arg0 forNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)shortLookDismissInvokedForNotificationRequest:(id)arg0 withState:(id)arg1 ;
-(void)toggledGroupState:(BOOL)arg0 withLeadingNotificationRequest:(id)arg1 ;


@end


#endif