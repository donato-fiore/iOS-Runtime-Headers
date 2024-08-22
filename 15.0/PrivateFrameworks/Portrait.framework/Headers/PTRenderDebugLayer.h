// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRENDERDEBUGLAYER_H
#define PTRENDERDEBUGLAYER_H


#import <Foundation/Foundation.h>


@interface PTRenderDebugLayer : NSObject



-(id)initWithDevice:(id)arg0 library:(id)arg1 debugLayer:(NSInteger)arg2 ;
-(void)dumpDebug:(id)arg0 renderRequest:(id)arg1 debugTextures:(id)arg2 ;
-(void)renderDebugLayer:(id)arg0 renderRequest:(id)arg1 inDisparity:(id)arg2 disparityDiff:(id)arg3 focusObject:(struct PTFocus )arg4 algorithm:(int)arg5 debugTextures:(id)arg6 ;


@end


#endif