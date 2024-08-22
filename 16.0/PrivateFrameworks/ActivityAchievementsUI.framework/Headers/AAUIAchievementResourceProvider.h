// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIACHIEVEMENTRESOURCEPROVIDER_H
#define AAUIACHIEVEMENTRESOURCEPROVIDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AAUIAchievementResourceProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_queue_decompressZipFileAtPath:(id)arg0 toDirectory:(id)arg1 ;
-(CGFloat)glyphTextureScaleForAchievement:(id)arg0 ;
-(id)_assetBundleForAchievement:(id)arg0 ;
-(id)_badgeModelFilenames:(id)arg0 ;
-(id)_cachedModelsPath;
-(id)_compressedBadgeModelPathsForAchievement:(id)arg0 ;
-(id)_modelDirectoryForAchievement:(id)arg0 ;
-(id)_modelFilePathsForAchievement:(id)arg0 ;
-(id)backSideIconImageForAchievement:(id)arg0 ;
-(id)badgeConfigurationForAchievement:(id)arg0 ;
-(id)badgeModelPathsForAchievement:(id)arg0 ;
-(id)enamelColorForAchievement:(id)arg0 ;
-(id)glyphTexturePathForAchievement:(id)arg0 ;
-(id)init;
-(id)metalColorForAchievement:(id)arg0 ;
-(id)stickerURLsForAchievement:(id)arg0 ;
-(id)stickersBundlePathForAchievement:(id)arg0 ;
-(id)texturePathsForAchievement:(id)arg0 ;
-(struct CGPoint )glyphPositionOffsetScaleForAchievement:(id)arg0 ;


@end


#endif