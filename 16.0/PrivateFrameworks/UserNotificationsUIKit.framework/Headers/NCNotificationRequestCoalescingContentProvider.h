// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONREQUESTCOALESCINGCONTENTPROVIDER_H
#define NCNOTIFICATIONREQUESTCOALESCINGCONTENTPROVIDER_H

@class NSNumberFormatter, NSMutableArray, NSString;


#import "NCNotificationRequestContentProvider.h"
#import "NCNotificationSummaryBuilder.h"

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
}


@property (retain, nonatomic) NSMutableArray *coalescedNotificationRequests; // ivar: _coalescedNotificationRequests
@property (copy, nonatomic) NSString *collapsedSectionSummaryString; // ivar: _collapsedSectionSummaryString
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder; // ivar: _overridenSummaryBuilder
@property (nonatomic) BOOL showSummaryFooterText; // ivar: _showSummaryFooterText
@property (nonatomic) BOOL showSummaryTextAsContent; // ivar: _showSummaryTextAsContent


-(BOOL)_shouldShowNotificationBody;
-(BOOL)containsMatchingCoalescedNotificationRequest:(id)arg0 ;
-(BOOL)isHidingContent;
-(NSUInteger)_indexOfMatchingNotificationRequest:(id)arg0 ;
-(NSUInteger)_notificationCount;
-(NSUInteger)coalesceCount;
-(id)_activeSummaryBuilder;
-(id)_localizedStringWithPlaceholderFormat:(id)arg0 count:(NSUInteger)arg1 ;
-(id)_placeholderSecondaryText;
-(id)communicationAvatar;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)date;
-(id)footerText;
-(id)icons;
-(id)importantText;
-(id)init;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)inlineAction;
-(id)notificationRequest;
-(id)primarySubtitleText;
-(id)primaryText;
-(id)secondaryText;
-(id)summaryText;
-(id)thumbnail;
-(void)_updateSummaryText;
-(void)coalesceNotificationRequest:(id)arg0 ;
-(void)removeCoalescedNotificationRequest:(id)arg0 ;
-(void)updateCoalescedNotificationRequest:(id)arg0 ;


@end


#endif