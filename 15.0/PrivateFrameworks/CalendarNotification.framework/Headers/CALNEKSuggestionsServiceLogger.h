// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNEKSUGGESTIONSSERVICELOGGER_H
#define CALNEKSUGGESTIONSSERVICELOGGER_H

@class NSString;
@protocol CALNSuggestionsServiceLogger;

#import <Foundation/Foundation.h>


@interface CALNEKSuggestionsServiceLogger : NSObject <CALNSuggestionsServiceLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)arg0 ;


@end


#endif