// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTRECIPE_H
#define PGGRAPHINGESTRECIPE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PGManager.h"
#import "PGGraphIngestRecipeParameters.h"

@interface PGGraphIngestRecipe : NSObject

@property (readonly, nonatomic) NSArray *highlightsToIngest; // ivar: _highlightsToIngest
@property (readonly, nonatomic) PGManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSArray *momentsToIngest; // ivar: _momentsToIngest
@property (readonly, nonatomic) PGGraphIngestRecipeParameters *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSArray *postProcessors; // ivar: _postProcessors
@property (readonly, nonatomic) NSArray *preProcessors; // ivar: _preProcessors


-(id)_highlightsForLibraryAnalysisWithFetchOptions:(id)arg0 ;
-(id)_momentsForLibraryAnalysisWithFetchOptions:(id)arg0 ;
-(id)defaultPostProcessors;
-(id)defaultPreProcessors;
-(id)initWithManager:(id)arg0 parameters:(id)arg1 ;


@end


#endif