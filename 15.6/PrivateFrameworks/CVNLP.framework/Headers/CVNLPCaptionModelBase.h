// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCAPTIONMODELBASE_H
#define CVNLPCAPTIONMODELBASE_H



#import "CVNLPModelBase.h"
#import "CVNLPCaptionRuntimeParameters.h"

@interface CVNLPCaptionModelBase : CVNLPModelBase

@property (readonly, nonatomic) CVNLPCaptionRuntimeParameters *runTimeParams; // ivar: _runTimeParams


-(id)initWithOptions:(id)arg0 runTimeParams:(id)arg1 ;


@end


#endif