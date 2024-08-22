// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLEAFLAYOUTPERFORMER_H
#define PXLEAFLAYOUTPERFORMER_H

@class NSArray;


#import "PXBaseLayoutPerformer.h"
#import "PXLayoutPerformerOutput.h"

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer {
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    ? layoutInput;
}




-(id)children;
-(id)layoutOutput;
-(struct ? )layoutInput;
-(struct CGSize )performLayout;
-(void)setLayoutInput:(struct ? )arg0 ;
-(void)setLayoutOutput:(id)arg0 ;


@end


#endif