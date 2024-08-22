// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSREALEVENTKITCONNECTOR_H
#define MAPSSUGGESTIONSREALEVENTKITCONNECTOR_H

@class NSString;
@protocol MapsSuggestionsEventKitConnector, OS_dispatch_queue, MapsSuggestionsEventKitConnectorDelegate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealEventKitConnector : NSObject <MapsSuggestionsEventKitConnector>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MapsSuggestionsEventKitConnectorDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)removeEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(id)calendarsForEntityType:(NSUInteger)arg0 ;
-(id)eventWithIdentifier:(id)arg0 ;
-(id)eventsMatchingPredicate:(id)arg0 ;
-(id)init;
-(id)predicateForEventsWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 ;
-(id)visibleCalendars;
-(void)_eventStoreDidChange:(id)arg0 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;


@end


#endif