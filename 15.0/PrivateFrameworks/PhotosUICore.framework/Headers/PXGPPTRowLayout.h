// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGPPTROWLAYOUT_H
#define PXGPPTROWLAYOUT_H

@protocol PXGSublayoutProvider;


#import "PXGStackLayout.h"

@interface PXGPPTRowLayout : PXGStackLayout <PXGSublayoutProvider>



@property (readonly, nonatomic) CGFloat hue; // ivar: _hue
@property (readonly, nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems


-(id)init;
-(id)initWithNumberOfItems:(NSInteger)arg0 hue:(CGFloat)arg1 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;


@end


#endif