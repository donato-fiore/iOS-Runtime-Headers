// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDMESSAGESVIEW_H
#define PKDASHBOARDMESSAGESVIEW_H

@class UIView, UIScrollView, NSMutableDictionary, UITableViewCell, UIImage, UIPageControl, NSString, NSOrderedSet;
@protocol UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, PKDashboardMessagesViewDelegate;


#import "PKDashboardMessageCell.h"

@interface PKDashboardMessagesView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

 {
    UIScrollView *_scrollView;
    NSMutableDictionary *_tablesViews;
    BOOL _isSmallDevice;
    CGFloat _currentWidth;
    UITableViewCell *_sampleButtonCell;
    PKDashboardMessageCell *_sampleMessageCell;
    UIImage *_dismissImage;
    NSUInteger _primaryIndex;
    UIEdgeInsets _insets;
    CGFloat _widthForLastSizeCache;
    CGFloat _maxTableViewHeight;
    CGFloat _actionCellHeight;
    UIPageControl *_pageControl;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardMessagesViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOrderedSet *messages; // ivar: _messages
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)_actionCellHeightForSize:(struct CGSize )arg0 ;
-(CGFloat)_endOfItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_maxHeightForSize:(struct CGSize )arg0 ;
-(CGFloat)_startOfItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_indexAtContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_primaryIndexAtOffset:(struct CGPoint )arg0 ;
-(id)_messageForTableView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithInsets:(struct UIEdgeInsets )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureActionCell:(id)arg0 withMessage:(id)arg1 ;
-(void)_configureMessageCell:(id)arg0 withMessage:(id)arg1 ;
-(void)_pageControlChanged:(id)arg0 ;
-(void)_reportCurrentMessageViewed;
-(void)_switchPrimaryIndexToIndex:(NSUInteger)arg0 ;
-(void)_updateSizeCacheIfNecessary;
-(void)layoutSubviews;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithMessages:(id)arg0 currentIndex:(NSUInteger)arg1 ;


@end


#endif