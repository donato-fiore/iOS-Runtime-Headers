// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDTABTABLE_H
#define CLOUDTABTABLE_H

@class UIView, WBSCloudTabDevice, NSString, NSArray, WBSCloudTab;
@protocol CloudTabItemViewDelegate, ViewReuseManagerDelegate, CloudTabTableDelegate;


#import "CloudTabHeaderView.h"
#import "ViewReuseManager.h"

@interface CloudTabTable : UIView <CloudTabItemViewDelegate, ViewReuseManagerDelegate>

 {
    NSInteger _style;
    WBSCloudTabDevice *_device;
    CloudTabHeaderView *_headerView;
    NSUInteger _indexOfFocusedTab;
    ViewReuseManager *_itemViewReuseManager;
    _NSRange _trackedItemViewRange;
}


@property (readonly, nonatomic) CGFloat contentMinimumY;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CloudTabTableDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedTabs; // ivar: _displayedTabs
@property (retain, nonatomic) WBSCloudTab *focusedTab; // ivar: _focusedTab
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *layoutAnimator; // ivar: _layoutAnimator
@property (nonatomic) CGFloat offsetAboveFocusedTab; // ivar: _offsetAboveFocusedTab
@property (nonatomic) CGFloat offsetBelowFocusedTab; // ivar: _offsetBelowFocusedTab
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(BOOL)_shouldShowSeparatorForItemViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)updateDisplayedTabs;
-(id)initWithDevice:(id)arg0 style:(NSInteger)arg1 ;
-(struct CGRect )_rectForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )rectForTab:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_visibleItemRange;
-(void)_didSelectItemView:(id)arg0 ;
-(void)_layoutItemView:(id)arg0 representingItemAtIndex:(NSUInteger)arg1 ;
-(void)cloudTabItemViewDeleteButtonWasTapped:(id)arg0 ;
-(void)cloudTabItemViewDidFinishEditing:(id)arg0 ;
-(void)cloudTabItemViewDidStartEditing:(id)arg0 ;
-(void)cloudTabItemViewHighlightStateDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)viewReuseManager:(id)arg0 prepareView:(id)arg1 toRepresentObjectAtIndex:(NSUInteger)arg2 ;
-(void)viewReuseManager:(id)arg0 willRecycleView:(id)arg1 ;


@end


#endif