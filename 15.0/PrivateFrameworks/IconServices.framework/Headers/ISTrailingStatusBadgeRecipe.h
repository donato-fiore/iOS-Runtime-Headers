// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISTRAILINGSTATUSBADGERECIPE_H
#define ISTRAILINGSTATUSBADGERECIPE_H

@class NSString;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISTrailingStatusBadgeRecipe : NSObject <ISCompositorRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)layerTreeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)trailingBottomBadgeRect;


@end


#endif