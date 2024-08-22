// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACEEDITINGTABSVIEW_H
#define NTKFACEEDITINGTABSVIEW_H

@class UIView, NSMutableArray, NSArray;



@interface NTKFaceEditingTabsView : UIView {
    NSMutableArray *_labels;
    UIView *_labelContainer;
}


@property (retain, nonatomic) NSArray *orderedTabs; // ivar: _orderedTabs
@property (nonatomic) NSUInteger selectedTab; // ivar: _selectedTab


+(id)labelFont;
-(CGFloat)_containerOffsetForLabelAtIndex:(NSInteger)arg0 ;
-(void)_addOrRemoveLabelsAsNeeded;
-(void)_applyOrderedTabsAndLayout;
-(void)_applySelectedTab:(NSUInteger)arg0 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromTab:(NSUInteger)arg1 toTab:(NSUInteger)arg2 ;
-(void)layoutSubviews;


@end


#endif