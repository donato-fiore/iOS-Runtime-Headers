// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISIOSDOCUMENTRECIPE_H
#define ISIOSDOCUMENTRECIPE_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


-(id)init;
-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGSize )backgroundSizeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGSize )badgeSizeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif