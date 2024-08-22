// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXBADGEHELPER_H
#define PXBADGEHELPER_H


#import <Foundation/Foundation.h>


@interface PXBadgeHelper : NSObject



+(id)_favoriteBadgeImageWithSymbolConfiguration:(id)arg0 ;
+(id)_mediumSymbolConfiguration;
+(id)_smallSymbolConfiguration;
+(id)autoReframingImage;
+(id)cloudBadgeImage;
+(id)contentSyndicationBadgeImage;
+(id)contentSyndicationGuestAssetBadgeImage;
+(id)cornerGradientBackgroundImageForLayoutDirection:(NSInteger)arg0 ;
+(id)debugBackgroundImageWithBadges:(NSUInteger)arg0 ;
+(id)favoriteBadgeImage;
+(id)favoritesCollectionBadgeImage;
+(id)gradientImage;
+(id)imageForBadgeInfo:(struct PXAssetBadgeInfo )arg0 style:(NSInteger)arg1 isOverContent:(BOOL)arg2 ;
+(id)livePhotoBadgeShadowedImage;
+(id)loopingBadgeImage;
+(id)loopingBadgeTemplateImage;
+(id)panoramaBadgeImage;
+(id)textForBadgeInfo:(struct PXAssetBadgeInfo )arg0 style:(NSInteger)arg1 ;
+(struct PXAssetBadgeInfo )topLeftPrimaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;
+(struct PXAssetBadgeInfo )topLeftSecondaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;
+(struct PXAssetBadgeInfo )topRightBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;


@end


#endif