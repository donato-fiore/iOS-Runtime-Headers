// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSROUTINESHORTCUTSUGGESTOR_H
#define MAPSSUGGESTIONSROUTINESHORTCUTSUGGESTOR_H

@class NSString;
@protocol MapsSuggestionsShortcutSuggestor;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsRoutine.h"

@interface MapsSuggestionsRoutineShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor>

 {
    MapsSuggestionsRoutine *_routine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(char)suggestShortcutsOfType:(NSInteger)arg0 handler:(id)arg1 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithRoutine:(id)arg0 ;


@end


#endif