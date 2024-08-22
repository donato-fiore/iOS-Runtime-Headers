// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCRMSPROPOPTIMIZER_H
#define MLCRMSPROPOPTIMIZER_H

@class NSString;
@protocol MLCOptimizerCompiling, NSCopying;


#import "MLCOptimizer.h"
#import "MLCOptimizerDescriptor.h"

@interface MLCRMSPropOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying>



@property (readonly, nonatomic) float alpha; // ivar: _alpha
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCentered; // ivar: _isCentered
@property (readonly, nonatomic) float momentumScale; // ivar: _momentumScale
@property (readonly, nonatomic) MLCOptimizerDescriptor *optimizerDescriptor; // ivar: _optimizerDescriptor
@property (readonly) Class superclass;


+(id)optimizerWithDescriptor:(id)arg0 ;
+(id)optimizerWithDescriptor:(id)arg0 momentumScale:(float)arg1 alpha:(float)arg2 epsilon:(float)arg3 isCentered:(BOOL)arg4 ;
-(BOOL)compileForDevice:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDescriptor:(id)arg0 momentumScale:(float)arg1 alpha:(float)arg2 epsilon:(float)arg3 centered:(BOOL)arg4 ;


@end


#endif