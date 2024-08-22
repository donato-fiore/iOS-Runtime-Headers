// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTRETCHABLESHADOW_H
#define _UISTRETCHABLESHADOW_H


#import <Foundation/Foundation.h>


@interface _UIStretchableShadow : NSObject



+(id)_generateShadowWithRadius:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 isContinuousCorner:(BOOL)arg2 color:(id)arg3 ;
+(struct CGImage *)shadowWithRadius:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 ;
+(struct CGImage *)shadowWithRadius:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 isContinuousCorner:(BOOL)arg2 white:(CGFloat)arg3 ;
+(struct CGImage *)shadowWithRadius:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 white:(CGFloat)arg2 ;


@end


#endif