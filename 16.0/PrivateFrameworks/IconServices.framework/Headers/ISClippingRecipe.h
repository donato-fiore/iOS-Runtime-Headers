// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISCLIPPINGRECIPE_H
#define ISCLIPPINGRECIPE_H

@class IFColor, NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISClippingRecipe : NSObject <ISCompositorRecipe>



@property (retain) IFColor *badgeTintColor; // ivar: _badgeTintColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)hintedBadgeRect;
-(id)hintedCornerSize;
-(id)hintedFontSize;
-(id)hintedPageCurlSize;
-(id)hintedPaperRect;
-(id)hintedShadowBlur;
-(id)hintedShadowOffset;
-(id)hintedTextRect;
-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif