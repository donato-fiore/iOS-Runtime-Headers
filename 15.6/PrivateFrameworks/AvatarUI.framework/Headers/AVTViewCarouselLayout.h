// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTVIEWCAROUSELLAYOUT_H
#define AVTVIEWCAROUSELLAYOUT_H

@class NSString;
@protocol AVTViewCarouselLayout;

#import <Foundation/Foundation.h>


@interface AVTViewCarouselLayout : NSObject <AVTViewCarouselLayout>



@property (readonly, nonatomic) CGSize avtViewAspectRatio; // ivar: _avtViewAspectRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fillContainer; // ivar: _fillContainer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)adaptativeLayoutWithAVTViewAspectRatio:(struct CGSize )arg0 ;
+(struct CGSize )fullSizeForBounds:(struct CGSize )arg0 ;
+(struct CGSize )severalItemsSizeForBounds:(struct CGSize )arg0 aspectRatio:(struct CGSize )arg1 ;
-(id)initWithAVTViewAspectRatio:(struct CGSize )arg0 ;
-(struct CGSize )avatarViewSizeForAvailableContentSize:(struct CGSize )arg0 ;
-(struct CGSize )contentViewSizeForSize:(struct CGSize )arg0 ;


@end


#endif