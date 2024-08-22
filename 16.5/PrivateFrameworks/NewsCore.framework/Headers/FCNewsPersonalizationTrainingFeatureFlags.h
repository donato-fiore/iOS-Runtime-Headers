// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPERSONALIZATIONTRAININGFEATUREFLAGS_H
#define FCNEWSPERSONALIZATIONTRAININGFEATUREFLAGS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationTrainingFeatureFlags : NSObject

@property (nonatomic) BOOL enableSingleLifetimeSeenEventPerArticle; // ivar: _enableSingleLifetimeSeenEventPerArticle
@property (nonatomic) BOOL enableSyntheticTagFollowEvents; // ivar: _enableSyntheticTagFollowEvents
@property (retain, nonatomic) NSNumber *eventLimit; // ivar: _eventLimit
@property (nonatomic) NSInteger readingHistoryItemCountToProcess; // ivar: _readingHistoryItemCountToProcess
@property (retain, nonatomic) NSNumber *uniqueAggregateLimit; // ivar: _uniqueAggregateLimit


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif