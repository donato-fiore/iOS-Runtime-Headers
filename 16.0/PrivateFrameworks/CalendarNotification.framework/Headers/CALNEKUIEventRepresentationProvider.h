// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNEKUIEVENTREPRESENTATIONPROVIDER_H
#define CALNEKUIEVENTREPRESENTATIONPROVIDER_H

@class NSString;
@protocol CALNDataSourceEventRepresentationProvider, CALNSourceEventRepresentationProvider;

#import <Foundation/Foundation.h>


@interface CALNEKUIEventRepresentationProvider : NSObject <CALNDataSourceEventRepresentationProvider, CALNSourceEventRepresentationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)eventRepresentationDictionaryForInvitationNotification:(id)arg0 event:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 ;
-(id)eventRepresentationDictionaryForResourceChangeNotification:(id)arg0 message:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 ;
-(id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)arg0 message:(id)arg1 ;
-(id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)arg0 message:(id)arg1 ;
-(id)eventRepresentationDictionaryForUpcomingEvent:(id)arg0 date:(id)arg1 displayTimeZone:(id)arg2 ;
-(id)updateEventRepresentationDictionary:(id)arg0 withHypothesisMessage:(id)arg1 ;


@end


#endif