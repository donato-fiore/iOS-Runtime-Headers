// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLNEURALNETWORKUPDATEUTILS_H
#define MLNEURALNETWORKUPDATEUTILS_H


#import <Foundation/Foundation.h>


@interface MLNeuralNetworkUpdateUtils : NSObject



+(BOOL)loadUpdateParameters:(*void)arg0 fromCompiledArchive:(*void)arg1 error:(*id)arg2 ;
+(id)createClassLabelToIndexMapWith:(id)arg0 ;
+(id)loadParameterDescriptionsAndContainerFromUpdateParameters:(*void)arg0 modelDescription:(id)arg1 ;


@end


#endif