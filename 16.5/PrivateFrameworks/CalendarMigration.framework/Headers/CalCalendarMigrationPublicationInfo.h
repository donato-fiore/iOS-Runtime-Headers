// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCALENDARMIGRATIONPUBLICATIONINFO_H
#define CALCALENDARMIGRATIONPUBLICATIONINFO_H

@class NSString, NSURL, NSDate;

#import <Foundation/Foundation.h>


@interface CalCalendarMigrationPublicationInfo : NSObject

@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL automaticallyPublishChanges; // ivar: _automaticallyPublishChanges
@property (readonly, nonatomic) NSURL *calendarDirectory; // ivar: _calendarDirectory
@property (retain, nonatomic) NSString *calendarUUID; // ivar: _calendarUUID
@property (nonatomic) BOOL filterAlarms; // ivar: _filterAlarms
@property (nonatomic) BOOL filterAttachments; // ivar: _filterAttachments
@property (nonatomic) BOOL filterTitleAndNotes; // ivar: _filterTitleAndNotes
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSURL *publishedURL; // ivar: _publishedURL
@property (retain, nonatomic) NSDate *refreshDate; // ivar: _refreshDate
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)dictionaryForAccountProperties;
-(id)initWithPublishedURL:(id)arg0 calendarDirectory:(id)arg1 calendarUUID:(id)arg2 ;


@end


#endif