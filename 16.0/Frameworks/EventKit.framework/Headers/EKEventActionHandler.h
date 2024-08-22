// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTACTIONHANDLER_H
#define EKEVENTACTIONHANDLER_H


#import <Foundation/Foundation.h>


@interface EKEventActionHandler : NSObject



+(id)_displayStringForDate:(id)arg0 ;
+(id)_logHandle;
+(id)sharedInstance;
-(id)_intentForAction:(id)arg0 onEvent:(id)arg1 ;
-(id)createEventIntentForEvent:(id)arg0 ;
-(id)createEventIntentForEvent:(id)arg0 withSuggestionsInfoUniqueKey:(id)arg1 ;
-(void)donateInteractionForAction:(id)arg0 onEvent:(id)arg1 ;
-(void)donatePredictiveAction:(id)arg0 forEvent:(id)arg1 ;
-(void)handleEventCreation:(id)arg0 ;
-(void)handleEventDeletion:(id)arg0 ;
-(void)handleEventUpdate:(id)arg0 ;
-(void)prepareForEventUpdate:(id)arg0 ;
-(void)removeInteractionsForCalendar:(id)arg0 ;


@end


#endif