// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESPATIALMIXERDEFINITION_H
#define PHASESPATIALMIXERDEFINITION_H

@class NSArray;


#import "PHASEMixerDefinition.h"
#import "PHASEDistanceModelParameters.h"
#import "PHASEDirectivityModelParameters.h"
#import "PHASESpatialPipeline.h"

@interface PHASESpatialMixerDefinition : PHASEMixerDefinition

@property (retain, nonatomic) PHASEDistanceModelParameters *distanceModelParameters; // ivar: _distanceModelParameters
@property (retain, nonatomic) PHASEDirectivityModelParameters *listenerDirectivityModelParameters; // ivar: _listenerDirectivityModelParameters
@property (nonatomic) CGFloat listenerDopplerFactor; // ivar: _listenerDopplerFactor
@property (retain, nonatomic) PHASEDirectivityModelParameters *sourceDirectivityModelParameters; // ivar: _sourceDirectivityModelParameters
@property (nonatomic) CGFloat sourceDopplerFactor; // ivar: _sourceDopplerFactor
@property (readonly, nonatomic) NSArray *spatialModelerDefinitions; // ivar: _spatialModelerDefinitions
@property (readonly, nonatomic) PHASESpatialPipeline *spatialPipeline; // ivar: _spatialPipeline


+(id)new;
-(id)init;
-(id)initWithSpatialModelerSendDefinitions:(id)arg0 ;
-(id)initWithSpatialModelerSendDefinitions:(id)arg0 uid:(id)arg1 ;
-(id)initWithSpatialPipeline:(id)arg0 ;
-(id)initWithSpatialPipeline:(id)arg0 identifier:(id)arg1 ;
-(id)initWithSpatialPipeline:(id)arg0 uid:(id)arg1 ;


@end


#endif