// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRISHADOWEVALUATION_H
#define TRISHADOWEVALUATION_H



#import "TRIPBMessage.h"
#import "TRIMLRuntimeEvaluation.h"

@interface TRIShadowEvaluation : TRIPBMessage

@property (retain, nonatomic) TRIMLRuntimeEvaluation *mlRuntime;
@property (readonly, nonatomic) int typeOneOfCase;


+(id)descriptor;


@end


#endif