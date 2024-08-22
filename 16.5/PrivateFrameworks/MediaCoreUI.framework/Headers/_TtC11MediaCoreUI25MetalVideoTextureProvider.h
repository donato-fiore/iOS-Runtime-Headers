// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11MEDIACOREUI25METALVIDEOTEXTUREPROVIDER_H
#define _TTC11MEDIACOREUI25METALVIDEOTEXTUREPROVIDER_H


#import <Foundation/Foundation.h>


@interface _TtC11MediaCoreUI25MetalVideoTextureProvider : NSObject {
    ? player;
    ? context;
    ? currentTexture;
    ? currentTextureRef;
    ? stats;
    ? outputObserver;
    ? preferredFramesPerSecond;
    ? displayLink;
    ? displayLinkTarget;
    ? playerTimeControlStatusObserver;
    ? displayMode;
    ? displayModeSubject;
    ? $__lazy_storage_$_displayModePublisher;
    ? loadTextureTask;
}




-(id)init;
-(void)dealloc;


@end


#endif