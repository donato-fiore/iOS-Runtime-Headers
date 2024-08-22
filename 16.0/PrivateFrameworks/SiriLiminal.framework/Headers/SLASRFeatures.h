// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLASRFEATURES_H
#define SLASRFEATURES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SLASRFeatures : NSObject

@property (retain, nonatomic) NSArray *latticePathMaxScores; // ivar: _latticePathMaxScores
@property (retain, nonatomic) NSArray *latticePathMeanScores; // ivar: _latticePathMeanScores
@property (retain, nonatomic) NSArray *latticePathMinScores; // ivar: _latticePathMinScores
@property (retain, nonatomic) NSArray *latticePathVarScores; // ivar: _latticePathVarScores
@property (nonatomic) float snr; // ivar: _snr
@property (retain, nonatomic) NSArray *topLatticePathScores; // ivar: _topLatticePathScores
@property (nonatomic) NSUInteger topLatticePathTokenCount; // ivar: _topLatticePathTokenCount
@property (nonatomic) float trailingSilence; // ivar: _trailingSilence




@end


#endif