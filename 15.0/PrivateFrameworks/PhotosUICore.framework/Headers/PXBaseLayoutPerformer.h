// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXBASELAYOUTPERFORMER_H
#define PXBASELAYOUTPERFORMER_H

@class NSArray;
@protocol PXLayoutPerformer;

#import <Foundation/Foundation.h>

#import "PXLayoutPerformerOutput.h"

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer>



@property (readonly, nonatomic) NSArray *children; // ivar: children
@property (nonatomic) ? layoutInput; // ivar: layoutInput
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput; // ivar: layoutOutput


+(struct CGSize )performLayoutWithLayoutInput:(struct ? )arg0 layoutOutput:(id)arg1 usingBlock:(id)arg2 ;
-(struct CGSize )performLayout;
-(void)prepareForReuse;


@end


#endif