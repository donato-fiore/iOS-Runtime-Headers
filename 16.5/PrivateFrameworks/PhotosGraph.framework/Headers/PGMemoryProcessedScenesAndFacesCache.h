// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYPROCESSEDSCENESANDFACESCACHE_H
#define PGMEMORYPROCESSEDSCENESANDFACESCACHE_H

@class PHPhotoLibrary, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNodeCollection.h"

@interface PGMemoryProcessedScenesAndFacesCache : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_scenesAreProcessedEnoughByYear;
    NSMutableDictionary *_scenesAreProcessedWithMinimumSceneAnalysisVersion;
    NSMutableDictionary *_facesAreProcessedEnoughByYear;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughScenesProcessed;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughFacesProcessed;
    NSNumber *_petVIPModelExistsAsNumber;
}




-(BOOL)allMomentNodesHaveScenesProcessed:(id)arg0 inGraph:(id)arg1 ;
-(BOOL)allMomentNodesInCollectionHaveFacesProcessed:(id)arg0 ;
-(BOOL)allMomentNodesInCollectionHaveScenesProcessed:(id)arg0 ;
-(BOOL)libraryHasEnoughScenesProcessed:(BOOL)arg0 andProcessedFaces:(BOOL)arg1 ;
-(BOOL)libraryHasEnoughScenesProcessed:(BOOL)arg0 andProcessedFaces:(BOOL)arg1 forYear:(NSInteger)arg2 inGraph:(id)arg3 ;
-(BOOL)libraryHasEnoughScenesProcessedWithMinimumSceneAnalysisVersion:(NSUInteger)arg0 ;
-(BOOL)petVIPModelExists;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)momentNodesWithEnoughFacesProcessedInGraph:(id)arg0 ;
-(id)momentNodesWithEnoughScenesProcessedInGraph:(id)arg0 ;
-(void)setFacesAreProcessedEnoughInYear:(id)arg0 ;
-(void)setScenesAreProcessedEnoughInYear:(id)arg0 ;


@end


#endif