// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSCROLLVIEW_H
#define CSSCROLLVIEW_H

@class SBFPagedScrollView;
@protocol CSScrollViewDelegate;



@interface CSScrollView : SBFPagedScrollView

@property (weak, nonatomic) NSObject<CSScrollViewDelegate> *delegate;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif