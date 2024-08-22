// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMEPENDINGTOPICSCOMBINER_H
#define HMEPENDINGTOPICSCOMBINER_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface HMEPendingTopicsCombiner : NSObject

@property (retain) NSMutableSet *addTopicFilters; // ivar: _addTopicFilters
@property (retain) NSMutableSet *removeTopicFilters; // ivar: _removeTopicFilters
@property (readonly) NSArray *topicFiltersToAdd;
@property (readonly) NSArray *topicFiltersToRemove;


-(id)init;
-(void)combineOntoPreviousAdditions:(id)arg0 removals:(id)arg1 ;
-(void)combineWithAdditions:(id)arg0 removals:(id)arg1 ;
-(void)reset;


@end


#endif