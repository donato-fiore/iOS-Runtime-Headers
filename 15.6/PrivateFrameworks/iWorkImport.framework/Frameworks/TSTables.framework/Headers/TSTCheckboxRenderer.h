// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCHECKBOXRENDERER_H
#define TSTCHECKBOXRENDERER_H


#import <Foundation/Foundation.h>


@interface TSTCheckboxRenderer : NSObject



+(id)imageForScale:(CGFloat)arg0 checked:(BOOL)arg1 outDrawingScale:(*CGFloat)arg2 ;
+(struct CGRect )frameWithViewScale:(CGFloat)arg0 contentFrame:(struct CGRect )arg1 ;
+(struct CGRect )frameWithViewScale:(CGFloat)arg0 contentFrame:(struct CGRect )arg1 checked:(BOOL)arg2 outCheckboxImage:(*id)arg3 outCheckboxSize:(struct CGSize *)arg4 ;
+(void)renderCheckbox:(BOOL)arg0 viewScale:(CGFloat)arg1 intoContext:(struct CGContext *)arg2 rect:(struct CGRect )arg3 color:(id)arg4 ;


@end


#endif