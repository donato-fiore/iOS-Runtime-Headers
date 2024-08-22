// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIMATERIALCOMPOSITOR_H
#define PBUIMATERIALCOMPOSITOR_H

@protocol PBUIWallpaperEffectCompositor, PBUIRenderer;

#import <Foundation/Foundation.h>


@interface PBUIMaterialCompositor : NSObject <PBUIWallpaperEffectCompositor>



@property (nonatomic) CGFloat downsampleFactor; // ivar: _downsampleFactor
@property (retain, nonatomic) NSObject<PBUIRenderer> *renderer; // ivar: _renderer


-(id)applyEffect:(id)arg0 toImage:(id)arg1 ;
-(id)init;


@end


#endif