// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERVARIANTSMANAGER_H
#define CNPHOTOPICKERVARIANTSMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNPhotoPickerVariantsManager : NSObject

@property (retain, nonatomic) NSArray *avatarBackgrounds; // ivar: _avatarBackgrounds
@property (retain, nonatomic) NSArray *defaultEmojis; // ivar: _defaultEmojis


+(id)avatarBackgroundsFromDictionary:(id)arg0 ;
+(id)avatarPoseConfigurationsForAvatarRecord:(id)arg0 ;
+(id)colorFromRGBArray:(id)arg0 ;
+(id)colorFromRGBString:(id)arg0 ;
+(id)colorGradientBackground:(id)arg0 ;
+(id)colorVariantWithColorNamed:(id)arg0 ;
+(id)compositeColorForTopColor:(id)arg0 bottomColor:(id)arg1 ;
+(id)defaultEmojisFromDictionary:(id)arg0 ;
+(id)generateGradientColorsByColor;
+(id)generateMonogramGradientColorsByColor;
+(id)gradientBackgroundImageForColor:(id)arg0 ;
+(id)gradientStartColor:(id)arg0 ;
+(id)monogramColorGradientBackground:(id)arg0 ;
+(id)nonAlphaColorForBackgroundColor:(id)arg0 ;
+(id)sharingProfileAvatarPoseConfigurationForAvatarRecord:(id)arg0 ;
-(id)init;
-(id)randomColorVariant;


@end


#endif