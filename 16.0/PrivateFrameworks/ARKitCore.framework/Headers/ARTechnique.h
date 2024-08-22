// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARTECHNIQUE_H
#define ARTECHNIQUE_H

@class NSString, NSArray, NSNumber;
@protocol ARDotGraph, ARTechniqueProtocol, ARLoggingFullDescription, ARTechniqueDelegate, ARTechniqueForwardingStrategy;

#import <Foundation/Foundation.h>


@interface ARTechnique : NSObject <ARDotGraph, ARTechniqueProtocol, ARLoggingFullDescription>



@property CGFloat bonusLatency; // ivar: _bonusLatency
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<ARTechniqueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property NSUInteger powerUsage; // ivar: _powerUsage
@property (retain) NSObject<ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy; // ivar: _splitTechniqueFowardingStrategy
@property (retain) NSArray *splitTechniques; // ivar: _splitTechniques
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSNumber *traceKey; // ivar: _traceKey


+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
+(id)colorForTechnique:(id)arg0 ;
+(id)techniqueMatchingPredicate:(id)arg0 inArray:(id)arg1 ;
+(id)techniqueOfClass:(Class)arg0 inArray:(id)arg1 ;
-(BOOL)deterministicMode;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(NSInteger)captureBehavior;
-(NSUInteger)optionalSensorDataTypes;
-(NSUInteger)requiredSensorDataTypes;
-(id)_fullDescription;
-(id)init;
-(id)initWithParallelTechniques:(id)arg0 ;
-(id)initWithTechniques:(id)arg0 ;
-(id)predictedResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)processData:(id)arg0 ;
-(id)processResultData:(id)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(id)resultDataClasses;
-(id)techniqueMatchingPredicate:(id)arg0 ;
-(id)techniqueOfClass:(Class)arg0 ;
-(id)techniques;
-(void)dotGraphWithLines:(id)arg0 ;
-(void)mergeResultData:(id)arg0 intoData:(id)arg1 context:(id)arg2 ;
-(void)prepare:(BOOL)arg0 ;
-(void)reconfigureFrom:(id)arg0 ;
-(void)replaceTechniques:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg0 ;


@end


#endif