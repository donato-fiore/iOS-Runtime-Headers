// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVMLGRIDVIEW_H
#define _TVMLGRIDVIEW_H

@class TVGridView, NSString, UIView;
@protocol TVRowHosting_Collection;



@interface _TVMLGridView : TVGridView <TVRowHosting_Collection>



@property (nonatomic) BOOL configureForListTemplate; // ivar: _configureForListTemplate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) Class superclass;


-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(id)rowMetricsForExpectedWidth:(CGFloat)arg0 firstItemRowIndex:(*NSInteger)arg1 ;
-(id)rowMetricsForExpectedWidth:(CGFloat)arg0 withContentInset:(struct UIEdgeInsets )arg1 firstItemRowIndex:(*NSInteger)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif