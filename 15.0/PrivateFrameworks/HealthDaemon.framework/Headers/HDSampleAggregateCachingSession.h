// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSAMPLEAGGREGATECACHINGSESSION_H
#define HDSAMPLEAGGREGATECACHINGSESSION_H

@class NSDateInterval, NSString, NSDate, NSDateComponents, NSError, HDAssertion, NSArray;

#import <Foundation/Foundation.h>

#import "HDSampleAggregateCacheStore.h"
#import "HDProfile.h"
#import "HDSourceEntity.h"

@interface HDSampleAggregateCachingSession : NSObject {
    HDSampleAggregateCacheStore *_cacheStore;
    HDProfile *_profile;
    Class _cachedClass;
    NSDateInterval *_queryInterval;
    NSString *_cachingIdentifier;
    HDSourceEntity *_sourceEntity;
    NSInteger _generationNumber;
    NSDate *_anchorDate;
    NSDate *_persistentAnchorDate;
    NSDateComponents *_intervalComponents;
    NSInteger _maxAnchor;
    NSError *_fatalError;
    NSInteger _state;
    unordered_set<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> _staleIndexes;
    BOOL _anchorSetOnInsert;
    BOOL _sampleAggregateCachingSessionQueue_insertSuccess;
}


@property (retain, nonatomic) HDAssertion *accessibilityAssertion; // ivar: _accessibilityAssertion
@property (copy, nonatomic) NSArray *invalidationQueryDescriptors; // ivar: _invalidationQueryDescriptors


-(BOOL)activateWithError:(*id)arg0 cacheHandler:(id)arg1 ;
-(NSInteger)cachesExistWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 cachingIdentifier:(id)arg1 sourceEntity:(id)arg2 queryDescriptor:(id)arg3 cachedClass:(Class)arg4 queryInterval:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 timeIntervalToBucketIndex:(id)arg8 ;
-(id)persistentAnchorDateWithError:(*id)arg0 ;
-(void)finishWithCompletion:(id)arg0 ;
-(void)insertCaches:(id)arg0 anchor:(id)arg1 completion:(id)arg2 ;


@end


#endif