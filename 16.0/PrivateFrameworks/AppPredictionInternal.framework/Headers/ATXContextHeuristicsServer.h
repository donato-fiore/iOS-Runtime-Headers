// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTHEURISTICSSERVER_H
#define ATXCONTEXTHEURISTICSSERVER_H

@class ATXContextHeuristics;
@protocol ATXContextHeuristicsDelegate;

#import <Foundation/Foundation.h>


@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate>

 {
    ATXContextHeuristics *_heuristics;
}




+(id)sharedInstance;
-(id)init;
-(id)initWithHeuristics:(id)arg0 ;
-(void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)arg0 ;
-(void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)arg0 ;
-(void)contextHeuristics:(id)arg0 didUpdateSpotlightRecents:(id)arg1 ;
-(void)contextHeuristics:(id)arg0 didUpdateSuggestions:(id)arg1 ;


@end


#endif