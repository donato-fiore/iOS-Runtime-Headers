// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMEVALUATIONNODE_H
#define AXMEVALUATIONNODE_H

@protocol NSSecureCoding;


#import "AXMVisionEngineNode.h"

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding>



@property (nonatomic) NSUInteger effectivePriority; // ivar: _effectivePriority
@property (nonatomic) CGFloat minimumConfidence; // ivar: _minimumConfidence
@property (nonatomic) NSUInteger priority; // ivar: _priority


+(BOOL)isANEDeviceAvailable;
+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultPriority;
+(struct CGSize )preferredModelInputSize;
+(void)configureForRunningOnANEIfPossibleWithRequest:(id)arg0 ;
-(BOOL)evaluateRequests:(id)arg0 withContext:(id)arg1 requestHandlerOptions:(id)arg2 metrics:(id)arg3 error:(*id)arg4 ;
-(BOOL)shouldEvaluate:(id)arg0 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)_diagnosticNameForRequests:(id)arg0 metrics:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)boostEffectivePriority;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif