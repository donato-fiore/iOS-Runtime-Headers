// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYCONTROLLER_H
#define PGMEMORYCONTROLLER_H

@class NSMutableDictionary, PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGMemoryGenerationContext.h"
#import "PGManagerWorkingContext.h"

@interface PGMemoryController : NSObject {
    PGGraph *_graph;
    NSMutableDictionary *_momentsByMomentIDs;
}


@property BOOL ignoresMomentIsInteresting; // ivar: _ignoresMomentIsInteresting
@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (retain, nonatomic) PGMemoryGenerationContext *memoryGenerationContext; // ivar: _memoryGenerationContext
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (copy) id *progressBlock; // ivar: _progressBlock
@property (readonly) PGManagerWorkingContext *workingContext; // ivar: _workingContext


+(BOOL)anyBlockedFeatureIn:(id)arg0 isHitByEvent:(id)arg1 ;
+(id)_localIdentifierOfMainPersonInEvent:(id)arg0 prominentOnly:(BOOL)arg1 ;
-(BOOL)anyBlockedFeatureIsHitByEvent:(id)arg0 ;
-(BOOL)libraryHasEnoughProcessedScenes:(BOOL)arg0 andProcessedFaces:(BOOL)arg1 ;
-(BOOL)libraryHasEnoughScenesProcessed:(BOOL)arg0 haveFacesProcessed:(BOOL)arg1 forYear:(id)arg2 withGraph:(id)arg3 ;
-(BOOL)momentNodesHaveScenesProcessed:(id)arg0 inGraph:(id)arg1 ;
-(id)assetCollectionWithAssetLocalIdentifiers:(id)arg0 ;
-(id)initWithGraph:(id)arg0 workingContext:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 ;
-(id)momentForMomentID:(id)arg0 ;


@end


#endif