// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIBACKDROPCOMPOSITOR_H
#define PBUIBACKDROPCOMPOSITOR_H

@protocol PBUIWallpaperEffectCompositor;

#import <Foundation/Foundation.h>


@interface PBUIBackdropCompositor : NSObject <PBUIWallpaperEffectCompositor>





-(id)applyEffect:(id)arg0 toImage:(id)arg1 ;
-(id)init;


@end


#endif