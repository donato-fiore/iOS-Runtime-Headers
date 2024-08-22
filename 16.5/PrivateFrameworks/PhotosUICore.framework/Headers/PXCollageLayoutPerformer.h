// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOLLAGELAYOUTPERFORMER_H
#define PXCOLLAGELAYOUTPERFORMER_H

@class NSArray, NSMutableArray;
@protocol PXLayoutPerformer;


#import "PXBaseLayoutPerformer.h"
#import "PXLayoutPerformerOutput.h"
#import "PXLeafLayoutPerformer.h"
#import "PXSplitLayoutPerformer.h"

@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <PXLayoutPerformer>



@property (readonly, nonatomic) NSArray *children;
@property (nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) ? layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (retain, nonatomic) NSMutableArray *mutableChildren; // ivar: _mutableChildren
@property (nonatomic) NSInteger numberOfVisibleItems; // ivar: _numberOfVisibleItems
@property (nonatomic) CGFloat outerLayoutRatio; // ivar: _outerLayoutRatio
@property (nonatomic) BOOL portraitBias; // ivar: _portraitBias
@property (retain, nonatomic) PXLeafLayoutPerformer *singleItemPerformer; // ivar: _singleItemPerformer
@property (retain, nonatomic) PXSplitLayoutPerformer *threeItemNestedPerformer; // ivar: _threeItemNestedPerformer
@property (retain, nonatomic) PXSplitLayoutPerformer *threeItemPerformer; // ivar: _threeItemPerformer
@property (retain, nonatomic) PXSplitLayoutPerformer *twoItemPerformer; // ivar: _twoItemPerformer


+(struct CGSize )performLayoutWithLayoutInput:(struct ? )arg0 layoutOutput:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(struct CGSize )performLayout;
-(void)prepareForReuse;


@end


#endif