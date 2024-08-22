// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCNOTIFICATIONSETTINGSPAYLOAD_H
#define MCNOTIFICATIONSETTINGSPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCNotificationSettingsPayload : MCPayload

@property (retain, nonatomic) NSArray *notificationSettings; // ivar: _notificationSettings


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)validatedNotificationSettings:(id)arg0 outError:(*id)arg1 ;


@end


#endif