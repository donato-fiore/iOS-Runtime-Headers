// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONDIGESTDETAILEDSUMMARYORDERPROVIDER_H
#define NCNOTIFICATIONDIGESTDETAILEDSUMMARYORDERPROVIDER_H

@class NSArray;


#import "NCNotificationDigestSummaryOrderProvider.h"
#import "NCNotificationSummaryContentProvider.h"
#import "NCDigestSummaryPlatterView.h"

@interface NCNotificationDigestDetailedSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryContentProvider *appsSummaryContentProvider; // ivar: _appsSummaryContentProvider
@property (retain, nonatomic) NCNotificationSummaryContentProvider *communicationsSummaryContentProvider; // ivar: _communicationsSummaryContentProvider
@property (retain, nonatomic) NCDigestSummaryPlatterView *digestSummaryPlatterView; // ivar: _digestSummaryPlatterView
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders; // ivar: _featuredNotificationContentProviders


-(BOOL)_presentFeaturedNotificationsInline;
-(BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSUInteger)_totalNotificationCountForSectionIdentifier:(id)arg0 ;
-(id)_atxHighlightedGroups;
-(id)leadingSummaryPlatterViewConfigureIfNecessary;
-(void)_updateAppsSummaryContentProvidersWithRankedGroups:(id)arg0 ;
-(void)_updateCommunicationsSummaryContentProvider;
-(void)_updateDigestSummaryPlatterView;
-(void)_updateFeaturedNotificationContentProvidersWithHighlightedGroups:(id)arg0 ;
-(void)setDeviceAuthenticated:(BOOL)arg0 ;
-(void)updateLeadingSummaryPlatterView;


@end


#endif