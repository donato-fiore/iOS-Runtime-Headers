// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBICONLISTVIEW_H
#define DBICONLISTVIEW_H

@class SBIconListView;



@interface DBIconListView : SBIconListView

@property (nonatomic) UIEdgeInsets insets; // ivar: _insets


+(NSUInteger)iconColumnsForScreenWidth:(CGFloat)arg0 iconImageSize:(struct CGSize )arg1 statusBarEdge:(NSUInteger)arg2 ;
+(NSUInteger)iconRowsForScreenHeight:(CGFloat)arg0 iconImageSize:(struct CGSize )arg1 statusBarEdge:(NSUInteger)arg2 interactionAffordances:(NSUInteger)arg3 ;
-(BOOL)adaptsOrientationToTraitCollection;
-(BOOL)automaticallyAdjustsLayoutMetricsToFit;
-(BOOL)usesAlternateLayout;
-(Class)baseIconViewClass;
-(struct CGSize )alignmentIconSize;
-(struct UIEdgeInsets )layoutInsetsForOrientation:(NSInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif