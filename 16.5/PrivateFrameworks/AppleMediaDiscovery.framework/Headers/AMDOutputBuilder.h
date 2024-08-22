// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDOUTPUTBUILDER_H
#define AMDOUTPUTBUILDER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMDOutputBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *outputDefinitions; // ivar: _outputDefinitions
@property (retain, nonatomic) NSString *useCaseId; // ivar: _useCaseId


-(BOOL)isValid;
-(id)convertMultiArray:(id)arg0 withShape:(id)arg1 atDepth:(unsigned int)arg2 withKey:(id)arg3 withScoreThreshold:(CGFloat)arg4 error:(*id)arg5 ;
-(id)createHeapOfType:(NSInteger)arg0 withCapacity:(NSUInteger)arg1 ;
-(id)generateMappingDictionary:(id)arg0 ;
-(id)getAllFeatureIds;
-(id)getOutputfor:(id)arg0 FromMLProvider:(id)arg1 andModelAssets:(id)arg2 withColdstartModelId:(id)arg3 topN:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)getPredictions:(NSUInteger)arg0 fromMLProvider:(id)arg1 andModelAssets:(id)arg2 withColdstartModelId:(id)arg3 error:(*id)arg4 ;
-(id)getRemapDictFor:(id)arg0 withModelAssets:(id)arg1 ;
-(id)getTopN:(NSUInteger)arg0 idsAndScoresFrom:(id)arg1 withMappingDictionary:(id)arg2 withType:(NSInteger)arg3 ;
-(id)initWithDictionary:(id)arg0 forUseCase:(id)arg1 ;
-(id)process2DMultiArray:(id)arg0 shapeLength:(unsigned int)arg1 withDataType:(NSInteger)arg2 withOutputDefinition:(id)arg3 andModelAssets:(id)arg4 withColdstartModelId:(id)arg5 idsOnly:(BOOL)arg6 inferenceMode:(id)arg7 error:(*id)arg8 ;
-(id)processArrayOutput:(id)arg0 withDataType:(NSInteger)arg1 withOutputDefinition:(id)arg2 andModelAssets:(id)arg3 withColdstartModelId:(id)arg4 idsOnly:(BOOL)arg5 error:(*id)arg6 ;
-(id)processMultiArrayModelOutput:(id)arg0 withOutputDefinition:(id)arg1 FromMLProvider:(id)arg2 andModelAssets:(id)arg3 withColdstartModelId:(id)arg4 withTopN:(NSUInteger)arg5 error:(*id)arg6 ;


@end


#endif