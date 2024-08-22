// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNEWSPERSONALIZATIONTRAININGFEATUREFLAGS_H
#define FCNEWSPERSONALIZATIONTRAININGFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationTrainingFeatureFlags : NSObject

@property (nonatomic) BOOL enableSingleLifetimeSeenEventPerArticle; // ivar: _enableSingleLifetimeSeenEventPerArticle
@property (nonatomic) BOOL enableSyntheticTagFollowEvents; // ivar: _enableSyntheticTagFollowEvents
@property (nonatomic) NSInteger readingHistoryItemCountToProcess; // ivar: _readingHistoryItemCountToProcess


-(id)initWithDictionary:(id)arg0 ;


@end


#endif