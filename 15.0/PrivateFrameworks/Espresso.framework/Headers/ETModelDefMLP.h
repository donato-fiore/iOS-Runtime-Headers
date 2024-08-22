// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETMODELDEFMLP_H
#define ETMODELDEFMLP_H



#import "ETModelDef.h"

@interface ETModelDefMLP : ETModelDef

@property int hidden_size; // ivar: _hidden_size
@property int input_size; // ivar: _input_size
@property int output_size; // ivar: _output_size


-(void)buildNetwork;


@end


#endif