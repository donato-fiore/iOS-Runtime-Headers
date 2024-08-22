// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSUMMARYSHARINGANALYTICS_H
#define HDSUMMARYSHARINGANALYTICS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HDSummarySharingAnalytics : NSObject

@property (copy, nonatomic) NSDate *askSomeoneToShareLastSelectedDate; // ivar: _askSomeoneToShareLastSelectedDate
@property (nonatomic) CGFloat averageNumberAuthorizationsSharedOutPerPerson; // ivar: _averageNumberAuthorizationsSharedOutPerPerson
@property (nonatomic) NSInteger maxAuthorizationsSharedOutPerPerson; // ivar: _maxAuthorizationsSharedOutPerPerson
@property (nonatomic) NSInteger minAuthorizationsSharedOutPerPerson; // ivar: _minAuthorizationsSharedOutPerPerson
@property (copy, nonatomic) NSDate *mostRecentIncomingTransactionDate; // ivar: _mostRecentIncomingTransactionDate
@property (nonatomic) NSInteger numberAuthorizationsSharingOut; // ivar: _numberAuthorizationsSharingOut
@property (nonatomic) NSInteger numberOfAlertNotificationsEnabled; // ivar: _numberOfAlertNotificationsEnabled
@property (nonatomic) NSInteger numberOfTrendNotificationsEnabled; // ivar: _numberOfTrendNotificationsEnabled
@property (nonatomic) NSInteger numberOfUpdateNotificationsEnabled; // ivar: _numberOfUpdateNotificationsEnabled
@property (nonatomic) NSInteger numberPeopleSharingIn; // ivar: _numberPeopleSharingIn
@property (nonatomic) NSInteger numberPeopleSharingOut; // ivar: _numberPeopleSharingOut
@property (copy, nonatomic) NSDate *sharingAuthorizationLastViewedDate; // ivar: _sharingAuthorizationLastViewedDate
@property (copy, nonatomic) NSDate *sharingContactOptionLastSelectedDate; // ivar: _sharingContactOptionLastSelectedDate




@end


#endif