// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEMORYUPNEXTHELPER_H
#define PHMEMORYUPNEXTHELPER_H


#import <Foundation/Foundation.h>


@interface PHMemoryUpNextHelper : NSObject



+(BOOL)_hasInvalidMemoryTriggerForMemory:(id)arg0 ;
+(BOOL)_isAcceptableUserFeedbackForMemory:(id)arg0 keyAsset:(id)arg1 userFeedbackCalculator:(id)arg2 ;
+(BOOL)_isMomentFetchResult:(id)arg0 overlappingWithFetchResults:(id)arg1 ;
+(BOOL)isMomentFetchResult:(id)arg0 overlappingWithFetchResult:(id)arg1 ;
+(id)_memoryTriggerTypesToAvoid;
+(id)fetchFallbackMemoriesForMemory:(id)arg0 targetCount:(NSUInteger)arg1 memoryLocalIdentifiersToAvoid:(id)arg2 error:(*id)arg3 ;
+(id)fetchFallbackMemoriesForMemory:(id)arg0 targetCount:(NSUInteger)arg1 memoryLocalIdentifiersToAvoid:(id)arg2 sharingFilter:(unsigned short)arg3 error:(*id)arg4 ;
+(id)fetchFallbackMemoryCandidatesInPhotoLibrary:(id)arg0 memoryLocalIdentifiersToAvoid:(id)arg1 sharingFilter:(unsigned short)arg2 ;


@end


#endif