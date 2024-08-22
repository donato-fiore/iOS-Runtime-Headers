// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICALENDARSTORE_H
#define SEARCHUICALENDARSTORE_H


#import <Foundation/Foundation.h>


@interface SearchUICalendarStore : NSObject



+(id)calendarColorWithIdentifier:(id)arg0 ;
+(id)calendarItemFromEventIdentifierComponents:(id)arg0 ;
+(id)eventControllerWithIdentifier:(id)arg0 ;
+(id)sharedCalendarStore;
+(void)fetchCalendarColorWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif