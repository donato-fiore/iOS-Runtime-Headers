// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISMULTIPLEFILESRECIPE_H
#define ISMULTIPLEFILESRECIPE_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISMultipleFilesRecipe : NSObject <ISCompositorRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)documentLayerWithRect:(struct CGRect )arg0 withPageFold:(BOOL)arg1 iconSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
-(id)hintedCornerSize;
-(id)hintedPageCurlSize;
-(id)hintedPaperRect;
-(id)hintedShadowBlur;
-(id)hintedShadowOffset;
-(id)hintedUnderPaperRect;
-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif