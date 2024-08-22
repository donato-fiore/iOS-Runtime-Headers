// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(NSUInteger)_speciesForDetectionType:(short)arg0 ;
-(id)_supportedPetDetectionTypes;
-(id)init;
-(id)initForTesting;
-(id)momentNodesForPerson:(id)arg0 inPhotoLibrary:(id)arg1 withGraph:(id)arg2 ;
-(void)_removeAllPetNodesForGraph:(id)arg0 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif