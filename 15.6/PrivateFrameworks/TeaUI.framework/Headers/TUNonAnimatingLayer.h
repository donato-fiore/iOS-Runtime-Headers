// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUNONANIMATINGLAYER_H
#define TUNONANIMATINGLAYER_H

@class CALayer;


#import "TUNonAnimatingLayerDelegate.h"

@interface TUNonAnimatingLayer : CALayer

@property (readonly, nonatomic) TUNonAnimatingLayerDelegate *layerDelegate; // ivar: _layerDelegate


-(id)init;


@end


#endif