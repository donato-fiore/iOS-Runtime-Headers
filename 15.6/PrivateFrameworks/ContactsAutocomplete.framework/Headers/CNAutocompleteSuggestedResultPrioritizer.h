// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETESUGGESTEDRESULTPRIORITIZER_H
#define CNAUTOCOMPLETESUGGESTEDRESULTPRIORITIZER_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteSuggestedResultPrioritizer : NSObject



+(id)bestAvailablePrioritizer;
+(id)passthroughPrioritizer;
+(id)peopleSuggesterPrioritizer;


@end


#endif