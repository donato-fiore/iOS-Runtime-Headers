// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITESTUSERPERSONAKEYINFO_H
#define TITESTUSERPERSONAKEYINFO_H


#import <Foundation/Foundation.h>

#import "TIGaussianErrorGenerator.h"
#import "TIFitAffineMLLMatrixWrapper.h"

@interface TITestUserPersonaKeyInfo : NSObject

@property (nonatomic) CGPoint center; // ivar: _center
@property (retain, nonatomic) TIGaussianErrorGenerator *errorGenerator; // ivar: _errorGenerator
@property (retain, nonatomic) TIFitAffineMLLMatrixWrapper *rotationMatrix; // ivar: _rotationMatrix


-(id)description;


@end


#endif