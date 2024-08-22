// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYPHOTOKITPERSISTER_H
#define PGMEMORYPHOTOKITPERSISTER_H

@class PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGNeighborScoreComputer.h"

@interface PGMemoryPhotoKitPersister : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PGNeighborScoreComputer *_neighborScoreComputer;
    BOOL _isAppleMusicSubscriber;
}




+(void)setStoryColorGradeKindFromPhotosGraphProperties:(id)arg0 onMemoryChangeRequest:(id)arg1 ;
-(BOOL)_enforceUniqueCreationDatesWithPendingState:(unsigned short)arg0 ;
-(BOOL)_shouldPrefetchAudioForMemoriesInPhotoLibrary:(id)arg0 withConfiguration:(id)arg1 ;
-(BOOL)_shouldPrefetchMetadataForMemoriesInPhotoLibrary:(id)arg0 withConfiguration:(id)arg1 ;
-(BOOL)persistGraphEphemeralMemoriesFromEnrichedMemories:(id)arg0 graph:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateExistingMemories:(id)arg0 fetchedGraphEphemeralMemoryByUniqueIdentifier:(id)arg1 progressReporter:(id)arg2 ;
-(NSUInteger)_memoryIndexOffsetOnDate:(id)arg0 includePendingMemories:(BOOL)arg1 ;
-(id)_encodedFeaturesFromFeatureNodes:(id)arg0 ;
-(id)_memoryCreationRequestForEnrichedMemory:(id)arg0 pendingState:(unsigned short)arg1 creationDate:(id)arg2 photosGraphDataDictionary:(id)arg3 ;
-(id)_photosGraphDataDictionaryByEnrichedMemoryIdentifierForEnrichedMemories:(id)arg0 ;
-(id)_photosGraphDataDictionaryForEnrichedMemory:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
-(id)memoryLocalIdentifiersFromPersistingEnrichedMemories:(id)arg0 withPendingState:(unsigned short)arg1 graph:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
-(void)cacheMusicAudioAndArtworkForEnrichedMemories:(id)arg0 inflationContext:(id)arg1 photoLibrary:(id)arg2 ;


@end


#endif