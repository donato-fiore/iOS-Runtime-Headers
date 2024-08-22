// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTACKLAYOUTPERFORMER_H
#define PXSTACKLAYOUTPERFORMER_H

@class NSArray;
@protocol PXMutableLayoutPerformer;


#import "PXBaseLayoutPerformer.h"
#import "PXLayoutPerformerOutput.h"

@interface PXStackLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>



@property (retain, nonatomic) NSArray *children; // ivar: children
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) NSInteger layoutAxis; // ivar: _layoutAxis
@property (nonatomic) ? layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;


+(struct CGSize )performLayoutWithLayoutInput:(struct ? )arg0 layoutOutput:(id)arg1 usingBlock:(id)arg2 ;
-(struct CGSize )_calculateSizeForLayout;
-(struct CGSize )performLayout;
-(void)_performLayoutPass;
-(void)prepareForReuse;


@end


#endif