// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIMAGESCROLLVIEW_H
#define MUIMAGESCROLLVIEW_H

@class UIScrollView;
@protocol MUImageScrollViewDelegate;



@interface MUImageScrollView : UIScrollView

@property (weak, nonatomic) NSObject<MUImageScrollViewDelegate> *delegate;


-(void)_centerContentIfNecessaryAdjustingContentOffset:(BOOL)arg0 ;
-(void)centerContentIgnoringInsets;


@end


#endif