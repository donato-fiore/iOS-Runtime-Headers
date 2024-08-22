// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUISCROLLVIEW_H
#define CCUISCROLLVIEW_H

@class UIScrollView;
@protocol CCUIScrollViewDelegate;



@interface CCUIScrollView : UIScrollView

@property (weak, nonatomic) NSObject<CCUIScrollViewDelegate> *delegate;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif