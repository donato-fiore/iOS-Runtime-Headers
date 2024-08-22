// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCANEMATMULPARAMETERS_H
#define _MLCANEMATMULPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _MLCANEMatMulParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *finalTransposeParams; // ivar: _finalTransposeParams
@property (readonly, retain, nonatomic) NSDictionary *gocParams; // ivar: _gocParams
@property (readonly, retain, nonatomic) NSDictionary *matMulParams; // ivar: _matMulParams
@property (readonly, retain, nonatomic) NSDictionary *transposeXParams; // ivar: _transposeXParams
@property (readonly, retain, nonatomic) NSDictionary *transposeYParams; // ivar: _transposeYParams


+(id)matMulUnitParametersWith:(id)arg0 transposeXParams:(id)arg1 transposeYParams:(id)arg2 finalTransposeParams:(id)arg3 gocParams:(id)arg4 ;
-(id)initWithMatMulParams:(id)arg0 transposeXParams:(id)arg1 transposeYParams:(id)arg2 finalTransposeParams:(id)arg3 gocParams:(id)arg4 ;


@end


#endif