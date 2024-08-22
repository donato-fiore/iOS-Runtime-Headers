// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMINDERACCESSRESOURCE_H
#define WFREMINDERACCESSRESOURCE_H



#import "WFCalendarAccessResource.h"

@interface WFReminderAccessResource : WFCalendarAccessResource



+(BOOL)isSystemResource;
+(NSUInteger)entityType;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;


@end


#endif