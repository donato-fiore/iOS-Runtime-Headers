// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISGENERICRECIPE_H
#define ISGENERICRECIPE_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISGenericRecipe : NSObject <ISCompositorRecipe>



@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) NSUInteger borderWidth; // ivar: _borderWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL selectedVariant; // ivar: _selectedVariant
@property (readonly) Class superclass;
@property (nonatomic) BOOL templateVariant; // ivar: _templateVariant


-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif