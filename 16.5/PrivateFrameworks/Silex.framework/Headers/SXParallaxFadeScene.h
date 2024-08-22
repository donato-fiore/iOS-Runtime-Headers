// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXPARALLAXFADESCENE_H
#define SXPARALLAXFADESCENE_H

@class UIColor;


#import "SXComponentAnimation.h"

@interface SXParallaxFadeScene : SXComponentAnimation

@property (readonly, nonatomic) UIColor *fadeColor;


-(BOOL)userControllable;
-(Class)handlerClass;


@end


#endif