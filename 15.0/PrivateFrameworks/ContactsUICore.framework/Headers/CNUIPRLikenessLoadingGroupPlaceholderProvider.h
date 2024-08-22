// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIPRLIKENESSLOADINGGROUPPLACEHOLDERPROVIDER_H
#define CNUIPRLIKENESSLOADINGGROUPPLACEHOLDERPROVIDER_H



#import "CNUIPRLikenessLoadingPlaceholderProvider.h"

@interface CNUIPRLikenessLoadingGroupPlaceholderProvider : CNUIPRLikenessLoadingPlaceholderProvider

@property (readonly, nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle


-(id)initWithBackgroundStyle:(NSUInteger)arg0 ;
-(struct CGImage *)renderCircularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderRoundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif