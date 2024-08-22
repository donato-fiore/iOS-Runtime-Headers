// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIDENTITYLAYOUTPERFORMER_H
#define PXIDENTITYLAYOUTPERFORMER_H

@class NSArray;
@protocol PXMutableLayoutPerformer;


#import "PXBaseLayoutPerformer.h"
#import "PXLayoutPerformerOutput.h"

@interface PXIdentityLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>



@property (retain, nonatomic) NSArray *children; // ivar: children
@property (nonatomic) ? layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;


+(struct CGSize )performLayoutWithLayoutInput:(struct ? )arg0 layoutOutput:(id)arg1 usingBlock:(id)arg2 ;
-(struct CGSize )performLayout;


@end


#endif