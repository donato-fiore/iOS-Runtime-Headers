// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBACKDROPVIEWLAYER_H
#define _UIBACKDROPVIEWLAYER_H

@class CALayer;


#import "_UIBackdropView.h"

@interface _UIBackdropViewLayer : CALayer

@property (nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView


-(void)dealloc;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif