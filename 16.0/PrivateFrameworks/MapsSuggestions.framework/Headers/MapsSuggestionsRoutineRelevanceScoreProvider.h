// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSROUTINERELEVANCESCOREPROVIDER_H
#define MAPSSUGGESTIONSROUTINERELEVANCESCOREPROVIDER_H

@class NSDate, NSArray, NSString;
@protocol MapsSuggestionsRelevanceScoreProvider;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsRoutine.h"

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider>

 {
    NSDate *_fetchEntriesFromDate;
    Queue _queue;
    MapsSuggestionsRoutine *_routine;
    NSArray *_routineLocations;
    NSArray *_routineVisits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(char)relevanceScoreForNames:(id)arg0 addresses:(id)arg1 mapItems:(id)arg2 completion:(id)arg3 ;
-(id)initWithRoutine:(id)arg0 ;
-(void)preLoad;


@end


#endif