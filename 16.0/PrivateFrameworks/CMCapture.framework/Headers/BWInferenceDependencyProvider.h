// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEDEPENDENCYPROVIDER_H
#define BWINFERENCEDEPENDENCYPROVIDER_H

@class NSArray, NSSet, NSMapTable, NSDictionary;

#import <Foundation/Foundation.h>


@interface BWInferenceDependencyProvider : NSObject

@property (readonly, copy, nonatomic) NSArray *allInputVideoDependencies;
@property (readonly, copy, nonatomic) NSArray *allOutputVideoDependencies;
@property (retain, nonatomic) NSSet *consumedVideoAttachedMediaKeys; // ivar: _consumedVideoAttachedMediaKeys
@property (readonly, nonatomic) NSMapTable *dependenciesByInputVideoRequirements; // ivar: _dependenciesByInputVideoRequirements
@property (readonly, nonatomic) NSMapTable *dependenciesByOutputVideoRequirements; // ivar: _dependenciesByOutputVideoRequirements
@property (retain, nonatomic) NSDictionary *providedVideoRequirementsByAttachedMediaKey; // ivar: _providedVideoRequirementsByAttachedMediaKey
@property (nonatomic) int supportedPixelBufferCompressionType; // ivar: _supportedPixelBufferCompressionType


-(id)dependenciesForInputVideoRequirement:(id)arg0 ;
-(id)dependenciesForOutputVideoRequirement:(id)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif