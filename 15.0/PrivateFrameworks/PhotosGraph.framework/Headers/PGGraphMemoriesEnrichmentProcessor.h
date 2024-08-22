// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHMEMORIESENRICHMENTPROCESSOR_H
#define PGGRAPHMEMORIESENRICHMENTPROCESSOR_H


#import <Foundation/Foundation.h>


@interface PGGraphMemoriesEnrichmentProcessor : NSObject {
    NSUInteger _numberOfMemoriesToEnrich;
}




+(id)enrichableMemoryNodesInGraph:(id)arg0 ;
+(id)fetchGraphEphemeralMemoryByUniqueIdentifierInPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
+(void)deleteNoLongerExistingMemoryNodes:(id)arg0 fromFetchedGraphEphemeralMemoryByUniqueIdentifier:(id)arg1 inPhotoLibrary:(id)arg2 loggingConnection:(id)arg3 progressReporter:(id)arg4 ;
+(void)insertOrUpdateEphemeralMemoriesForEnrichedMemories:(id)arg0 fetchedGraphEphemeralMemoryByUniqueIdentifier:(id)arg1 memoryPersister:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4 progressReporter:(id)arg5 ;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_targetNumberOfMemoriesToEnrichWithPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
-(id)init;
-(id)initWithNumberOfMemoriesToEnrich:(NSUInteger)arg0 ;
-(id)sortedMemoryNodesToEnrichFromCollection:(id)arg0 fetchedGraphEphemeralMemoryByUniqueIdentifier:(id)arg1 loggingConnection:(id)arg2 ;


@end


#endif