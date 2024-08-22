// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPEREFFECTIMAGEREQUESTACTIONIMAGEURLRESPONSE_H
#define PBUIWALLPAPEREFFECTIMAGEREQUESTACTIONIMAGEURLRESPONSE_H

@class NSURL;


#import "PBUIWallpaperEffectImageRequestActionResponse.h"

@interface PBUIWallpaperEffectImageRequestActionImageURLResponse : PBUIWallpaperEffectImageRequestActionResponse

@property (readonly, copy, nonatomic) NSURL *imageURL;


-(id)initWithActualStyle:(NSInteger)arg0 size:(struct CGSize )arg1 imageURL:(id)arg2 ;


@end


#endif