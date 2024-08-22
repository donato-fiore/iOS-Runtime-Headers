// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFACEPROCESSINGSERVICEWORKER_H
#define VCPFACEPROCESSINGSERVICEWORKER_H

@class PHPhotoLibrary, NSURL;

#import <Foundation/Foundation.h>

#import "VCPPhotosFaceProcessingContext.h"
#import "VCPClusterer.h"
#import "VCPPhotosPersistenceDelegate.h"

@interface VCPFaceProcessingServiceWorker : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosFaceProcessingContext *_context;
    VCPClusterer *_clusterer;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSURL *_suggestionLoggingDirectory;
    BOOL _suggestionLoggingSessionOpen;
    BOOL _suggestionsLoggingEnabled;
}




+(BOOL)_includeTorsoOnlyFaces;
+(id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)workerWithPhotoLibrary:(id)arg0 andContext:(id)arg1 ;
-(BOOL)_deleteAllVerifiedPersonsWithError:(*id)arg0 ;
// -(id)_suggestionsForPersonLocalIdentifier:(id)arg0 clusterSequenceNumbers:(id)arg1 excludePersonLocalIdentifiers:(id)arg2 cancel:(id)arg3 context:(unk)arg4 error:(id)arg5  ;
// -(id)_suggestionsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 cancel:(id)arg3 error:(unk)arg4  ;
-(id)initWithPhotoLibrary:(id)arg0 andContext:(id)arg1 ;
-(void)_appendToSuggestionsLog:(id)arg0 ;
-(void)_closeSuggestionsLoggingSession;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg0 ;
-(void)_finalizeSuggestionsLog;
-(void)_logFaceToSuggestionsLog:(id)arg0 ;
-(void)_openSuggestionsLoggingSession;
-(void)_startAndSyncClusterCacheWithLibrary:(BOOL)arg0 reply:(id)arg1 ;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)personPromoterStatusWithContext:(id)arg0 reply:(id)arg1 ;
// -(void)rebuildPersonsWithContext:(id)arg0 reply:(id)arg1 extendTimeout:(unk)arg2 cancel:(id)arg3  ;
// -(void)reclusterFacesWithContext:(id)arg0 reply:(id)arg1 extendTimeout:(unk)arg2 cancel:(id)arg3  ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg0 reply:(id)arg1 ;
-(void)resetFaceClusteringStateWithContext:(id)arg0 reply:(id)arg1 ;
-(void)resetPersonsModelWithReply:(id)arg0 ;
-(void)resetPetsModelWithReply:(id)arg0 ;
// -(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 context:(id)arg3 reply:(id)arg4 cancel:(unk)arg5  ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 context:(id)arg2 reply:(id)arg3 ;
// -(void)validateClusterCacheWithContext:(id)arg0 cancelOrExtendTimeoutBlock:(id)arg1 reply:(unk)arg2  ;


@end


#endif