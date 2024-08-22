// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVREFRESHCONTEXT_H
#define CALDAVREFRESHCONTEXT_H

@class NSError;

#import <Foundation/Foundation.h>

#import "CalDAVDBChangeTrackingHelper.h"

@interface CalDAVRefreshContext : NSObject

@property (nonatomic) BOOL calendarFailedToSync; // ivar: _calendarFailedToSync
@property (retain, nonatomic) CalDAVDBChangeTrackingHelper *changeTracker; // ivar: _changeTracker
@property (nonatomic) BOOL didDownloadEvents; // ivar: _didDownloadEvents
@property (nonatomic) BOOL didSaveDatabase; // ivar: _didSaveDatabase
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL isCalendarsOnly; // ivar: _isCalendarsOnly
@property (nonatomic) BOOL isDisabledAccount; // ivar: _isDisabledAccount
@property (nonatomic) BOOL isForced; // ivar: _isForced
@property (nonatomic) NSUInteger localItems; // ivar: _localItems
@property (nonatomic) NSUInteger numDownloadedElements; // ivar: _numDownloadedElements
@property (nonatomic) NSUInteger numUploadedElements; // ivar: _numUploadedElements
@property (nonatomic) int retryTime; // ivar: _retryTime
@property (nonatomic) BOOL shouldRetry; // ivar: _shouldRetry
@property (nonatomic) BOOL shouldSave; // ivar: _shouldSave
@property (nonatomic) BOOL shouldSaveAccounts; // ivar: _shouldSaveAccounts
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL wasDueToPush; // ivar: _wasDueToPush
@property (nonatomic) BOOL wasUserRequested; // ivar: _wasUserRequested


+(id)defaultContext;


@end


#endif