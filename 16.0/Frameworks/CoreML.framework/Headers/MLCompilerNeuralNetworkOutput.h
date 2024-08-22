// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCOMPILERNEURALNETWORKOUTPUT_H
#define MLCOMPILERNEURALNETWORKOUTPUT_H


#import <Foundation/Foundation.h>


@interface MLCompilerNeuralNetworkOutput : NSObject

@property (readonly, nonatomic) shared_ptr<Espresso::net> network; // ivar: _network
@property (readonly, nonatomic) shared_ptr<MIL::IRProgram> program; // ivar: _program


+(?)outputWithEspressoNetwork;
+(id)outputWithMILProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> )arg0 ;
-(?)initWithEspressoNetwork;
-(?)initWithMILProgram;


@end


#endif