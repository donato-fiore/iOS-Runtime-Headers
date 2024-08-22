// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSCOREDUETEVENTMATCHER_H
#define CPANALYTICSCOREDUETEVENTMATCHER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CPAnalyticsEventMatcher.h"

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher *_eventMatcher;
}


@property (readonly, nonatomic) NSString *datasetName; // ivar: _datasetName
@property (readonly, nonatomic) NSString *identifierPropertyName; // ivar: _identifierPropertyName
@property (readonly, nonatomic) BOOL matchNextEvent; // ivar: _matchNextEvent
@property (readonly, nonatomic) NSString *subsetPropertyName; // ivar: _subsetPropertyName
@property (readonly, nonatomic) NSObject *subsetPropertyValue; // ivar: _subsetPropertyValue


-(BOOL)doesMatch:(id)arg0 ;
-(id)init;
-(id)initWithConfig:(id)arg0 ;


@end


#endif