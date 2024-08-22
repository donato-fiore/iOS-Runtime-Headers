// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNCOREANIMATIONSOURCE_H
#define SCNCOREANIMATIONSOURCE_H

@class CALayer;


#import "SCNImageSource.h"

@interface SCNCoreAnimationSource : SCNImageSource

@property (retain, nonatomic) CALayer *layer; // ivar: _layer


-(BOOL)isOpaque;
-(id)textureSource;
-(void)dealloc;


@end


#endif