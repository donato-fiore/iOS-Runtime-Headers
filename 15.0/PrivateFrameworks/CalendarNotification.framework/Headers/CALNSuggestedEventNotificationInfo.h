// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNSUGGESTEDEVENTNOTIFICATIONINFO_H
#define CALNSUGGESTEDEVENTNOTIFICATIONINFO_H

@class NSDate, NSURL, NSString, EKCalendarSuggestionNotification;

#import <Foundation/Foundation.h>


@interface CALNSuggestedEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, nonatomic) EKCalendarSuggestionNotification *suggestionNotification; // ivar: _suggestionNotification


-(id)description;
-(id)initWithSourceClientIdentifier:(id)arg0 launchURL:(id)arg1 expirationDate:(id)arg2 suggestionNotification:(id)arg3 ;


@end


#endif