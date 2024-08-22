// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARCYCLELAYERANIMATION_H
#define _UISTATUSBARCYCLELAYERANIMATION_H

@class CAAnimation, NSString, CALayer;

#import <Foundation/Foundation.h>


@interface _UIStatusBarCycleLayerAnimation : NSObject

@property (retain, nonatomic) CAAnimation *animation; // ivar: _animation
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) CALayer *layer; // ivar: _layer
@property (retain, nonatomic) CAAnimation *originalAnimation; // ivar: _originalAnimation


+(id)cycleAnimationWithLayer:(id)arg0 animation:(id)arg1 key:(id)arg2 ;
-(id)description;


@end


#endif