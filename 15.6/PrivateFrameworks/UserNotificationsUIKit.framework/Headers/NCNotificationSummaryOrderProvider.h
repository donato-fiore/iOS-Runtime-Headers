// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONSUMMARYORDERPROVIDER_H
#define NCNOTIFICATIONSUMMARYORDERPROVIDER_H

@class NSUUID, NSArray, NSString, DNDMode, UIView, NSDate, UITapGestureRecognizer;
@protocol PLContentSizeCategoryAdjusting, NCNotificationSummaryOrderProviderDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationSummaryOrderProvider : NSObject <PLContentSizeCategoryAdjusting>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) NSInteger atxDigestDeliveryTime; // ivar: _atxDigestDeliveryTime
@property (readonly, copy, nonatomic) NSUUID *atxUUID; // ivar: _atxUUID
@property (copy, nonatomic) NSArray *cachedOrderedNotificationGroupLists; // ivar: _cachedOrderedNotificationGroupLists
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationSummaryOrderProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (retain, nonatomic) DNDMode *dndMode; // ivar: _dndMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *leadingSummaryPlatterView;
@property (nonatomic, getter=isOnboardingSummary) BOOL onboardingSummary; // ivar: _onboardingSummary
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSDate *summaryDate; // ivar: _summaryDate
@property (copy, nonatomic) NSString *summaryHeading; // ivar: _summaryHeading
@property (retain, nonatomic) UITapGestureRecognizer *summaryPlatterViewTapGestureRecognizer; // ivar: _summaryPlatterViewTapGestureRecognizer
@property (readonly) Class superclass;


+(id)atxDigestGeneratorClient;
+(id)atxQueue;
+(id)notificationSummaryOrderProviderOfType:(NSUInteger)arg0 ;
-(BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSUInteger)currentNotificationCount;
-(NSUInteger)notificationCountForNotificationGroupLists:(id)arg0 ;
-(id)atxUserNotificationsArrayForNotificationGroupLists:(id)arg0 ;
-(id)atxUserNotificationsForNotificationRequests:(id)arg0 ;
-(id)clearControlViewForLeadingSummaryPlatterView;
-(id)filterPresentNotificationGroupsInDigestNotificationGroups:(id)arg0 ;
-(id)init;
-(id)listComponentDelegate;
-(id)materialGroupNameBase;
-(id)notificationRequestsInNotificationGroupLists:(id)arg0 ;
-(id)orderedNotificationGroupLists:(id)arg0 forATXUserNotificationDigestNotificationGroup:(id)arg1 orderGroupNotifications:(BOOL)arg2 ;
-(id)representativeNotificationGroupListInGroupLists:(id)arg0 forATXUserNotificationDigestNotificationGroup:(id)arg1 ;
-(id)representativeNotificationRequestsForNotificationGroupLists:(id)arg0 ;
-(id)titlesForSectionListsInSummary;
-(void)_tapOnSummaryPlatterView;
-(void)_updateNotificationOrderingForGroupList:(id)arg0 byATXDigestNotificationGroup:(id)arg1 ;
-(void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)arg0 ;
-(void)atxLogSummaryPlatterRemoval;
-(void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)arg0 ;
-(void)configureSummaryContentDisplaying:(id)arg0 withSummaryContentProviding:(id)arg1 ;
-(void)generateDigestForATXUserNotificationArrays:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)updateLeadingSummaryPlatterView;
-(void)updateSummaryOrderWithNotificationGroupLists:(id)arg0 reloadDigest:(BOOL)arg1 ;
-(void)updatedOrderedGroupLists;


@end


#endif