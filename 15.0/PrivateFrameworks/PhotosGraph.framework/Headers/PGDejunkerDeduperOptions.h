// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGDEJUNKERDEDUPEROPTIONS_H
#define PGDEJUNKERDEDUPEROPTIONS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PGDejunkerDeduperOptions : NSObject

@property (nonatomic) BOOL allowAdaptiveForSemanticalDeduping; // ivar: _allowAdaptiveForSemanticalDeduping
@property (nonatomic) BOOL doDejunk; // ivar: _doDejunk
@property (nonatomic) BOOL doFinalPass; // ivar: _doFinalPass
@property (nonatomic) BOOL doIdenticalDeduping; // ivar: _doIdenticalDeduping
@property (nonatomic) BOOL doNotDedupeInterestingPortraitsAndLivePictures; // ivar: _doNotDedupeInterestingPortraitsAndLivePictures
@property (nonatomic) BOOL doNotDedupeVideos; // ivar: _doNotDedupeVideos
@property (nonatomic) BOOL doSemanticalDeduping; // ivar: _doSemanticalDeduping
@property (nonatomic) BOOL dontSemanticallyDedupePeople; // ivar: _doNotSemanticallyDedupePeople
@property (nonatomic) BOOL dontSemanticallyDedupePersons; // ivar: _doNotSemanticallyDedupePersons
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) CGFloat finalPassDedupingThreshold; // ivar: _finalPassDedupingThreshold
@property (nonatomic) CGFloat finalPassMaximumTimeGroupExtension; // ivar: _finalPassMaximumTimeGroupExtension
@property (nonatomic) CGFloat finalPassTimeInterval; // ivar: _finalPassTimeInterval
@property (nonatomic) CGFloat identicalDedupingFaceprintDistance; // ivar: _identicalDedupingFaceprintDistance
@property (nonatomic) CGFloat identicalDedupingMaximumTimeGroupExtension; // ivar: _identicalDedupingMaximumTimeGroupExtension
@property (nonatomic) CGFloat identicalDedupingThreshold; // ivar: _identicalDedupingThreshold
@property (nonatomic) CGFloat identicalDedupingThresholdForBestItems; // ivar: _identicalDedupingThresholdForBestItems
@property (nonatomic) CGFloat identicalDedupingThresholdForPeople; // ivar: _identicalDedupingThresholdForPeople
@property (nonatomic) CGFloat identicalDedupingTimeInterval; // ivar: _identicalDedupingTimeInterval
@property (nonatomic) CGFloat identicalDedupingTimeIntervalForPeople; // ivar: _identicalDedupingTimeIntervalForPeople
@property (retain, nonatomic) NSSet *identifiersOfRequiredItems; // ivar: _identifiersOfRequiredItems
@property (nonatomic) NSUInteger maximumNumberOfItemsPerIdenticalCluster; // ivar: _maximumNumberOfItemsPerIdenticalCluster
@property (nonatomic) NSUInteger maximumNumberOfItemsPerSemanticalCluster; // ivar: _maximumNumberOfItemsPerSemanticalCluster
@property (nonatomic) BOOL onlyDedupeContiguousItems; // ivar: _onlyDedupeContiguousItems
@property (nonatomic) BOOL returnDedupedJunkIfOnlyJunk; // ivar: _returnDedupedJunkIfOnlyJunk
@property (nonatomic) CGFloat semanticalDedupingMaximumTimeGroupExtension; // ivar: _semanticalDedupingMaximumTimeGroupExtension
@property (nonatomic) CGFloat semanticalDedupingThreshold; // ivar: _semanticalDedupingThreshold
@property (nonatomic) CGFloat semanticalDedupingThresholdForPeople; // ivar: _semanticalDedupingThresholdForPeople
@property (nonatomic) CGFloat semanticalDedupingThresholdForPersons; // ivar: _semanticalDedupingThresholdForPersons
@property (nonatomic) CGFloat semanticalDedupingTimeInterval; // ivar: _semanticalDedupingTimeInterval
@property (nonatomic) CGFloat semanticalDedupingTimeIntervalForPeople; // ivar: _semanticalDedupingTimeIntervalForPeople
@property (nonatomic) CGFloat semanticalDedupingTimeIntervalForPersons; // ivar: _semanticalDedupingTimeIntervalForPersons
@property (nonatomic) BOOL useAllPersonsForDeduping; // ivar: _useAllPersonsForDeduping
@property (nonatomic) BOOL useFaceQualityForElection; // ivar: _useFaceQualityForElection
@property (nonatomic) BOOL useFaceprintsForIdenticalDeduping; // ivar: _useFaceprintsForIdenticalDeduping
@property (nonatomic) BOOL useOnlyScenesForDeduping; // ivar: _useOnlyScenesForDeduping


-(id)description;
-(id)dictionaryRepresentationRestrictingToGlobalOptions:(BOOL)arg0 ;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif