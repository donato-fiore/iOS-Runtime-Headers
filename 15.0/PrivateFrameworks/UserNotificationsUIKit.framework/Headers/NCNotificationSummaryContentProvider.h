// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONSUMMARYCONTENTPROVIDER_H
#define NCNOTIFICATIONSUMMARYCONTENTPROVIDER_H

@class NSString, NSArray, NSDate;
@protocol NCNotificationSummaryContentProviding;

#import <Foundation/Foundation.h>


@interface NCNotificationSummaryContentProvider : NSObject <NCNotificationSummaryContentProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIconViewLeading) BOOL iconViewLeading; // ivar: _iconViewLeading
@property (retain, nonatomic) NSArray *notificationRequests; // ivar: _notificationRequests
@property (readonly, copy, nonatomic) NSString *summary; // ivar: _summary
@property (copy, nonatomic) NSDate *summaryDate; // ivar: _summaryDate
@property (copy, nonatomic) NSString *summaryIconSymbolName; // ivar: _summaryIconSymbolName
@property (readonly, nonatomic) NSArray *summaryIconViews; // ivar: _summaryIconViews
@property (copy, nonatomic) NSString *summaryTitle; // ivar: _summaryTitle
@property (copy, nonatomic) NSString *summaryTitleFontName; // ivar: _summaryTitleFontName
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *titlesForSectionListsInSummary; // ivar: _titlesForSectionListsInSummary


+(id)summaryContentProviderOfType:(NSUInteger)arg0 notificationRequests:(id)arg1 ;
-(id)_communicationAvatarForNotificationRequest:(id)arg0 ;
-(id)_iconViewForNotificationRequest:(id)arg0 ;
-(id)_summaryIconViewForNotificationRequest:(id)arg0 ;
-(id)_summaryStringForCommunicationNotificationRequest:(id)arg0 ;
-(id)_summaryStringForNotificationRequest:(id)arg0 ;


@end


#endif