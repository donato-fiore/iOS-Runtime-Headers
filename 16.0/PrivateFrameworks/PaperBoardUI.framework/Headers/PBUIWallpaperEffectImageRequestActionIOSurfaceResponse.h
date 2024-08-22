// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPEREFFECTIMAGEREQUESTACTIONIOSURFACERESPONSE_H
#define PBUIWALLPAPEREFFECTIMAGEREQUESTACTIONIOSURFACERESPONSE_H

@class IOSurface;


#import "PBUIWallpaperEffectImageRequestActionResponse.h"

@interface PBUIWallpaperEffectImageRequestActionIOSurfaceResponse : PBUIWallpaperEffectImageRequestActionResponse

@property (readonly, nonatomic) IOSurface *ioSurface;


-(id)initWithActualStyle:(NSInteger)arg0 size:(struct CGSize )arg1 ioSurface:(id)arg2 ;


@end


#endif