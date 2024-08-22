// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCURATIONOPTIONS_H
#define PGCURATIONOPTIONS_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGCurationOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger cardinalMode; // ivar: _cardinalMode
@property (nonatomic) CGFloat defaultDurationOfLivePhoto; // ivar: _defaultDurationOfLivePhoto
@property (nonatomic) CGFloat defaultDurationOfStillPhoto; // ivar: _defaultDurationOfStillPhoto
@property (nonatomic) CGFloat defaultDurationOfVideo; // ivar: _defaultDurationOfVideo
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) BOOL failIfMinimumDurationNotReached; // ivar: _failIfMinimumDurationNotReached
@property (nonatomic) BOOL focusOnInterestingItems; // ivar: _focusOnInterestingItems
@property (nonatomic) BOOL focusOnPeople; // ivar: _focusOnPeople
@property (nonatomic, getter=identicalDedupingIsEnabled) BOOL identicalDedupingEnabled; // ivar: _identicalDedupingEnabled
@property (nonatomic) BOOL includesAllFaces; // ivar: _includesAllFaces
@property (nonatomic, getter=lastPassMovieAdditionIsEnabled) BOOL lastPassMovieAdditionEnabled; // ivar: _lastPassMovieAdditionEnabled
@property (nonatomic) CGFloat minimumDuration; // ivar: _minimumDuration
@property (nonatomic) NSUInteger minimumNumberOfItems; // ivar: _minimumNumberOfItems
@property (nonatomic, getter=movieDedupingIsEnabled) BOOL movieDedupingEnabled; // ivar: _movieDedupingEnabled
@property (copy, nonatomic) NSSet *personLocalIdentifiersToFocus; // ivar: _personLocalIdentifiersToFocus
@property (nonatomic) NSUInteger precision; // ivar: _precision
@property (nonatomic, getter=semanticalDedupingIsEnabled) BOOL semanticalDedupingEnabled; // ivar: _semanticalDedupingEnabled
@property (nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking; // ivar: _semanticalDedupingUsesAdaptiveSimilarStacking
@property (nonatomic) BOOL shouldSkipClustering; // ivar: _shouldSkipClustering
@property (nonatomic) CGFloat targetDuration; // ivar: _targetDuration
@property (nonatomic) BOOL useDurationBasedCuration; // ivar: _useDurationBasedCuration
@property (copy, nonatomic) NSSet *uuidsOfEligibleAssets; // ivar: _uuidsOfEligibleAssets
@property (copy, nonatomic) NSSet *uuidsOfRequiredAssets; // ivar: _uuidsOfRequiredAssets


+(id)defaultOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithDuration:(NSUInteger)arg0 precision:(NSUInteger)arg1 ;


@end


#endif