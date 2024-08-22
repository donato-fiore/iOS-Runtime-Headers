// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDGRADIENTLAYER_H
#define CUIPSDGRADIENTLAYER_H



#import "CUIPSDLayer.h"
#import "CUIPSDGradient.h"

@interface CUIPSDGradientLayer : CUIPSDLayer

@property (readonly, nonatomic) CUIPSDGradient *gradient; // ivar: _gradient


-(id)initWithGradient:(id)arg0 ;
-(void)dealloc;


@end


#endif