// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIPRLIKENESSBADGEIMAGEPROVIDER_H
#define CNUIPRLIKENESSBADGEIMAGEPROVIDER_H

@class UIImage, NSData, CNCache, NSString;
@protocol CNUIPRLikenessProvider, CNUILikenessBadgeTypeProvider;

#import <Foundation/Foundation.h>


@interface CNUIPRLikenessBadgeImageProvider : NSObject <CNUIPRLikenessProvider, CNUILikenessBadgeTypeProvider>



@property (retain, nonatomic) UIImage *badgeImage; // ivar: _badgeImage
@property (retain, nonatomic) NSData *badgeImageData; // ivar: _badgeImageData
@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (readonly, nonatomic) CNCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_cnui_likenessType;
-(id)initWithBadge:(id)arg0 ;
-(struct CGImage *)_cnui_imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)badgeCGImage;
-(struct CGImage *)renderCircularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderRoundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif