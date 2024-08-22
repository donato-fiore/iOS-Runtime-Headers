// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISWATCHOSAPPRECIPE_H
#define ISWATCHOSAPPRECIPE_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISwatchOSAppRecipe : NSObject <ISCompositorRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif