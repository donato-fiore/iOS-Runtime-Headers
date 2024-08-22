// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCALENDARMIGRATIONSUBSCRIPTIONINFO_H
#define CALCALENDARMIGRATIONSUBSCRIPTIONINFO_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface CalCalendarMigrationSubscriptionInfo : NSObject

@property (retain, nonatomic) NSString *calDAVPath; // ivar: _calDAVPath
@property (readonly, nonatomic) NSURL *calendarDirectory; // ivar: _calendarDirectory
@property (nonatomic) BOOL disableAlarms; // ivar: _disableAlarms
@property (nonatomic) BOOL filterAlarms; // ivar: _filterAlarms
@property (nonatomic) BOOL filterAttachments; // ivar: _filterAttachments
@property (nonatomic) BOOL insecureConnectionApproved; // ivar: _insecureConnectionApproved
@property (nonatomic) BOOL isManagedByServer; // ivar: _isManagedByServer
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *principalUid; // ivar: _principalUid
@property (nonatomic) CGFloat refreshInterval; // ivar: _refreshInterval
@property (readonly, nonatomic) NSString *subscriptionURL; // ivar: _subscriptionURL
@property (readonly, nonatomic) NSString *subscriptionURLWithUsername; // ivar: _subscriptionURLWithUsername
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)_dictionaryForAccountProperties;
-(id)dictionaryForAccountProperties;
-(id)dictionaryForParentAccountProperties;
-(id)initWithCalendarDirectory:(id)arg0 subscriptionURL:(id)arg1 username:(id)arg2 principalUid:(id)arg3 ;


@end


#endif