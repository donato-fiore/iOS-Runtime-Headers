// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTRECIPEPARAMETERS_H
#define PGGRAPHINGESTRECIPEPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PGGraphIngestRecipeParameters : NSObject

@property (retain, nonatomic) NSArray *highlightsToIngest; // ivar: _highlightsToIngest
@property (retain, nonatomic) NSArray *momentsToIngest; // ivar: _momentsToIngest
@property (retain, nonatomic) NSArray *postProcessors; // ivar: _postProcessors
@property (retain, nonatomic) NSArray *preProcessors; // ivar: _preProcessors


+(id)lightweightGraphIngestParameters;


@end


#endif