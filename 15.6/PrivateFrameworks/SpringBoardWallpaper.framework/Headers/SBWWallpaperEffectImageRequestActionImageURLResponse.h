// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPEREFFECTIMAGEREQUESTACTIONIMAGEURLRESPONSE_H
#define SBWWALLPAPEREFFECTIMAGEREQUESTACTIONIMAGEURLRESPONSE_H

@class NSURL;


#import "SBWWallpaperEffectImageRequestActionResponse.h"

@interface SBWWallpaperEffectImageRequestActionImageURLResponse : SBWWallpaperEffectImageRequestActionResponse

@property (readonly, copy, nonatomic) NSURL *imageURL;


-(id)initWithActualStyle:(NSInteger)arg0 size:(struct CGSize )arg1 imageURL:(id)arg2 ;


@end


#endif