// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKALGORITHMPARAMS_H
#define ABPKALGORITHMPARAMS_H


#import <Foundation/Foundation.h>

#import "ABPK2DDetectionConfiguration.h"

@interface ABPKAlgorithmParams : NSObject

@property (retain) ABPK2DDetectionConfiguration *config2DDetection; // ivar: _config2DDetection
@property CGSize regImageResolution; // ivar: _regImageResolution
@property ? regIntrinsics; // ivar: _regIntrinsics


-(id)initWithRegIntrinsics:(struct ? )arg0 regImageResolution:(struct CGSize )arg1 ;
-(id)toDict;


@end


#endif