// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTPETPROCESSOR_H
#define PGGRAPHINGESTPETPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
    BOOL _petPrintClusteringEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)blocklistScenePetLabels;
+(id)scenePetLabels;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(NSUInteger)_speciesForDetectionType:(short)arg0 ;
-(NSUInteger)_speciesForSceneLabel:(id)arg0 ;
-(id)_petSceneNodesForGraph:(id)arg0 ;
-(id)_petsDetectedWithType:(short)arg0 inPhotoLibrary:(id)arg1 withGraph:(id)arg2 ;
-(id)_petsForSceneNode:(id)arg0 inGraph:(id)arg1 ;
-(id)_supportedPetDetectionTypes;
-(id)init;
-(id)initForTesting;
-(id)momentNodesForPerson:(id)arg0 inPhotoLibrary:(id)arg1 withGraph:(id)arg2 ;
-(void)_removeAllPetNodesForGraph:(id)arg0 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif