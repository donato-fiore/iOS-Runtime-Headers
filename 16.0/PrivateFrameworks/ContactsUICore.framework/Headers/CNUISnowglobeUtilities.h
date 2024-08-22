// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUISNOWGLOBEUTILITIES_H
#define CNUISNOWGLOBEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNUISnowglobeUtilities : NSObject



+(?)avatarLayerForCGImages:(?)arg0 inRect:(?)arg1 forItemCountscope;
+(?)imageForAvatarImages:(?)arg0 badgeImages:(?)arg1 badgeTypes:(?)arg2 rect:(?)arg3 itemCountscope;
+(BOOL)enableGroupPhoto;
+(id)circularContainerLayerForRect:(struct CGRect )arg0 backgroundStyle:(NSUInteger)arg1 ;
+(id)containerLayerForRect:(struct CGRect )arg0 backgroundStyle:(NSUInteger)arg1 ;
+(id)roundedRectContainerLayerForRect:(struct CGRect )arg0 backgroundStyle:(NSUInteger)arg1 ;
+(struct CGColor *)backgroundColorForBackgroundStyle:(NSUInteger)arg0 ;
+(struct CGColor *)defaultBackgroundColor;
+(struct CGColor *)defaultDarkBackgroundColor;
+(struct CGImage *)circularPlaceholderImageForSize:(struct CGSize )arg0 backgroundStyle:(NSUInteger)arg1 scale:(CGFloat)arg2 ;
+(struct CGImage *)imageForLayer:(id)arg0 inRect:(struct CGRect )arg1 ;
+(struct CGImage *)roundedRectPlaceholderImageForSize:(struct CGSize )arg0 backgroundStyle:(NSUInteger)arg1 scale:(CGFloat)arg2 ;
+(struct CGSize )sizeForImageAtIndex:(NSUInteger)arg0 inRect:(struct CGRect )arg1 forItemCount:(NSUInteger)arg2 scope:(id)arg3 ;


@end


#endif