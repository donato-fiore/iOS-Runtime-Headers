// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSAVAILABLE_H
#define ICSAVAILABLE_H

@class NSArray, NSString;


#import "ICSComponent.h"
#import "ICSDate.h"
#import "ICSDuration.h"

@interface ICSAvailable : ICSComponent

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *rrule;
@property (retain) NSString *uid;


+(id)name;


@end


#endif