// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLGRADIENTRESULTS_H
#define PMLGRADIENTRESULTS_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "PMLMutableDenseVector.h"

@interface PMLGradientResults : NSObject

@property (readonly, nonatomic) PMLMutableDenseVector *gradient; // ivar: _gradient
@property (readonly, nonatomic) NSNumber *loss; // ivar: _loss


-(id)initWithGradient:(id)arg0 loss:(id)arg1 ;


@end


#endif