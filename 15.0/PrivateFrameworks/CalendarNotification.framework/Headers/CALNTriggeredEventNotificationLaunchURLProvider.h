// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONLAUNCHURLPROVIDER_H
#define CALNTRIGGEREDEVENTNOTIFICATIONLAUNCHURLPROVIDER_H


#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationLaunchURLProvider : NSObject



+(id)_launchURLForEventID:(id)arg0 hypothesis:(id)arg1 isTravelLaunchURL:(*BOOL)arg2 ;
+(id)_travelLaunchURLForEventID:(id)arg0 hypothesis:(id)arg1 ;
+(id)launchURLForOptionalEventID:(id)arg0 hypothesis:(id)arg1 isTravelLaunchURL:(*BOOL)arg2 ;
+(id)launchURLForOptionalEventOccurrenceID:(id)arg0 ;


@end


#endif