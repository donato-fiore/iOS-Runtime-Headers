// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXCARDCONTENTWRAPPERVIEW_H
#define PRXCARDCONTENTWRAPPERVIEW_H

@class UIView, NSArray, NSString, UIScrollView, UILabel;
@protocol PRXCardContentViewDelegate, UIScrollViewDelegate;


#import "PRXCardBottomTray.h"
#import "PRXCardContentView.h"
#import "PRXButton.h"
#import "PRXAction.h"

@interface PRXCardContentWrapperView : UIView <PRXCardContentViewDelegate, UIScrollViewDelegate>



@property (copy, nonatomic) NSArray *actionButtons;
@property (readonly, copy, nonatomic) NSArray *auxiliaryViews;
@property (readonly, nonatomic) UIView *bottomKeyline; // ivar: _bottomKeyline
@property (readonly, nonatomic) PRXCardBottomTray *bottomTray; // ivar: _bottomTray
@property (readonly, nonatomic) PRXCardContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PRXButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRXAction *infoButtonAction; // ivar: _infoButtonAction
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) UILabel *scrolledTitleLabel; // ivar: _scrolledTitleLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *titleContainer; // ivar: _titleContainer
@property (readonly, nonatomic) UIView *topKeyline; // ivar: _topKeyline


-(id)initWithContentView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)removeBottomTray;
-(void)scrollToBottom;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif