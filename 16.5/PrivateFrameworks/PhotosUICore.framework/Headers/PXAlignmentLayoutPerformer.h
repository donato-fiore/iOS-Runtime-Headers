// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXALIGNMENTLAYOUTPERFORMER_H
#define PXALIGNMENTLAYOUTPERFORMER_H

@class NSArray;
@protocol PXMutableLayoutPerformer;


#import "PXBaseLayoutPerformer.h"
#import "PXLayoutPerformerOutput.h"

@interface PXAlignmentLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>



@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (nonatomic) ? layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic) NSInteger xAlignment; // ivar: _xAlignment
@property (nonatomic) NSInteger yAlignment; // ivar: _yAlignment


+(struct CGSize )performLayoutWithLayoutInput:(struct ? )arg0 layoutOutput:(id)arg1 usingBlock:(id)arg2 ;
-(struct CGSize )performLayout;
-(void)preprareForReuse;


@end


#endif