// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECARDSHARINGONBOARDINGAVATARCAROUSELITEM_H
#define CNMECARDSHARINGONBOARDINGAVATARCAROUSELITEM_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject

@property (retain, nonatomic) UIImage *cachedImage; // ivar: _cachedImage
@property (readonly, nonatomic) CGFloat imageInsetPercentage; // ivar: _imageInsetPercentage
@property (readonly, copy, nonatomic) id *imageProvider; // ivar: _imageProvider
@property (nonatomic) NSUInteger imageType; // ivar: _imageType
@property (nonatomic) BOOL shouldShowVariants; // ivar: _shouldShowVariants
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithImageInsetPercentage:(CGFloat)arg0 imageProvider:(id)arg1 ;
-(id)initWithTitle:(id)arg0 ;


@end


#endif