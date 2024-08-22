// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGPPTROWSTACKLAYOUT_H
#define PXGPPTROWSTACKLAYOUT_H

@protocol PXGSublayoutProvider;


#import "PXGStackLayout.h"

@interface PXGPPTRowStackLayout : PXGStackLayout <PXGSublayoutProvider>

 {
    CGFloat _rowHeight;
    NSInteger _numberOfItemsPerRow;
}




-(id)initWithSettings:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;


@end


#endif