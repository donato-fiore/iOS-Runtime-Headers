// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAVATARIMAGEUTILITIES_H
#define CNAVATARIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNAvatarImageUtilities : NSObject



+(id)croppedAndCenteredAvatarImageForImage:(id)arg0 usingTransparencyInsets:(struct UIEdgeInsets )arg1 widthMultiplier:(CGFloat)arg2 ;
+(id)croppedAndCenteredAvatarImageForImage:(id)arg0 widthMultiplier:(CGFloat)arg1 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg0 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg0 requiringFullOpacity:(BOOL)arg1 ;
+(struct UIEdgeInsets )transparencyInsetsForImage:(id)arg0 requiringFullOpacity:(BOOL)arg1 ;


@end


#endif