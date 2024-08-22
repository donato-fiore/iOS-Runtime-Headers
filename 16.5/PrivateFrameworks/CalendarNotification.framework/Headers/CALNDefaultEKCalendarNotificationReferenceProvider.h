// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNDEFAULTEKCALENDARNOTIFICATIONREFERENCEPROVIDER_H
#define CALNDEFAULTEKCALENDARNOTIFICATIONREFERENCEPROVIDER_H

@class NSString;
@protocol CALNEKCalendarNotificationReferenceProvider;

#import <Foundation/Foundation.h>


@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject <CALNEKCalendarNotificationReferenceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)notificationReferenceForObjectID:(id)arg0 withType:(int)arg1 date:(id)arg2 inEventStore:(id)arg3 ;
-(id)notificationReferenceForObjectID:(id)arg0 withType:(int)arg1 inEventStore:(id)arg2 ;


@end


#endif