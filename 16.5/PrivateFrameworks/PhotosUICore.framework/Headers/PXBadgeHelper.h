// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXBADGEHELPER_H
#define PXBADGEHELPER_H


#import <Foundation/Foundation.h>


@interface PXBadgeHelper : NSObject



+(id)_favoriteBadgeImageWithSymbolConfiguration:(id)arg0 ;
+(id)autoReframingImage;
+(id)cloudBadgeImage;
+(id)cloudBadgeImageMini;
+(id)contentSyndicationBadgeImage;
+(id)contentSyndicationBadgeImageMini;
+(id)contentSyndicationGuestAssetBadgeImage;
+(id)debugBackgroundImageWithBadges:(NSUInteger)arg0 ;
+(id)favoriteBadgeImage;
+(id)favoriteBadgeImageMini;
+(id)favoritesCollectionBadgeImage;
+(id)gradientImage;
+(id)imageForBadgeInfo:(struct PXAssetBadgeInfo )arg0 style:(NSInteger)arg1 isOverContent:(BOOL)arg2 ;
+(id)leadingCornerGradientBackgroundImageForLayoutDirection:(NSInteger)arg0 ;
+(id)livePhotoBadgeShadowedImage;
+(id)loopingBadgeImage;
+(id)loopingBadgeTemplateImage;
+(id)mediumBodySymbolConfiguration;
+(id)mediumSymbolConfiguration;
+(id)miniSymbolConfiguration;
+(id)ocrAssetBadgeImage;
+(id)panoramaBadgeImage;
+(id)panoramaBadgeImageMini;
+(id)sharedLibraryBadgeImage;
+(id)sharedLibraryBadgeImageMini;
+(id)smallBodySymbolConfiguration;
+(id)smallSymbolConfiguration;
+(id)textForBadgeInfo:(struct PXAssetBadgeInfo )arg0 style:(NSInteger)arg1 ;
+(id)trailingCornerGradientBackgroundImageForLayoutDirection:(NSInteger)arg0 ;
+(struct PXAssetBadgeInfo )topLeftPrimaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;
+(struct PXAssetBadgeInfo )topLeftSecondaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;
+(struct PXAssetBadgeInfo )topRightBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo )arg0 ;


@end


#endif