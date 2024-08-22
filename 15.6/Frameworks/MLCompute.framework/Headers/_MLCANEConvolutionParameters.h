// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCANECONVOLUTIONPARAMETERS_H
#define _MLCANECONVOLUTIONPARAMETERS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _MLCANEConvolutionParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *biasParams; // ivar: _biasParams
@property (readonly, retain, nonatomic) NSDictionary *convolutionParams; // ivar: _convolutionParams
@property (readonly, retain, nonatomic) NSArray *neuronParams; // ivar: _neuronParams


+(id)convolutionUnitParametersWith:(id)arg0 biasParams:(id)arg1 neuronParams:(id)arg2 ;
-(id)initWithConvolutionParams:(id)arg0 biasParams:(id)arg1 neuronParams:(id)arg2 ;


@end


#endif