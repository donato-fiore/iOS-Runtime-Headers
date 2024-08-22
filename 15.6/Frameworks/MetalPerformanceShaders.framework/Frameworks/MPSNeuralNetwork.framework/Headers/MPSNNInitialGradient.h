// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNINITIALGRADIENT_H
#define MPSNNINITIALGRADIENT_H



#import "MPSCNNKernel.h"
#import "MPSCNNNeuron.h"

@interface MPSNNInitialGradient : MPSCNNKernel {
    MPSCNNNeuron *_neuronFilter;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif