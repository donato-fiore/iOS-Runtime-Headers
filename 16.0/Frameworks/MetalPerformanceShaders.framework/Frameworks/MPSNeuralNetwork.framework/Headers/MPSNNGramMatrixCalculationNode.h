// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNGRAMMATRIXCALCULATIONNODE_H
#define MPSNNGRAMMATRIXCALCULATIONNODE_H

@protocol MPSNNGramMatrixCallback;


#import "MPSNNFilterNode.h"

@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode

@property (readonly, nonatomic) float alpha; // ivar: _alpha
@property (retain, nonatomic) NSObject<MPSNNGramMatrixCallback> *propertyCallBack; // ivar: _propertyCallBack


+(id)nodeWithSource:(id)arg0 ;
+(id)nodeWithSource:(id)arg0 alpha:(float)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 alpha:(float)arg1 ;
-(void)dealloc;


@end


#endif