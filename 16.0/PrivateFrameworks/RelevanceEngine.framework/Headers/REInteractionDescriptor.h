// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REINTERACTIONDESCRIPTOR_H
#define REINTERACTIONDESCRIPTOR_H

@class NSString;
@protocol REAutomaticExportedInterface, NSCopying;

#import <Foundation/Foundation.h>

#import "REFeature.h"

@interface REInteractionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying>



@property (retain, nonatomic) REFeature *biasFeature; // ivar: _biasFeature
@property (nonatomic) BOOL enableExploreExploit; // ivar: _enableExploreExploit
@property (nonatomic) float exploreBias; // ivar: _exploreBias
@property (retain, nonatomic) REFeature *identificationFeature; // ivar: _identificationFeature
@property (nonatomic) float initialProbability; // ivar: _initialProbability
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) REFeature *selectionFeature; // ivar: _selectionFeature
@property (nonatomic) float trainingSimulationExploreBias; // ivar: _trainingSimulationExploreBias
@property (nonatomic) float varianceEpsilon; // ivar: _varianceEpsilon
@property (nonatomic) float weight; // ivar: _weight


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif