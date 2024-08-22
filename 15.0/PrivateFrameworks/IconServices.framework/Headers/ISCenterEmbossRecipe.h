// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISCENTEREMBOSSRECIPE_H
#define ISCENTEREMBOSSRECIPE_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISCenterEmbossRecipe : NSObject <ISCompositorRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property NSUInteger variant; // ivar: _variant


-(id)hintedBadgeRect;
-(id)hintedFontSize;
-(id)hintedImageBadgeRect;
-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif