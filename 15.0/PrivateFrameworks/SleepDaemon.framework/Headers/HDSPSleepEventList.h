// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPEVENTLIST_H
#define HDSPSLEEPEVENTLIST_H

@class NSString, NSMutableDictionary, NSArray;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface HDSPSleepEventList : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *eventsByProvider; // ivar: _eventsByProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sortedEvents; // ivar: _sortedEvents
@property (readonly) Class superclass;


-(id)allEvents;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)nextEvent;
-(id)overdueEventsForDate:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_sortEvents;
-(void)addEvents:(id)arg0 provider:(id)arg1 ;
-(void)removeAllEvents;
-(void)removeEvents:(id)arg0 ;
-(void)removeEventsForProvider:(id)arg0 ;


@end


#endif