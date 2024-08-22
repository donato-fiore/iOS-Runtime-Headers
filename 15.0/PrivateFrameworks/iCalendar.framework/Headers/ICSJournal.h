// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSJOURNAL_H
#define ICSJOURNAL_H

@class NSArray, NSString, NSURL;


#import "ICSComponent.h"
#import "ICSDate.h"
#import "ICSUserAddress.h"

@interface ICSJournal : ICSComponent

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (retain) ICSDate *last_modified;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property NSUInteger sequence;
@property int status;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain) NSURL *url;


+(id)name;
-(BOOL)validate:(*id)arg0 ;


@end


#endif