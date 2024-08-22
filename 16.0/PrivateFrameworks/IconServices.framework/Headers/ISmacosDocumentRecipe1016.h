// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISMACOSDOCUMENTRECIPE1016_H
#define ISMACOSDOCUMENTRECIPE1016_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISmacosDocumentRecipe1016 : NSObject <ISCompositorRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL maskBadgeResource; // ivar: _maskBadgeResource
@property (readonly) Class superclass;


-(id)hintedBadgeRect;
-(id)hintedCornerSize;
-(id)hintedFontSize;
-(id)hintedPageCurlSize;
-(id)hintedPaperRect;
-(id)hintedShadowBlur;
-(id)hintedShadowOffset;
-(id)hintedShadowSpread;
-(id)hintedTextRect;
-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif