// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCANESOFTMAXPARAMETERS_H
#define _MLCANESOFTMAXPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _MLCANESoftmaxParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *gocParams; // ivar: _gocParams
@property (readonly, retain, nonatomic) NSDictionary *neuronParams; // ivar: _neuronParams
@property (readonly, retain, nonatomic) NSDictionary *softmaxParams; // ivar: _softmaxParams


+(id)softmaxUnitParametersWith:(id)arg0 neuronParams:(id)arg1 gocParams:(id)arg2 ;
-(id)initWithSoftmaxParams:(id)arg0 neuronParams:(id)arg1 gocParams:(id)arg2 ;


@end


#endif