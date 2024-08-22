// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONSOURCECLIENTIDENTIFIERUTILITIES_H
#define CALNTRIGGEREDEVENTNOTIFICATIONSOURCECLIENTIDENTIFIERUTILITIES_H


#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationSourceClientIdentifierUtilities : NSObject



+(id)_characterSetForEncodingIdentifierComponents;
+(id)alarmIDForSourceClientIdentifier:(id)arg0 ;
+(id)eventIDForSourceClientIdentifier:(id)arg0 ;
+(id)sourceClientIdentifierForEventID:(id)arg0 alarmID:(id)arg1 ;
+(void)eventID:(*id)arg0 andAlarmID:(*id)arg1 fromSourceClientIdentifier:(id)arg2 ;


@end


#endif