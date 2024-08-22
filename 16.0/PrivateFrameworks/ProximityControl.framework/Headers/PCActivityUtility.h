// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCACTIVITYUTILITY_H
#define PCACTIVITYUTILITY_H


#import <Foundation/Foundation.h>


@interface PCActivityUtility : NSObject



+(BOOL)activity:(id)arg0 isLessThan:(id)arg1 ;
+(id)activityFrom:(id)arg0 ;
+(id)composedImageFor:(id)arg0 ;
+(id)composedImageFor:(id)arg0 assetType:(NSInteger)arg1 ;
+(id)composedImageWithArtworkFor:(id)arg0 assetType:(NSInteger)arg1 ;
+(id)composedImageWithDeviceImage:(id)arg0 badgeImage:(id)arg1 ;
+(id)deviceNameFor:(id)arg0 ;
+(id)disambiguationButtonImageForActivity:(id)arg0 ;
+(id)formattedDurationFor:(CGFloat)arg0 ;
+(id)iconForBundleIdentifier:(id)arg0 ;
+(id)imageForAssetType:(NSInteger)arg0 ;
+(id)order:(id)arg0 ;
+(id)scaleImageIfNeeded:(id)arg0 toFitSize:(struct CGSize )arg1 withCornerRadius:(CGFloat)arg2 ;


@end


#endif