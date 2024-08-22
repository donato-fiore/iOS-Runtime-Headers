// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCANENEURONPARAMETERS_H
#define _MLCANENEURONPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _MLCANENeuronParameters : NSObject

@property (readonly, retain, nonatomic) NSArray *neuronParams; // ivar: _neuronParams
@property (readonly, nonatomic) int type; // ivar: _type


+(id)neuronUnitParametersWith:(id)arg0 neuronType:(int)arg1 ;
-(id)initWithNeuronParams:(id)arg0 neuronType:(int)arg1 ;


@end


#endif