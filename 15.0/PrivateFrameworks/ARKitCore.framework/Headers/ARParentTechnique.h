// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPARENTTECHNIQUE_H
#define ARPARENTTECHNIQUE_H

@class NSArray, NSString;
@protocol ARTechniqueDelegate, OS_dispatch_queue;


#import "ARTechnique.h"
#import "ARTechniqueParallelGatherContext.h"

@interface ARParentTechnique : ARTechnique <ARTechniqueDelegate>

 {
    BOOL _parallelExecution;
    NSObject<OS_dispatch_queue> *_queue;
    ARTechniqueParallelGatherContext *_previousContext;
    os_unfair_lock_s _previousContext_lock;
}


@property (copy) NSArray *_internalTechniques; // ivar: __internalTechniques
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isParallel;
@property (readonly) Class superclass;
@property (copy) NSArray *techniques;


+(id)parentTechniqueOfClass:(Class)arg0 inArray:(id)arg1 ;
+(id)techinqueInArray:(id)arg0 passingTest:(id)arg1 ;
+(id)techniquesByForceReplacingTechniques:(id)arg0 withMatchingClassTechniques:(id)arg1 ;
+(id)techniquesByReplacingOriginalTechniques:(id)arg0 withReplacementTechniques:(id)arg1 passingTest:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(NSUInteger)requiredSensorDataTypes;
-(id)_fullDescription;
-(id)initWithParallelTechniques:(id)arg0 ;
-(id)initWithTechniques:(id)arg0 ;
-(id)initWithTechniques:(id)arg0 delegate:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)processData:(id)arg0 ;
-(id)processData:(id)arg0 onTechniques:(id)arg1 ;
-(id)processResultData:(id)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(id)resultDataClasses;
-(id)techniqueMatchingPredicate:(id)arg0 ;
-(id)techniqueOfClass:(Class)arg0 ;
-(void)_submitResultsForTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)dotGraphWithLines:(id)arg0 ;
-(void)prepare:(BOOL)arg0 ;
-(void)reconfigureFrom:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 onTechniques:(id)arg2 ;
-(void)reuseTechniques:(id)arg0 ;
-(void)setBonusLatency:(CGFloat)arg0 ;
-(void)setPowerUsage:(NSUInteger)arg0 ;
-(void)siblingTechniquesDidChange:(id)arg0 ;
-(void)technique:(id)arg0 didFailWithError:(id)arg1 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 onTechniques:(id)arg4 ;


@end


#endif