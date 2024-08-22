// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTCOLLECTIONOPERATOR_H
#define PPTCOLLECTIONOPERATOR_H



#import "PLOperator.h"
#import "PLXPCResponderOperatorComposition.h"
#import "PLXPCListenerOperatorComposition.h"

@interface PPTCollectionOperator : PLOperator

@property (retain) PLXPCResponderOperatorComposition *allowlistResponder; // ivar: _allowlistResponder
@property (retain) PLXPCListenerOperatorComposition *metricListener; // ivar: _metricListener


-(id)init;
-(void)initOperatorDependancies;
-(void)startCollection;


@end


#endif