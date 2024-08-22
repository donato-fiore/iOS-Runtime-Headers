// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGWALLPAPERSUGGESTIONACCUMULATOR_H
#define PGWALLPAPERSUGGESTIONACCUMULATOR_H

@class NSMutableArray, NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGWallpaperSuggestionAccumulator : NSObject {
    NSUInteger _targetNumberOfSuggestions;
    NSUInteger _targetMinimumNumberOfGatedSuggestions;
    NSUInteger _maximumNumberOfSuggestionsToTryForGating;
    NSUInteger _numberOfSuggestionsReceived;
    NSMutableArray *_suggestions;
    NSMutableArray *_gatingOverflow;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (readonly) BOOL accumulationIsComplete;
@property (readonly) NSUInteger numberOfGatedSuggestions; // ivar: _numberOfGatedSuggestions
@property (readonly) NSArray *suggestions;


-(id)initWithTargetNumberOfSuggestions:(NSUInteger)arg0 targetMinimumNumberOfGatedSuggestions:(NSUInteger)arg1 maximumNumberOfSuggestionsToTryForGating:(NSUInteger)arg2 loggingConnection:(id)arg3 ;
-(void)addSuggestion:(id)arg0 passingGating:(BOOL)arg1 ;


@end


#endif