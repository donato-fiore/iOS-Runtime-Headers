// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKAUTOCOMPLETESEARCH_H
#define EKAUTOCOMPLETESEARCH_H


#import <Foundation/Foundation.h>


@interface EKAutocompleteSearch : NSObject

@property NSUInteger maximumResultCount; // ivar: _maximumResultCount


+(id)searchWithEventStore:(id)arg0 searchString:(id)arg1 maximumResultCount:(NSUInteger)arg2 ignoreScheduledEvents:(BOOL)arg3 initialEvent:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif