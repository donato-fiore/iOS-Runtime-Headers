// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRELEVANCEENGINECACHE_H
#define NTKRELEVANCEENGINECACHE_H

@class NSLock, RERelevanceEngine, NSString;
@protocol NTKFaceCollectionObserver, RERelevanceEngineObserver;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"

@interface NTKRelevanceEngineCache : NSObject <NTKFaceCollectionObserver, RERelevanceEngineObserver>

 {
    NSLock *_coordinatorLock;
    RERelevanceEngine *_coordinator;
    RERelevanceEngine *_staticCoordinator;
    NTKFaceCollection *_libraryCollection;
    BOOL _isEditing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)arg0 ;
+(id)_globallyCachedCanonicalRelevanceEngine;
+(id)_modelFileLocation;
+(id)sampleConfiguration;
+(id)sharedCache;
-(BOOL)_faceCollectionContainsSiriFace:(id)arg0 ;
-(BOOL)_faceCollectionNeedsLiveElementCoordinator:(id)arg0 ;
-(BOOL)_faceNeedsElementCoordinator:(id)arg0 ;
-(BOOL)_needsLiveElementCoordinator;
-(BOOL)relevanceEngine:(id)arg0 isElementAtPathVisible:(id)arg1 ;
-(id)canonicalRelevanceEngine;
-(id)canonicalRelevanceEngineIgnoringAppInstallations;
-(id)init;
-(id)sharedRelevanceEngine;
-(void)_beginLoadingDataForEngine:(id)arg0 ;
-(void)_clockViewControllerDidBeginEditing;
-(void)_clockViewControllerDidEndEditing;
-(void)_clockViewControllerDidEnterAddable;
-(void)_loadCoordinatorIfNeeded;
-(void)_refreshLiveCoordinator;
-(void)_unloadCoordinatorIfNeeded;
-(void)dealloc;
-(void)faceCollection:(id)arg0 didAddFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didRemoveFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didSelectFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)faceCollectionDidReorderFaces:(id)arg0 ;
-(void)faceCollectionDidReset:(id)arg0 ;
-(void)prewarm;
-(void)relevanceEngine:(id)arg0 didInsertElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didMoveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg0 didReloadElement:(id)arg1 atPath:(id)arg2 ;
-(void)relevanceEngine:(id)arg0 didRemoveElement:(id)arg1 atPath:(id)arg2 ;
// -(void)relevanceEngine:(id)arg0 performBatchUpdateBlock:(id)arg1 completion:(unk)arg2  ;
-(void)setLibraryCollection:(id)arg0 ;


@end


#endif