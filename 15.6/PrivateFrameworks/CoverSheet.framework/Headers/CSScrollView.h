// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSCROLLVIEW_H
#define CSSCROLLVIEW_H

@class SBFPagedScrollView;
@protocol CSScrollViewDelegate;



@interface CSScrollView : SBFPagedScrollView

@property (weak, nonatomic) NSObject<CSScrollViewDelegate> *delegate;


-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif