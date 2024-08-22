// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXSCROLLABLECONTENTVIEW_H
#define PRXSCROLLABLECONTENTVIEW_H

@class UIScrollView, NSLayoutConstraint;


#import "PRXCardContentView.h"

@interface PRXScrollableContentView : PRXCardContentView

@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint; // ivar: _scrollViewHeightConstraint


-(id)initWithCardStyle:(NSInteger)arg0 ;
-(id)initWithCardStyle:(NSInteger)arg0 scrollView:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif