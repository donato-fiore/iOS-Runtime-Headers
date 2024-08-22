// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSUSER_H
#define MAPSSUGGESTIONSUSER_H

@class NSString;
@protocol MapsSuggestionsObject, MapsSuggestionsMeCardReader;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsRoutine.h"

@interface MapsSuggestionsUser : NSObject <MapsSuggestionsObject>

 {
    Queue _queue;
    id<MapsSuggestionsMeCardReader> *_meCardReader;
    MapsSuggestionsRoutine *_routine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(char)hasVisitedMapItem:(id)arg0 handler:(id)arg1 ;
-(char)meCardForProminentPlacesAroundCoordinate:(struct CLLocationCoordinate2D )arg0 maxDistance:(CGFloat)arg1 maxAge:(CGFloat)arg2 minVisits:(NSInteger)arg3 handler:(id)arg4 ;
-(char)mostRecentVisitWithinDistance:(CGFloat)arg0 ofMapItem:(id)arg1 handler:(id)arg2 ;
-(id)initWithMeCardReader:(id)arg0 routine:(id)arg1 ;


@end


#endif